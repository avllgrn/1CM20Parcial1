#include <stdio.h>
#include <math.h>

int main(void){
    float a;
    float b;
    float c;
    float x1;
    float x2;

    //1. Pide datos
    printf("Dame a ");
    scanf("%f",&a);
    printf("Dame b ");
    scanf("%f",&b);
    printf("Dame c ");
    scanf("%f",&c);

    //2. Calcula formula(s)
    x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);

    //3. Muestra resultado(s)
    printf("x1 = %f\n",x1);
    printf("x2 = %f\n",x2);

    return 0;
}
