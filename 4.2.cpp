#include<stdio.h>

void go( int ***p, int **z );

int main() {
    int *b = new int ; *b = 10;
    int *c = new int ; *c = 20;
    int **a ; 
    go( &a, &b );
    printf("%d %d %d\n", **a, *b, *c );
    go( &a, &c );
    printf("%d %d %d\n", **a, *b, *c );
    return 0;
}
void go( int ***p, int **z ) {
    *p = z;
    printf("%d %p %p\n", ***p, **p, *p);
}
