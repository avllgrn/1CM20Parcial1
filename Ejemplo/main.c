#include <stdio.h>
#include <math.h>

int main(void){
    float g;
    float lbs;

    //1. Pide datos
    printf("Dame lbs ");
    scanf("%f",&lbs);
 
    //2. Calcula formula(s)
    g = lbs / 0.00220462;
 
    //3. Muestra resultado(s)
    printf("%f lbs = %f g\n",lbs,g);

    return 0;
}
