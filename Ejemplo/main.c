#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int i;//Variable contador

    i = 0;//Variable que comienza en un numero
    while( 1 ){//Acaba en otro (en el infinito)
        printf("%d ",i);//Se muestra cada valor que toma el contador
        i = i - 1;//Retrocede de uno en uno
    }

    return 0;
}
