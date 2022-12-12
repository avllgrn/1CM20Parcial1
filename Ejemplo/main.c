#include <stdio.h>
int main(void){
    char genero;
    printf("Ingresa un genero ");
    scanf("%c",&genero);
    if(genero == 's'){
        printf("soltero\n");
    }
    else if(genero == 'S'){
        printf("SOLTERO\n");
    }
    else if(genero == 'c'){
        printf("casado\n");
    }
    else if(genero == 'C'){
        printf("CASADO\n");
    }
    else if(genero == 'd'){
        printf("divorciado\n");
    }
    else if(genero == 'D'){
        printf("DIVORCIADO\n");
    }
    else if(genero == 'v'){
        printf("viudo\n");
    }
    else if(genero == 'V'){
        printf("VIUDO\n");
    }
    else{
        printf("NO reconnocido\n");
    }

    return 0;
}
