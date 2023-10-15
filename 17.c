/*Promediar los x primeros múltiplos de 2 y determinar si ese promedio 
es mayor que los y primeros múltiplos de 5 para valores de x e y leídos.*/
//Mateo Cisneros
#include<stdio.h>
int main()
{
    int x, y;
    int suma_multiplos_2 = 0;
    int suma_multiplos_5 = 0;
    int cantidad_multiplos_2 = 0;
    int cantidad_multiplos_5 = 0;
    float promedio_multiplos_2;
    float promedio_multiplos_5;

    printf("Introduce el valor de x: ");
    scanf("%d", &x);
    printf("Introduce el valor de y: ");
    scanf("%d", &y);

    for (int i = 1; i <= x; i++) {
    suma_multiplos_2 += 2 * i;
    cantidad_multiplos_2++;
    }

    for (int i = 1; i <= y; i++) {
    suma_multiplos_5 += 5 * i;
    cantidad_multiplos_5++;
    }

    promedio_multiplos_2 = suma_multiplos_2 / cantidad_multiplos_2;

    promedio_multiplos_5 = suma_multiplos_5 / cantidad_multiplos_5;

    return 0;
}
