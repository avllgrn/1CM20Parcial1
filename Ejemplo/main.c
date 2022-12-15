#include <stdio.h>

int main(void){
    int genero;
    printf("Ingresa tu genero ");
    scanf("%c",&genero);

    switch(genero){
        case 'f':
        case 'F':
            printf("Femenino");
            break;
        case 'm':
        case 'M':
            printf("Masculino");
            break;
        default:
            printf("NR");
            break;
    }

    return 0;
}
