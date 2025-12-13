#include<stdio.h>
#include<string.h>

void reverse( char str1[], char str2[]) {
    int len = strlen( str1);
    int i, j ;

    for ( i = len -1, j = 0; i >= 0; i--, j++) {
        str2[j] = str1[i];

    }
    str2[j] = '\0';
}
int main() {
    char text[ 50 ] = " I love you";
    char out [50];
    reverse ( text, out);

    printf(" str1 : %s\n", text);
    printf(" str2 : %s\n", out);

    return 0;
}