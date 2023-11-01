#include <stdio.h>

int main(){

    int x;
    printf("Type a number: ");
    scanf("%d", &x);

    if(x==0){
        printf("The value is zero.\n");
    }
    else{
        if((x%2) == 0){
            printf("The value entered is even.\n");
        }
        else{
            printf("The value entered is odd.\n");
        }
    }

    return 0;
}