#include <stdio.h>

int main() {
    char nombreArchivo[100];
    FILE *archivo;

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL) {
        printf("El archivo no existe.\n");
    } else {
        printf("El archivo existe.\n");
        fclose(archivo);
    }

    return 0;
}