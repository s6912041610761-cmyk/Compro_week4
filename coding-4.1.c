#include <stdio.h> //header

int main() {
    char name[30]; //เก็บข้อมูลชื่อแบบ string ขนาด 30
    int age; //เก็บข้อมูลอายุ
    float heigth; //เก็บข้อมูลส่วนสูง

    char drink; //เก็บข้อมูลชื่อเครื่องดื่ม T
    float price; //เก็บข้อมูลราคา
    char size; // เก็บข้อมูลขนาดของเครื่องดื่ม ขนาด M
    
    scanf("%s %d %f", name, &age, &heigth);
    //ใช้ %s ในการรับข้อมูลชื่อเป็นข้อความ ใช้ %d รับข้อมูลอายุเป็นตัวเลขจำนวนเต็ม ใช้ %f รับข้อมูลส่วนสูงแบบมีทศนิยม
    scanf(" %c %f %c", &drink, &price, &size);
    //ใช้ %c ในการรับชื่อเครื่องดื่มแบบหนึ่งตัวอักษร ใช้ %f ในการรับข้อมูลราคาของเครื่องดื่มแบบมีทศนิยม ใช้ %c ในการรับข้อมูลเกี่ยวกับขนาดของเครื่องดื่มแบบหนึ่งตัวอักษร
    
    printf("%s is %d years old and is %.1f cm tall.\n",name ,age ,heigth);
    //แสดงผลบรรทัดที่ 1 "%s is %d years old and is %.1f cm tall." (ที่ใช้ %.1f เพราะต้องการทศนิยม 1 ตำแหน่ง)
    printf("Favorite drink %c costs %.2f baht and has size %c.",drink ,price ,size);
    //แสดงผลบรรทัดที่ 2 "Favorite drink %c costs %.2f baht and has size %c." (ที่ใช้ %.2f เพราะต้องการทศนิยม 2 ตำแหน่ง)

    return 0; //ส่งค่าจบโปรแกรม
}