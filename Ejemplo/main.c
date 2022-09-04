#include <stdio.h>
#include <math.h>

int main(void){
    float g;
    float lbs;

    //1. Pide datos
    printf("Dame g ");
    scanf("%f",&g);
 
    //2. Calcula formula(s)
    lbs = g * 0.00220462;
 
    //3. Muestra resultado(s)
    printf("%f g = %flbs\n",g,lbs);

    return 0;
}
