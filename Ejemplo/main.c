#include <stdio.h>
int main(void){
    char genero, estadoCivil;
    printf("Ingresa genero y estado civil (sin espacio ni enter) ");
    scanf("%c%c",&genero,&estadoCivil);

    if(genero == 'f'){
        if(estadoCivil == 's'){
            printf("soltera\n");
        }
        else{
            if(estadoCivil == 'S'){
                printf("SOLTERa\n");
            }
            else{
                if(estadoCivil == 'c'){
                    printf("casada\n");
                }
                else{
                    if(estadoCivil == 'C'){
                        printf("CASADa\n");
                    }
                    else{
                        if(estadoCivil == 'd'){
                            printf("divorciada\n");
                        }
                        else{
                            if(estadoCivil == 'D'){
                                printf("DIVORCIADa\n");
                            }
                            else{
                                if(estadoCivil == 'v'){
                                    printf("viuda\n");
                                }
                                else{
                                    if(estadoCivil == 'V'){
                                        printf("VIUDa\n");
                                    }
                                    else{
                                        printf("femenino, Estado Civil: NO reconocido\n");
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else{
        if(genero == 'F'){
            if(estadoCivil == 's'){
                printf("solterA\n");
            }
            else{
                if(estadoCivil == 'S'){
                    printf("SOLTERA\n");
                }
                else{
                    if(estadoCivil == 'c'){
                        printf("casadA\n");
                    }
                    else{
                        if(estadoCivil == 'C'){
                            printf("CASADA\n");
                        }
                        else{
                            if(estadoCivil == 'd'){
                                printf("divorciadA\n");
                            }
                            else{
                                if(estadoCivil == 'D'){
                                    printf("DIVORCIADA\n");
                                }
                                else{
                                    if(estadoCivil == 'v'){
                                        printf("viudA\n");
                                    }
                                    else{
                                        if(estadoCivil == 'V'){
                                            printf("VIUDA\n");
                                        }
                                        else{
                                            printf("FEMENINO, Estado Civil: NO reconocido\n");
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        else{
            if(genero == 'm'){
                if(estadoCivil == 's'){
                    printf("soltero\n");
                }
                else{
                    if(estadoCivil == 'S'){
                        printf("SOLTERo\n");
                    }
                    else{
                        if(estadoCivil == 'c'){
                            printf("casado\n");
                        }
                        else{
                            if(estadoCivil == 'C'){
                                printf("CASADo\n");
                            }
                            else{
                                if(estadoCivil == 'd'){
                                    printf("divorciado\n");
                                }
                                else{
                                    if(estadoCivil == 'D'){
                                        printf("DIVORCIADo\n");
                                    }
                                    else{
                                        if(estadoCivil == 'v'){
                                            printf("viudo\n");
                                        }
                                        else{
                                            if(estadoCivil == 'V'){
                                                printf("VIUDo\n");
                                            }
                                            else{
                                                printf("masculino, Estado Civil: NO reconocido\n");
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else{
                if(genero == 'M'){
                    if(estadoCivil == 's'){
                        printf("solterO\n");
                    }
                    else{
                        if(estadoCivil == 'S'){
                            printf("SOLTERO\n");
                        }
                        else{
                            if(estadoCivil == 'c'){
                                printf("casadO\n");
                            }
                            else{
                                if(estadoCivil == 'C'){
                                    printf("CASADO\n");
                                }
                                else{
                                    if(estadoCivil == 'd'){
                                        printf("divorciadO\n");
                                    }
                                    else{
                                        if(estadoCivil == 'D'){
                                            printf("DIVORCIADO\n");
                                        }
                                        else{
                                            if(estadoCivil == 'v'){
                                                printf("viudO\n");
                                            }
                                            else{
                                                if(estadoCivil == 'V'){
                                                    printf("VIUDO\n");
                                                }
                                                else{
                                                    printf("MASCULINO, Estado Civil: NO reconocido\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else{
                    if(estadoCivil == 's'){
                        printf("Genero NO reconocido, Estado Civil: soltero\n");
                    }
                    else{
                        if(estadoCivil == 'S'){
                            printf("Genero NO reconocido, Estado Civil: SOLTERO\n");
                        }
                        else{
                            if(estadoCivil == 'c'){
                                printf("Genero NO reconocido, Estado Civil: casado\n");
                            }
                            else{
                                if(estadoCivil == 'C'){
                                    printf("Genero NO reconocido, Estado Civil: CASADO\n");
                                }
                                else{
                                    if(estadoCivil == 'd'){
                                        printf("Genero NO reconocido, Estado Civil: divorciado\n");
                                    }
                                    else{
                                        if(estadoCivil == 'D'){
                                            printf("Genero NO reconocido, Estado Civil: DIVORCIADO\n");
                                        }
                                        else{
                                            if(estadoCivil == 'v'){
                                                printf("Genero NO reconocido, Estado Civil: viudo\n");
                                            }
                                            else{
                                                if(estadoCivil == 'V'){
                                                    printf("Genero NO reconocido, Estado Civil: VIUDO\n");
                                                }
                                                else{
                                                    printf("Genero NO reconocido, Estado Civil: NO reconocido\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
