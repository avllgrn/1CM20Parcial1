#include <stdio.h>
#include <math.h>

int main(void){
    float r,a,p;

    //1. Pide datos
    printf("Dame radio ");
    scanf("%f",&r);

    //2. Calcula formula(s)
    a=M_PI * pow(r,2);
    p=2*M_PI*r;

    //3. Muestra resultado(s)
    printf("Radio:\t\t%f\n",r);
    printf("Area:\t\t%f\n",a);
    printf("Perimetro:\t%f\n",p);

    return 0;
}
