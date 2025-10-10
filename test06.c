//Global-Local Vartable
#include "stdio.h" //หรือ <stdio.h>

int dataA = 100; //Golbal Variable ใช้ที่ไไหนก็ได้

void showData(){
    int dataB = 555; //Local Variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น

    printf("dataA = %d\n",dataA);
    printf("dataB = %d\n",dataB);
    printf("dataE = %d\n",dataE);
    //printf("dataC = %d\n,dataC); Error
    //printf("dataD = %d\n",dataD); Error
}

int main(){
    int dataC = 999; //Local Variabla ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น

    printf(dataA = %d\n",dataA);
    printf("dataC = %d\n",dataC);
    //printf("dataB = %d\n",dataB); Error

    return 0;
}

int main(){
    int dataC = 999; //Local Variable ใช้ได้เฉพาะใน code block นั้นๆ เท่านั้น
    const int dataD = 1010; //Constant(คำคงที่) Variable
    // dataD = 2020; Error

    dataC = 888;

    printf("dataA = %d\n",dataA);
    printf("dataC = %d\n",dataC);
    printf("dataD = %d\n",dataD);
    //printf("dataB = %d\n",dataB); Error

    return 0;
}