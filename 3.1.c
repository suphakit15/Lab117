#include<stdio.h>
#include<string.h>

struct student
{
    char name[20];
    int age;
    char sex;
    float gpa;
};

void upgrade( struct student *child );
typedef struct student stds;

 int main() {
    struct student aboy; 
    stds agirl;
    aboy.sex = 'M';
    agirl.sex = 'W';
    aboy.gpa = 3.00 ;
    agirl.gpa = 3.00; 
    upgrade(&aboy);
    upgrade(&agirl);
    printf(" %.2f %.2f", aboy.gpa, agirl.gpa);
    return 0;
 }

 void upgrade(struct student *child) {
    if (child -> sex == 'M'){
        child -> gpa = child -> gpa * 1.10;
    } else {
        child -> gpa = child -> gpa * 1.20;
    }
 }