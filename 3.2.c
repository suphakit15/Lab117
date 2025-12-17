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
typedef struct student stds; //ย่อสตรัคให้เหลือน้อยลงโดยการใช้ ไทป์เดป 

 int main() {
    struct student aboy; 
    stds agirl;
    aboy.sex = 'M';
    agirl.sex = 'W'; //ได้มีการ เพิ่มตัวแปล agirl เข้ามาเพื่อทำการเช้ค
    aboy.gpa = 3.00 ;
    agirl.gpa = 3.00; 
    upgrade(&aboy);
    upgrade(&agirl);
    printf(" %.2f %.2f", aboy.gpa, agirl.gpa); // ทำการเช้คว่า GPA ได้เพิ่มขึ้นมา 10 20 % 
    return 0;
 }

 void upgrade(struct student *child) {
    if (child -> sex == 'M'){
        child -> gpa = child -> gpa * 1.10;
    } else {
        child -> gpa = child -> gpa * 1.20;
    }
 }