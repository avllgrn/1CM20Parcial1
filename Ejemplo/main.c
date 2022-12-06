#include <stdio.h>

int esCaracterMinuscula(char caracter);

int main(void){
    char caracter;

    printf("Ingresa un caracter ");
    scanf("%c",&caracter);

    if(esCaracterMinuscula(caracter)){
        printf("Si es.\n\n");
    }
    else{
        printf("No es.\n\n");
    }

    return 0;
}
int esCaracterMinuscula(char caracter){
    if(caracter < 97){
        return 0;
    }
    else{
        if(caracter <= 122){
            return 1;
        }
        else{
            return 0;
        }
    }
}
