#include <stdio.h>

int main(void){
    float f,c;

    //1. Pide datos
    printf("Dame c ");
    scanf("%f",&c);

    //2. Calcula formula(s)
    f = 9.5/5.0*c + 32;

    //3. Muestra resultado(s)
    printf("%f %cC = %f %cF\n",c,248,f,248);

    return 0;
}
