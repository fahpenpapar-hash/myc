//เขียนโปรแกรมแสดงข้อความ IoT-SAU
//แสดงผลการคำนวณ 2 ยกกำลัง 500
//" " double quote, ' ' sing quote, # hsah, / round bracket, \ slash
//{ } curly bracket ( ) curly bracket, [ ] square bracket, < > angle bracket
// : colon, ; semicolon, 'backtick (Alt+9+6),

#include <stdio.h>  //หรือ "stdio.h"
#include <math.h>

//การกำหนดค่าคงที่ คือ การสร้างตัวแทนเพื่อมาเก็บข้อมูลใดๆ โดยที่ไม่สามารถเปลลี่ยนค่าข้อมูลนั้นได้
//และสามารถเอาตัวแทนที่สร้างไปใช้โปรแกรมได้
#define showline printf("+++++++++++++++++++++++++\n");
#define SMILE "^___^555 "

int main(){
    showline
    printf("IOT-SAU\n");
    showline
    showline
    printf("%lf\n",pow(2, 10) );
    printf("%s\n", SMILE)

    return 0;
}