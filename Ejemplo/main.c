#include <stdio.h>

int main(void){
    float f,c;

    //1. Pide datos
    printf("Dame f ");
    scanf("%f",&f);

    //2. Calcula formula(s)
    c = 5.0/9.0*(f-32);

    //3. Muestra resultado(s)
    printf("%f %cC = %f %cF\n",f,248,c,248);

    return 0;
}
