#include <stdio.h>
int main(void){
    char genero;
    printf("Ingresa un genero ");
    scanf("%c",&genero);

    if(genero == 'f'){
        printf("femenino\n");
    }
    else{
        if(genero == 'F'){
            printf("FEMENINO\n");
        }
        else{
            if(genero == 'm'){
                printf("mascuilino\n");
            }
            else{
                if(genero == 'M'){
                    printf("MASCULINO\n");
                }
                else{
                    printf("NO reconocido\n");
                }
            }
        }
    }
    return 0;
}
