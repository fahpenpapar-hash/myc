#include <stdio.h>  //printf, scanf()

#define showLine prfintf("-------------------------\n");


int main(){

    int bus_number;  //int (%d), long int (%1d)

    showLine
    printf("  Bus number information\n");
    showLine
    printf("Enter bus number: ");
    scanf("%d" , &bus_number);
    showLine
    if(bus_number == 57){
        pruntf("Go to Pinklo, Bankhunnon\n");
    }eles if(bus_number == 3){
        printf("Go to Sanam Luang,Ladproao\n");
    }eles if(bus_number == 71){
        printf("Go to Hua Lamphu, Yaowarat\n");
    }eles if(bus_number == 56){
        printf("Go to Bang Lamphu, Sapan Krungthon\n");
    }eles if(bus_number == 539){
        printf("Go to Sansen, Anusawari Chai\n");
    }eles(
        printf("Don\'t have data\n");
    )
    shoeLine
    

    return 0;
}