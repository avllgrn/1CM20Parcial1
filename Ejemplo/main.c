#include <stdio.h>

int main(void){
    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad <= 17){
        printf("No puede pasar Ud.! =^)\n\n");
    }

    return 0;
}
