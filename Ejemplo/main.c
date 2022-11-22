#include <stdio.h>

//Declaracion de funcion con retorno y argumento(s)
int suma(int, int);

int main(void){
    //El programa hace 1 y 3
    int a, b, c;

    //1. Pide dato(s)
    printf("Dame un numero ");
    scanf("%d",&a);
    printf("Dame otro numero ");
    scanf("%d",&b);

    //Invocacion de funcion con retorno y argumento(s)
    c=suma(a,b);

    //3.Muestra resultado(s), c
    printf("%d + %d = %d\n",a,b,c);

    return 0;
}

//Definicion de funcion con retorno y argumento(s)
int suma(int x, int y){
    //La funcion hace 2

    return x+y;//2. Calcula operacion(es)
}

