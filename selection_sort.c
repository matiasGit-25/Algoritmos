/*Programa en C que implementa ordenamiento por selección (Selection Sort)
Entrada :   1. Tamaño del arreglo
            2. Arreglo de elementos
Salida : Arreglo con elementos ordenados en orden ascendente
*/

#include <stdio.h>
int main()
{
    int arreglo[100], n, i, j, min, aux;
    printf("\n Ingrese el tamaño del arreglo.\n");
    scanf("%d", &n);
    printf("\n Ingrese %d elementos.\n", n);
    for ( i = 0 ; i < n ; i++ )
        scanf("%d", &arreglo[i]);
    for ( i = 0 ; i <= ( n - 2 ) ; i++ )
    {
        min = i;
        // Encontrar el número (elemento) mas pequeño
        for ( j = i + 1 ; j <= n-1 ; j++ )
        {
            if ( arreglo[j] < arreglo[min] )
            min = j;
        }
        // Intercambiar el elemento mas pequeño con el primer número sin ordenar
        aux = arreglo[i];
        arreglo[i] = arreglo[min];
        arreglo[min] = aux;
    }
    printf("\n Lista ordenada en orden ascendente:\n");
    for ( i = 0 ; i < n ; i++ )
        printf("%3d", arreglo[i]);
        printf("\n\n\n ");
    return 0;
}
