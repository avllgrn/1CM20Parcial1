#include <stdio.h>

int esCaracterMayuscula(char caracter);
int esCaracterMinuscula(char caracter);
int esLetra(char caracter);

int main(void){
    char caracter;

    printf("Ingresa un caracter ");
    scanf("%c",&caracter);

    if(esLetra(caracter)){
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
int esLetra(char caracter){
    if(esCaracterMayuscula(caracter)){
        return 1;
    }
    else{
        if(esCaracterMinuscula(caracter)){
            return 1;
        }
        else{
            return 0;
        }
    }
}
