#include <stdio.h>
#include <math.h>

int main(void){
    float g,r;

    //1. Pide datos
    printf("Dame g ");
    scanf("%f",&g);

    //2. Calcula formula(s)
    r = g*M_PI/180.0;

    //3. Muestra resultado(s)
    printf("%f grads = %f rads\n",g,r);

    return 0;
}
