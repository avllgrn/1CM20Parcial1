#include <stdio.h>
#include <math.h>

int main(void){
    float kmh;
    float mph;

    //1. Pide datos
    printf("Dame km/h ");
    scanf("%f",&kmh);

    //2. Calcula formula(s)
    mph = kmh * 0.621371;
 
    //3. Muestra resultado(s)
    printf("%f km/h = %f mph\n",kmh,mph);

    return 0;
}
