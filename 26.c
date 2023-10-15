/*Leer un número entero y determinar cuál es el mayor de sus dígitos.*/
//Mateo Cisneros
#include<stdio.h>
int main()
{
    int num;
    int mayor = 0;

    printf("ingrese un numero -> ");
    scanf("%d", &num);

    while (num > 0)
    {
        int digito = num % 10;

        if (digito > mayor)
        {
            mayor = digito;
        }

        num /= 10;
    }

    printf("El digito mayor es: %d", mayor);
    
    return 0;
}
