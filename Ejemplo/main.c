#include <stdio.h>
int main(void){
    char estadoCvil;
    printf("Ingresa un estadoCvil ");
    scanf("%c",&estadoCvil);

    if(estadoCvil == 's'){
        printf("soltero\n");
    }
    else{
        if(estadoCvil == 'S'){
            printf("SOLTERO\n");
        }
        else{
            if(estadoCvil == 'c'){
                printf("casado\n");
            }
            else{
                if(estadoCvil == 'C'){
                    printf("CASADO\n");
                }
                else{
                    if(estadoCvil == 'd'){
                        printf("divorciado\n");
                    }
                    else{
                        if(estadoCvil == 'D'){
                            printf("DIVORCIADO\n");
                        }
                        else{
                            if(estadoCvil == 'v'){
                                printf("viudo\n");
                            }
                            else{
                                if(estadoCvil == 'V'){
                                    printf("VIUDO\n");
                                }
                                else{
                                    printf("NO reconocido\n");
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
