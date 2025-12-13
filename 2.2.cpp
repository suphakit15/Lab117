#include<stdio.h>
#include<string.h>

char* reverse( char str1[]) {
    int len = strlen(str1);
    char *str2 = new char[ len + 1];
    int i , j;

    for ( i = len -1, j = 0; i >= 0; i--, j++) {
        str2[j] = str1[i];
    }
    str2[j] = '\0';

    return str2;
}
int main() {
    char text[ 50 ] = " I love you";
    char *out ; 
    out = reverse( text);

    printf(" str1 : %s\n", text);
    printf(" str2 : %s\n", out);

    delete[] out;

    return 0;
}