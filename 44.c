/*Leer un número y calcularle su factorial.*/
//Mateo Cisneros
#include<stdio.h>
int main()
{
    int num;
    int fac = 1;

    printf("Ingrese un numero para culcular su factorial -> ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        fac *= i;
    }

    printf("El factorial de %d es: %d", num, fac);
    
    return 0;
}
