#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int i;//Variable contador

    i = 10;//Variable que comienza en un numero
    do{
        printf("%d ",i);//Se muestra cada valor que toma el contador
        i = i - 1;//Retrocede de uno en uno
    }while( i>0 );//Acaba en otro

    return 0;
}
