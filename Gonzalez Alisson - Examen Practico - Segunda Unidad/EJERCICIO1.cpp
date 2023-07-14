#include <stdio.h>

float calcularAreaTrianguloRectangulo(float base, float altura) {
    float area;
    area = (base * altura) / 2;
    return area;
}

int multiplicar(int a, int b) {
    int resultado = a * b;
    return resultado;
}

int main() {
    int opcion;

    do {
        printf("BIENVENIDO/A\n");

        printf("MENU DE OPCIONES\n");
        printf("1. Calcular el area de un triangulo rectangulo\n");
        printf("2. Realizar la multiplicacion de dos numeros\n");
        printf("3. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                printf("Ha seleccionado la Opcion 1.\n");
                float base, altura, area;

                printf("Ingrese la base del triangulo rectangulo: ");
                scanf("%f", &base);
                printf("Ingrese la altura del triangulo rectangulo: ");
                scanf("%f", &altura);

                area = calcularAreaTrianguloRectangulo(base, altura);

                printf("El área del triangulo rectangulo es: %.2f\n", area);
                break;
            }
            case 2: {
                printf("Ha seleccionado la Opcion 2.\n");
                int num1, num2, resultado;

                printf("Ingrese el primer numero: ");
                scanf("%d", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%d", &num2);

                resultado = multiplicar(num1, num2);

                printf("El resultado de la multiplicacion es: %d\n", resultado);
                break;
            }
            case 3:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion invalida. Por favor, ingrese una opcion valida.\n");
                break;
        }

        printf("\n");
    } while(opcion != 3);

    return 0;
}