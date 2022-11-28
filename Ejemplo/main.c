#include <stdio.h>

int main(void){
    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad < 18){
        printf("No puede pasar Ud.! =^)\n\n");
    }

    return 0;
}
