#include <stdio.h>

int main(void){
    int edad;

    printf("Ingresa tu edad ");
    scanf("%d",&edad);

    if(edad > 17){
        printf("Pase Ud.! =^)\n\n");
    }
    else{
        printf("NO puede pasar Ud.! =^)\n\n");
    }

    return 0;
}
