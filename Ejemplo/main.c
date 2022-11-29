#include <stdio.h>

int main(void){
    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad<0){
        printf("Error! (-)\n");
    }
    else{
        if(edad<18){
            printf("No pasas!\n");
        }
        else{
            if(edad < 134){
                printf("Pasas!\n");
            }
            else{
                printf("Error! (+)\n");
            }
        }
    }

    return 0;
}
