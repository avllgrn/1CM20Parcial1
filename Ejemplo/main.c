#include <stdio.h>

int main(void){
    int genero, estadoCivil;
    printf("Ingresa tu genero y estado civil (juntos sin espacios) ");
    scanf("%c%c",&genero,&estadoCivil);

    if(genero=='f' || genero=='F'){
        if(estadoCivil=='s' || estadoCivil=='S'){
            printf("Soltera");
        }
        else if(estadoCivil=='c' || estadoCivil=='C'){
            printf("Casada");
        }
        else if(estadoCivil=='d' || estadoCivil=='D'){
            printf("Divorciada");
        }
        else if(estadoCivil=='v' || estadoCivil=='V'){
            printf("Viuda");
        }
        else{
            printf("Femenino, EC: NO reconocido");
        }
    }
    else if(genero=='m' || genero=='M'){
        if(estadoCivil=='s' || estadoCivil=='S'){
            printf("Soltero");
        }
        else if(estadoCivil=='c' || estadoCivil=='C'){
            printf("Casado");
        }
        else if(estadoCivil=='d' || estadoCivil=='D'){
            printf("Divorciado");
        }
        else if(estadoCivil=='v' || estadoCivil=='V'){
            printf("Viudo");
        }
        else{
            printf("Masculino, EC: NO reconocido");
        }
    }
    else{
        if(estadoCivil=='s' || estadoCivil=='S'){
            printf("Genero: NO reconocido, EC: Soltero");
        }
        else if(estadoCivil=='c' || estadoCivil=='C'){
            printf("Genero: NO reconocido, EC: Casado");
        }
        else if(estadoCivil=='d' || estadoCivil=='D'){
            printf("Genero: NO reconocido, EC: Divorciado");
        }
        else if(estadoCivil=='v' || estadoCivil=='V'){
            printf("Genero: NO reconocido, EC: Viudo");
        }
        else{
            printf("Genero: NO reconocido, EC: NO reconocido");
        }
    }

    return 0;
}
