#include <stdio.h>

int main(void){
    float b,h,a,p;

    //1. Pide datos
    printf("Dame base ");
    scanf("%f",&b);
    printf("Dame altura ");
    scanf("%f",&h);

    //2. Calcula formula(s)
    a=b*h;
    p=2*b+2*h;

    //3. Muestra resultado(s)
    printf("Base:\t\t%f\n",b);
    printf("Alura:\t\t%f\n",h);
    printf("Area:\t\t%f\n",a);
    printf("Perimetro:\t%f\n",p);

    return 0;
}
