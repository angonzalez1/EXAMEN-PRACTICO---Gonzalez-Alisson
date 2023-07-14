#include <stdio.h>

typedef struct {
    char nombre[100];
    int edad;
    float promedio;
} Alumno;

int main() {
    Alumno alumnos[3];
    int i;
    int indiceMejorPromedio = 0;

    for (i = 0; i < 3; i++) {
        printf("Ingrese los datos del alumno %d:\n", i+1);

        printf("Nombre: ");
        scanf("%s", alumnos[i].nombre);

        printf("Edad: ");
        scanf("%d", &alumnos[i].edad);

        printf("Promedio: ");
        scanf("%f", &alumnos[i].promedio);

        printf("\n");
    }

    for (i = 1; i < 3; i++) {
        if (alumnos[i].promedio > alumnos[indiceMejorPromedio].promedio) {
            indiceMejorPromedio = i;
        }
    }

    printf("El alumno con el mejor promedio es:\n");
    printf("Nombre: %s\n", alumnos[indiceMejorPromedio].nombre);
    printf("Edad: %d\n", alumnos[indiceMejorPromedio].edad);
    printf("Promedio: %.2f\n", alumnos[indiceMejorPromedio].promedio);

    return 0;
}
