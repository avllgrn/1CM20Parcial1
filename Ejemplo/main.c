#include <stdio.h>
#include <math.h>

int main(void){
    float g,r;

    //1. Pide datos
    printf("Dame r ");
    scanf("%f",&r);

    //2. Calcula formula(s)
    g = 180.0*r/M_PI;

    //3. Muestra resultado(s)
    printf("%f rads = %f grads\n",r,g);

    return 0;
}
