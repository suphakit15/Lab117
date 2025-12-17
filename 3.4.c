#include<stdio.h>

struct student {
    char name[ 20 ];
    int age;
};
void GetStudent( struct student child[][10], int *room);

int main() {
    struct student children[ 20 ][ 10 ];
    int group;
    GetStudent( children, &group );
    return 0;
}

int i , j;
void GetStudent( struct student child[][10], int *room) {
    scanf("%d",room);

    for ( i = 0; i < *room; i++) {
        printf(" Room %d\n", i + 1);
        for ( j = 0; j < 10; j++) {
            printf(" Student %d name :", j + 1 );
            scanf("%s",child[i][j].name);
            printf(" Student %d age :", j + 1 );
            scanf("%d",&child[i][j].age);
        }
        
    }
    
}