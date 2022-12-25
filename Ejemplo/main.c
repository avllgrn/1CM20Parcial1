#include <stdio.h>

int main(void){
    //Conjunto de instrucciones que se repite mientras 2<3 sea verdadero (siempre)
    //Mensaje en un ciclo infinto
    do{
        printf("Hola, mundo! ");
    }while( 2<3 );
    return 0;
}
