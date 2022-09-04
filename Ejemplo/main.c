#include <stdio.h>
#include <math.h>

int main(void){
    float kg;
    float lbs;

    //1. Pide datos
    printf("Dame kg ");
    scanf("%f",&kg);
 
    //2. Calcula formula(s)
    lbs = kg * 2.20462;
 

    //3. Muestra resultado(s)
    printf("%f kg = %flbs\n",kg,lbs);

    return 0;
}
