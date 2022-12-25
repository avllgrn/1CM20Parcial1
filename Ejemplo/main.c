#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void esPar(void);
void esMultiploDe7(void);
void sumaDosNumeros(void);
void raicesDeEcuacionCuadratica(void);

int main(void){
    int opcion;//No se necesita forzar al do-while a ejecutar al conjunto de instrucciones, al menos una vez

    //Conjunto de instrucciones que se repite mientras la opcion no sea 5
    //Menu en un ciclo que se repite mientras opcion no sea 5
    do{
        system("cls");
        printf("1. Es par\n");
        printf("2. Es multiplo de 7\n");
        printf("3. Suma numeros\n");
        printf("4. Formula General\n");
        printf("5. Salir\n");
        printf("Cual es tu opcio? ");
        scanf("%d",&opcion);
        system("cls");
        switch(opcion){
            case 1:esPar();
                break;
            case 2:esMultiploDe7();
                break;
            case 3:sumaDosNumeros();
                break;
            case 4:
                raicesDeEcuacionCuadratica();
                break;
            case 5:
                printf("Adios!\n\n");
                break;
            default:
                printf("Opcion invalida!\n\n");
                break;
        }
        system("pause");
    }while( opcion!=5 );
    return 0;
}

void esPar(void){
    int x;
    printf("Dame un numero ");scanf("%d",&x);
    if(x%2==0){
        printf("Es par\n\n");
    }
    else{
        printf("NO es par\n\n");
    }
}
void esMultiploDe7(void){
    int x;
    printf("Dame un numero ");scanf("%d",&x);
    if(x%7==0){
        printf("Es multiplo de 7\n\n");
    }
    else{
        printf("NO es multiplo de 7\n\n");
    }
}
void sumaDosNumeros(void){
    int a, b, c;
    printf("Dame un numero ");scanf("%d",&a);
    printf("Dame otro numero ");scanf("%d",&b);
    c=a+b;
    printf("%d + %d = %d\n\n",a,b,c);
}
void raicesDeEcuacionCuadratica(void){
    float a, b, c, x1, x2;
    printf("Dame a ");scanf("%f",&a);
    printf("Dame b ");scanf("%f",&b);
    printf("Dame c ");scanf("%f",&c);
    if(a==0){
        printf("Error! Indeterminacion... =(\n\n");
    }
    else if(pow(b,2)-4*a*c < 0){
        printf("Error! Raices imaginarias... =(\n\n");
    }
    else{
        x1 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);
        x2 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
        printf("x1 = %f\n",x1);
        printf("x2 = %f\n\n",x2);
    }
}
