#include <stdio.h>

int esCaracterMayuscula(char caracter);

int main(void){
    char caracter;

    printf("Ingresa un caracter ");
    scanf("%c",&caracter);

    if(esCaracterMayuscula(caracter)){
        printf("Si es.\n\n");
    }
    else{
        printf("No es.\n\n");
    }

    return 0;
}
int esCaracterMayuscula(char caracter){
    if(caracter < 65){
        return 0;
    }
    else{
        if(caracter <= 90){
            return 1;
        }
        else{
            return 0;
        }
    }
}
