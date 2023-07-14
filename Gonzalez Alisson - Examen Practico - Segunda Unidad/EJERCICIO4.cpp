#include <stdio.h>

void mostrarTablaMultiplicar(int numero) {
    printf("Tabla de multiplicar del %d:\n", numero);
    for (int i = 1; i <= 20; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    mostrarTablaMultiplicar(numero);

    return 0;
}




