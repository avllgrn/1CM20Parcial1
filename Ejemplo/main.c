#include <stdio.h>
#include <math.h>

int main(void){
    float v,d,t;

    //1. Pide datos
    printf("Dame distancia ");
    scanf("%f",&d);
    printf("Dame tiempo ");
    scanf("%f",&t);

    //2. Calcula formula(s)
    v = d / t;
 
    //3. Muestra resultado(s)
    printf("v = %f\n",v);

    return 0;
}
