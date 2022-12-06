#include <stdio.h>

int esCaracterNumerico(char caracter);

int main(void){
    char caracter;

    printf("Ingresa un caracter ");
    scanf("%c",&caracter);

    if(esCaracterNumerico(caracter)){
        printf("Si es.\n\n");
    }
    else{
        printf("No es.\n\n");
    }

    return 0;
}
int esCaracterNumerico(char caracter){

    if(caracter < 48){
        return 0;
    }
    else{
        if(caracter <= 57){
            return 1;
        }
        else{
            return 0;
        }
    }
}
