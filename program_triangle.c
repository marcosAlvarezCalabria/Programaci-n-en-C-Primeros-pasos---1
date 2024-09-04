#include <stdio.h>

int main(void) 
{
    char char_plus = '+';
    char char_choise;
    int alto = 5;  // Altura del triángulo
    int ancho_total = 9; // Ancho total fijo del triángulo
    int recorreFila;
    int i = 0;
    scanf("%c", &char_choise);

    while ( i < alto) 
    {
        recorreFila = 0;
        int num_hashes = 2 * i + 1; // Número de símbolos '#' en la fila actual
        int num_pluses = (ancho_total - num_hashes) / 2; // Número de '+' antes y después de los '#'

        // Imprime los '+' al inicio de la fila
        while (recorreFila < num_pluses) {
            printf("%c", char_plus);
            recorreFila++;
        }

        // Imprime los '#' en el centro de la fila
        while (recorreFila < num_pluses + num_hashes) {
            printf("%c", char_choise);
            recorreFila++;
        }

        // Imprime los '+' al final de la fila
        while (recorreFila < ancho_total) {
            printf("%c", char_plus);
            recorreFila++;
        }

        printf("\n"); // Nueva línea al terminar una fila
        i++;
    }

    return 0;
}