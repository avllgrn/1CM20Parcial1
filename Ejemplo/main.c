#include <stdio.h>

int main(void){
    int genero;
    printf("Ingresa tu genero ");
    scanf("%c",&genero);

    switch(genero){
        case 'f':
            printf("femenino");
            break;
        case 'F':
            printf("Femenino");
            break;
        case 'm':
            printf("masculino");
            break;
        case 'M':
            printf("Masculino");
            break;
        default:
            printf("NR");
            break;
    }

    return 0;
}
