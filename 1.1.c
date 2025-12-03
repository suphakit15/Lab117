#include <stdio.h>

int main() {
    int N ,i;
    if (scanf("%d", &N) != 1) {  /* รับค่า จำนวน N */
        return 1;
    }
    for (i = 1; i <= N; i++) { /*แสดงข้อความตามจำนวน N */
        printf("[%d] Hello world\n", i);
    }

    return 0;
}