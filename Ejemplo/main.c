#include <stdio.h>

int main(void){
    int genero;
    printf("Ingresa tu genero ");
    scanf("%c",&genero);

    if(genero=='f' || genero=='F'){
        printf("Femenino");
    }
    else if(genero=='m' || genero=='M'){
        printf("Masculino");
    }
    else{
        printf("NO reconocido");
    }

    return 0;
}
