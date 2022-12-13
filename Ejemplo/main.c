#include <stdio.h>

int main(void){

    printf("AND &&\n");
    printf("%d\n", 0&&0);
    printf("%d\n", 0&&1);
    printf("%d\n", 1&&0);
    printf("%d\n\n\n", 1&&1);

    printf("OR ||\n");
    printf("%d\n", 0||0);
    printf("%d\n", 0||1);
    printf("%d\n", 1||0);
    printf("%d\n\n\n", 1||1);

    printf("NOT !\n");
    printf("%d\n", !0);
    printf("%d\n\n\n", !1);

    return 0;
}
