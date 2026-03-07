#include <stdio.h>
#include <stdlib.h>

int* KnapsackGreedy(int *w, int *v, int n, int wx) {

    int *x = (int*)calloc(n, sizeof(int));
    float ratio[n];

    for(int i = 0; i < n; i++)
        ratio[i] = (float)v[i] / w[i];

    int weight = 0;

    for(int k = 0; k < n; k++) {

        int max = -1;
        for(int i = 0; i < n; i++) {
            if(ratio[i] > max) {
                max = i;
            }
        }

        if(weight + w[max] <= wx) {
            x[max] = 1;
            weight += w[max];
        }

        ratio[max] = -1;
    }

    return x;
}

int main() {

    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};

    int *x = KnapsackGreedy(w, v, n, wx);

    for(int i = 0; i < n; i++)
        printf("%d ", x[i]);

    return 0;
}