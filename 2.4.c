#include <stdio.h>
#include <string.h>

void explode(char str1[], char splitter, char str2[][10], int *count);

int main() {
    char out[20][10];
    int num;
    
    explode("I/Love/You", '/', out, &num);
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }
    
    printf("count = %d\n", num);
    return 0;
}

void explode(char str1[], char splitter, char str2[][10], int *count) {
    int i = 0;
    int j = 0;
    int k = 0;
    int len = strlen(str1);
    *count = 0;
    for (i = 0; i <= len; i++) {
        if (str1[i] == splitter || str1[i] == '\0') {
            str2[k][j] = '\0';
            k++;
            (*count)++;
            j = 0;
        } else {
            str2[k][j] = str1[i];
            j++;
        }
    }
}