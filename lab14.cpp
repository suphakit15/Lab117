#include <stdio.h>

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x);

int bestValue = 0;
int bestX[100];

int main() {

    int n = 5, wx = 11;
    int w[5] = {1, 2, 5, 6, 7};
    int v[5] = {1, 6, 18, 22, 28};

    int *x;
    x = new int[n];

    int vx = KnapsackBT(w, v, n, wx, 0, x);

    printf("Value = %d\n", vx);

    for(int i = 0; i < n; i++)
        printf("%d ", x[i]);

    return 0;
}

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x) {

    if(i == n) {
        int sumW = 0, sumV = 0;

        for(int j = 0; j < n; j++) {
            if(x[j]) {
                sumW += w[j];
                sumV += v[j];
            }
        }

        if(sumW <= wx && sumV > bestValue) {
            bestValue = sumV;
            for(int j = 0; j < n; j++)
                bestX[j] = x[j];
        }

        return bestValue;
    }

    x[i] = 0;
    KnapsackBT(w, v, n, wx, i+1, x);

    x[i] = 1;
    KnapsackBT(w, v, n, wx, i+1, x);

    if(i == 0) {
        for(int j = 0; j < n; j++)
            x[j] = bestX[j];
    }

    return bestValue;
}