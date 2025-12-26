#include<stdio.h>

void go( int **p, int *z );

int main() {
    int *a, b = 10, c = 20;
    go(&a, &b); //ทำการส่งที่อยู่ของ เอ และ บี ไปในอีกโลกของเมน แล้วเปลี่บยชื่อ
    printf( "%d %p %p\n", *a, a, &a);
    printf("------\n");
    go( &a, &c);
    printf("%d %p %p\n", *a, a, &a);
    return 0;
}
void go( int **p, int *z ) { //เปลี่ยนชื่อ พ้อยเตอร์ในอีกโลก จาก เอ เป็น พี และบีเป็น z
    *p = z;//จะต้องลดระดับลงด้วยเหลือ1บั้ง ถึงสิงได้
    printf("%d %p %p\n", **p, *p, p);
}   