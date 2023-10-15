/*Leer un número entero y determinar cuál es el mayor de sus dígitos.*/
//Mateo Cisneros
#include<stdio.h>
int main()
{
    int num;
    int mayor = 0;

    while (num > 0)
    {
        int digito = num % 10;

        if (digito > mayor)
        {
            mayor = digito;
        }

        num /= 10;
    }
    
    return 0;
}
