#include<stdio.h>
#include<string.h>

void explode( char str1[], char splitter, char str2[][10], int *count);

int main() { 
    char out[ 20 ][ 10 ];
    int num; 

    explode( "I/love/You", "/", out, &num);
    
    printf("จะได้ผลลัพธ์คือ:\n");
    for (int a = 0; a < num; a++) {
        printf("str2[%d] = %s\n", a, out[a]);
    }

    printf("count = %d\n", num);
    return 0;
}

void explode( char str1[], char splitter, char str2[][10], int *count) {

    int len = strlen(str1);
    int a, b, c;
    *count = 0;
    a = 0;
    b = 0;
    c = 0;

    for (b = 0; b <= len; b++) {
        if (str1[b] == splitter || str1[b] == '\0') {
            str2[a][c] = '\0';
            a++;
            c = 0;

        } else {
            str2[a][c] = str1[b];
            c++;
        }
    }
    
    *count = a;
}