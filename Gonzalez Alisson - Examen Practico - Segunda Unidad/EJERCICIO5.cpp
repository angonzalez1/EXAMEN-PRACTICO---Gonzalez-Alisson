#include <stdio.h>

float convertirACelsius(float temperatura) {
    return temperatura;
}

float convertirAFahrenheit(float temperatura) {
    return (temperatura * 9 / 5) + 32;
}

float convertirAKelvin(float temperatura) {
    return temperatura + 273.15;
}

int main() {
    float temperatura;
    int opcion;

    printf("Ingrese la temperatura en grados Celsius: ");
    scanf("%f", &temperatura);

    printf("MENU DE CONVERSIONES\n");
    printf("1. Convertir a Fahrenheit\n");
    printf("2. Convertir a Kelvin\n");
    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1: {
            float temperaturaFahrenheit = convertirAFahrenheit(temperatura);
            printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit\n", temperatura, temperaturaFahrenheit);
            break;
        }
        case 2: {
            float temperaturaKelvin = convertirAKelvin(temperatura);
            printf("%.2f grados Celsius equivalen a %.2f Kelvin\n", temperatura, temperaturaKelvin);
            break;
        }
        default:
            printf("Opcion invalida. No se realizara ninguna conversion.\n");
            break;
    }

    return 0;
}

