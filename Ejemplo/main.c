#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int i;//Variable contador

    i = 0;//Variable que comienza en un numero
    do{//Acaba en otro
        printf("%d ",i);//Se muestra cada valor que toma el contador
        i = i + 1;//Avanza de uno en uno
    }while( i<10 );

    return 0;
}
