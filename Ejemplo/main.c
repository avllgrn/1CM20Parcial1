#include <stdio.h>
#include <math.h>

int main(void){
    float kmh;
    float mph;

    //1. Pide datos
    printf("Dame mph ");
    scanf("%f",&mph);

    //2. Calcula formula(s)
    kmh = mph / 0.621371;
 
    //3. Muestra resultado(s)
    printf("%f mph = %f lm/h\n",mph,kmh);

    return 0;
}
