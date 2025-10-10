//โปรแกรมแสดงชื่อ Sombat และคะแนน 99 ทางหน้าจอ
#include <stdio.h>

int main(){

    char fullname[10] = "Sombat";
    int score;

    score = 99;

    //ใน "" ของ prtintf() เขียนอย่างไรแสดงอย่างนั้น 
    //ยกเว้น % format spec., \ escape sequencw
    printf("Name is : ",fullname);
    printf("Name is : %s\n", fullname);
    printf("Score is : %d\n", score);

    return 0;
}