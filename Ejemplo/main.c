#include <stdio.h>

//Declaracion de Funcion vacia (sin retorno ni argumento(s))
void suma(void);

int main(void){

    //Invocacion de Funcion vacia (sin retorno ni argumento(s))
    suma();

    return 0;
}

//Definicion de Funcion vacia (sin retorno ni argumento(s))
void suma(void){
    //La funcion hace 1, 2 y 3
    int a, b, c;

    //1. Pide dato(s)
    printf("Dame un numero ");
    scanf("%d",&a);
    printf("Dame otro numero ");
    scanf("%d",&b);

    //2. Calcula operacion(es)
    c=a+b;

    //3.Muestra resultado(s), c
    printf("%d + %d = %d\n",a,b,c);
}

