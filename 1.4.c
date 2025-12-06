#include <stdio.h>

int GetSet(int s[], int *n) {
    printf("Input Num: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &s[i]); 
    }

}
int main() {
    int *data , num;
    num = GetSet(data,&num);
       printf("Your number: ");
    for (int i = 0; i < num; i++)  {
        printf("%d ", data[i]);
    }
    return 0;

}