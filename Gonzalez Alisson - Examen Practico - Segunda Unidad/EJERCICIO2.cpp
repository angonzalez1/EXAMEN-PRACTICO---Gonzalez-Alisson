#include <stdio.h>

void ordenarDescendente(int *a, int *b, int *c) {
    int temp;

    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*a < *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }

    if (*b < *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

void mostrarNumerosOrdenados(int a, int b, int c) {
    printf("Los numeros ordenados de forma descendente son: %d, %d, %d\n", a, b, c);
}

int main() {
    int num1, num2, num3;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &num3);

    ordenarDescendente(&num1, &num2, &num3);
    mostrarNumerosOrdenados(num1, num2, num3);

    return 0;
}