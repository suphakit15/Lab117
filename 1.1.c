#include <stdio.h>

int main() {
    int N = 0; 
    int i = 0;
    
    scanf("%d", &N);/* รับค่า จำนวน N */


    for (i = 0; i < N; i++) { /*แสดงข้อความตามจำนวน N */
        printf("[%d] Hello world\n", i + 1 );
    }

    return 0;
}