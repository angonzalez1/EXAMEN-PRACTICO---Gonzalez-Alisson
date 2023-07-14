#include <stdio.h>
#include <string.h>

int esPalindromo(const char *palabra) {
    int longitud = strlen(palabra);
    int inicio = 0;
    int fin = longitud - 1;

    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            return 0; // No es palíndromo
        }
        inicio++;
        fin--;
    }

    return 1; // Es palíndromo
}

int main() {
    char palabra[100];

    printf("Ingrese una palabra: ");
    scanf("%s", palabra);

    int longitud = strlen(palabra);
    printf("La palabra invertida es: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    printf("\n");

    if (esPalindromo(palabra)) {
        printf("La palabra es un palindromo (capicua).\n");
    } else {
        printf("La palabra no es un palindromo (capicua).\n");
    }

    return 0;
}


