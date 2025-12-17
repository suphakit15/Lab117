#include<stdio.h>

struct student {
    char name[ 20 ];
    int age;
};

struct student (*GetStudent( int *room))[ 3 ];

int main() {
    struct student (*children)[ 3 ];
    int group;
    children  = GetStudent( &group);
    return 0;
}
int i , j;
struct student (*GetStudent( int *room))[ 3 ] {
    static struct student children[ 20 ][ 3 ];
    scanf("%d", room);

    for ( i = 0; i < *room; i ++) {
     printf(" Room %d\n", i + 1);
        for ( j = 0; j < 3; j++) {
            printf(" Student %d name :", j + 1 );
            scanf("%s",children[i][j].name);
            printf(" Student %d age :", j + 1 );
            scanf("%d",&children[i][j].age);
        }
    }
    return children;
}