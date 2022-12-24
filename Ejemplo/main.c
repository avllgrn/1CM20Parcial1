#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int i;//Variable contador

    i = 1;//Variable que comienza en un numero
    do{
        printf("%d ",i);//Se muestra cada valor que toma el contador
        i = i + 1;//Avanza de uno en uno
    }while( 1 );//Acaba en otro (en el infinito)

    return 0;
}
