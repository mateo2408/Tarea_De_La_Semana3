/*Leer dos números enteros y determinar a cuánto es igual el producto 
mutuo del primer dígito de cada uno.*/
//Mateo Cisneros
#include<stdio.h>
int main()
{
    int n1;
    int n2;
    int primer_digito_n1;
    int primer_digito_n2;
    int producto;

    printf("Ingresa el primer numero -> ");
    scanf("%d", &n1);
    printf("Ingresa el segundo numero -> ");
    scanf("%d", &n2);

    primer_digito_n1 = n1 / 10;
    primer_digito_n2 = n2 / 10;
    return 0;
}
