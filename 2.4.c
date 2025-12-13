#include<stdio.h>
#include<string.h>

void explode(char str1[], char splitter, char str2[][10], int *count) {
    int len = strlen(str1);
    int i, j, k;
    *count = 0;
    i = 0;
    k = 0;

    for (j = 0; j <= len; j++) {
        if (str1[j] == splitter || str1[j] == '\0') {
            str2[i][k] = '\0';
            i++;
            k = 0;
            
            if (i >= 20) {
                break;
            }
        } else {
            if (k < 9) {
                str2[i][k] = str1[j];
                k++;
            }
        }
    }
    
    *count = i;
}

int main() { 
    char out[20][10];
    int num; 
    explode("I/love/you", '/', out, &num);
    
    printf("จะได้ผลลัพธ์คือ:\n");
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = %s\n", i, out[i]);
    }
    printf("count = %d\n", num);
    
    return 0;
}