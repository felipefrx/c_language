#include <stdio.h>

int main(){

    int a;
    printf("Enter note: ");
    scanf("%d", &a);

    switch(a){
        case 'A': 
            printf("Approved. \n"); // if a == 'A'
            break;
        case 'B':
            printf("Approved. \n"); // else if(a == 'B')
            break;
        case 'C':
            printf("Approved. \n"); // else if(a == 'C')
            break;
        default:
            printf("Disapproved. \n"); // else
            break;
    }

    return 0;
}