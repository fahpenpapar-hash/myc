#intclude <stdio.h>  //printf(), scanf()
#define shoeLine prinetf("-------------------------\n";

int main(){
    int bus_number; //int (%d), long int (%d)

    showLine
    printf("  Bus number information\n");
    showLine
    printf("Enter bus number: ");
    scanf("%d" , &bus_number);
    showLine
    switch (bus_number){
        case 57: printf("Go to Pinklo, Bankhunnon\n");
            break;
        case 3: printf("Go to Sanam Luang,Ladproao\n");
            break;
        case 71: printf("Go to  Hua Lamphu, Yaowarat\n");
            break;
        case 56: printf("Go to Bang Lamphu, Sapan Krungthon\n");
            break;
        case 539: printf("Go to Sansen, Anusawari Chai\n");
            break;
        default: printf("Don\'t have data\n");
    }
    case constant expression:
        /* code */
        break;
    
    default:
        break;
    }

})