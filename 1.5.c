#include <stdio.h>
#include <stdlib.h>

void GetMatrix(int **value, int *row, int *col);

int main() {
    int *data;
    int m, n;

    GetMatrix(&data, &m, &n);

    printf("Matrix values:\n");
    for (int i = 0; i < m * n; i++) {
        printf("%d ", data[i]);
    }

    free(data);
    return 0;
}

void GetMatrix(int **value, int *row, int *col) {
    int i;

    printf("Enter rows: ");
    scanf("%d", row);

    printf("Enter cols: ");
    scanf("%d", col);

    *value = malloc((*row) * (*col) * sizeof(int));

    for (i = 0; i < (*row) * (*col); i++) {
        printf("Enter detail %d: ", i + 1);
        scanf("%d", &((*value)[i]));
    }
}
