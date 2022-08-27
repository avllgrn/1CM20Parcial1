#include <stdio.h>

int main(void){

    printf("%f\n",2.0+3.0);
    printf("%f\n",2.0-3.0);
    printf("%f\n",2.0*3.0);
    printf("%f\n\n",2.0/3.0);

    printf("2.0\t+\t3\t=\t%f\n",2.0+3.0);
    printf("2.0\t-\t3\t=\t%f\n",2.0-3.0);
    printf("2.0\t*\t3\t=\t%f\n",2.0*3.0);
    printf("2.0\t/\t3\t=\t%f\n\n",2.0/3.0);

    printf("%f\t+\t%f\t=\t%f\n",2.0,3.0,2.0+3.0);
    printf("%f\t-\t%f\t=\t%f\n",2.0,3.0,2.0-3.0);
    printf("%f\t*\t%f\t=\t%f\n",2.0,3.0,2.0*3.0);
    printf("%f\t/\t%f\t=\t%f\n\n",2.0,3.0,2.0/3.0);

    return 0;
}
