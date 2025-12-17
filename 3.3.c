#include<stdio.h>
#include<string.h>

struct student {
    char name[20];
    int age;
    char sex;
    float gpa;
};

struct student upgrade( struct student child );  

 int main() {
    struct student aboy; 
    struct student agirl; //เพิ่มตัวแปล agirl เข้ามาเพื่อจะทำการเช้คว่า agirl ได้ทำการเพิ้มเกรดมั้ย
    aboy.sex = 'M';
    agirl.sex = 'W'; 
    aboy.gpa = 3.00 ;
    agirl.gpa = 3.00; 
    upgrade( aboy );
    upgrade( agirl );
    printf( " %.2f %.2f", aboy.gpa, agirl.gpa ); //ประกาศ agirl ออกมาด้วย
    return 0;
 }

 struct student upgrade( struct student child ) {
    if ( child.sex == 'M' ) { // ทำการเช้คว่า ถ้าเป็นผู้ชายจีพีเอ จะเพิ่มขึ้น 10% นอกเหนือจากนั้นจะเพิ่ม 20%
         child.gpa = child.gpa * 1.10;
    } else {
        child.gpa = child.gpa * 1.20;
    }
    return child;
 }