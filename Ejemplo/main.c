#include <stdio.h>
#include <math.h>

int main(void){
    float kg;
    float lbs;

    //1. Pide datos
    printf("Dame lbs ");
    scanf("%f",&lbs);
 
    //2. Calcula formula(s)
    kg = lbs / 2.20462;
 
    //3. Muestra resultado(s)
    printf("%f lbs = %fkg\n",lbs,kg);

    return 0;
}
