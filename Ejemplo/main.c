#include <stdio.h>

int main(void){
    int edad;
    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad<0){
        printf("Error! (-)");
    }
    else if(0<=edad && edad<18){
        printf("NO pasas");
    }
    else if(18<=edad && edad<133){
        printf("Pasas");
    }
    else{
        printf("Error! (+)");
    }

    return 0;
}
