#include <stdio.h>
#include <stdlib.h>
#include "ingreso.h"

float pedirEntero(char texto[])
{
    float numero;

    printf("%s",texto);
    scanf("%f",&numero);

    system("cls");

    return numero;
}
