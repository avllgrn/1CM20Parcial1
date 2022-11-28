#include <stdio.h>

int main(void){
    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad >= 18){
        printf("Pase, Ud.! =^)\n\n");
    }

    return 0;
}
