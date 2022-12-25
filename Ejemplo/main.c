#include <stdio.h>

int main(void){
    int a=2;
    int b=3;
    //Conjunto de instrucciones que se repite mientras a<b sea verdadero (siempre para 2 y 3)
    //Mensaje en un ciclo infinto
    for( ; a<b ; ){
        printf("Hola, mundo! ");
    }
    return 0;
}
