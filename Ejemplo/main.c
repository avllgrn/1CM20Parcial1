#include <stdio.h>

int main(void){
    int estadoCivil;
    printf("Ingresa tu estadoCivil ");
    scanf("%c",&estadoCivil);

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
        printf("NO reconocido");
    }

    return 0;
}
