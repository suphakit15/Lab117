#include <stdio.h>

long SumLoop( int n );
long SumRecur ( int n );

int main() {
    printf("SumLoop(10) = %d\n", SumLoop(10));
    printf("SumRecur(10) = %d\n", SumRecur(10));

    int n = 1;
    while (1) {
        printf("n = %d | Loop = %d | Recur = %d\n",n, SumLoop(n), SumRecur(n));
        n++;
    }
    return 0;
}

long SumLoop(int n ) {
    long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

long SumRecur(int n) {
    if (n <= 1)
        return n;
    return n = SumRecur(n -1);
}