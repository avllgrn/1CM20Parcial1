#include <stdio.h>
#include <math.h>

int main(void){
    float x1,y1,x2,y2,d;

    //1. Pide datos
    printf("Dame x1 ");
    scanf("%f",&x1);
    printf("Dame y1 ");
    scanf("%f",&y1);
    printf("Dame x2 ");
    scanf("%f",&x2);
    printf("Dame y2 ");
    scanf("%f",&y2);

    //2. Calcula formula(s)
    d = sqrt(pow(y2-y1,2) + pow(x2-x1,2));
 
    //3. Muestra resultado(s)
    printf("d = %f\n",d);

    return 0;
}
