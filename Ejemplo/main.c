#include <stdio.h>

int main(void){
    char genero, estadoCivil;
    printf("Ingresa tu genero y Estado civil ");
    scanf("%c%c",&genero,&estadoCivil);

    switch(genero){
        case 'f':
        case 'F':
            switch(estadoCivil){
                case 's':
                case 'S':
                    printf("Soltera");
                    break;
                case 'c':
                case 'C':
                    printf("Casada");
                    break;
                case 'd':
                case 'D':
                    printf("Divorciada");
                    break;
                case 'v':
                case 'V':
                    printf("Viuda");
                    break;
                default:
                    printf("F, EC: NR");
                    break;
            }
            break;
        case 'm':
        case 'M':
            switch(estadoCivil){
                case 's':
                case 'S':
                    printf("Soltero");
                    break;
                case 'c':
                case 'C':
                    printf("Casado");
                    break;
                case 'd':
                case 'D':
                    printf("Divorciado");
                    break;
                case 'v':
                case 'V':
                    printf("Viudo");
                    break;
                default:
                    printf("M, EC: NR");
                    break;
            }
            break;
        default:
            switch(estadoCivil){
                case 's':
                case 'S':
                    printf("Genero: NR, Soltero");
                    break;
                case 'c':
                case 'C':
                    printf("Genero: NR, Casado");
                    break;
                case 'd':
                case 'D':
                    printf("Genero: NR, Divorciado");
                    break;
                case 'v':
                case 'V':
                    printf("Genero: NR, Viudo");
                    break;
                default:
                    printf("Genero: NR, EC: NR");
                    break;
            }
            break;
    }

    return 0;
}
