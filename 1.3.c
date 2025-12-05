#include <stdio.h>
#include <stdlib.h>

int *GetSet(int *n);

int main() {
    int *data;
    int num;
    int i;

    data = GetSet(&num);

    printf("Your numbers:");
    for (i = 0; i < num; i++) {
        printf("%d ", data[i]);
    }

    free(data);
    return 0;
}

int *GetSet(int *n) {
    int i;

    printf("Enter number: ");
    scanf("%d", n);

    int *arr = malloc(*n * sizeof(int));

    for (i = 0; i < *n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    return arr;
}
