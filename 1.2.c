#include <stdio.h>

void GetSet(int data[], int *num);

int main() {
    int data[100];
    int num;
    GetSet(data, &num);
    return 0;
}

void GetSet(int data[], int *num) {
    if (scanf("%d", num) != 1) { /*รับจำนวนสมาชิก*/
        return;
    }

    for (int i = 0; i < *num; i++) {
        printf("Enter Number %d: ", i + 1);
        if (scanf("%d", &data[i]) != 1) { /*รับค่าของแต่ละสมาชิกในเช้ต*/
            return;  
        }
    }

    for (int i = 0; i < *num; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
}