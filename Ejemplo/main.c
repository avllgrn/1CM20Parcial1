#include <stdio.h>

int main(void){
    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad >= 134){
        printf("Error! (+)\n");
    }
    else{
        if(edad >= 18){
            printf("Pasas!\n");
        }
        else{
            if(edad >= 0){
                printf("No pasas!\n");
            }
            else{
                printf("Error! (-)\n");
            }
        }
    }

    return 0;
}
