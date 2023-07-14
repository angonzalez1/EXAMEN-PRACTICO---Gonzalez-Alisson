#include <stdio.h>
#include <string.h>

int main() {
    FILE *archivo;
    char nombreArchivo[100];
    char email[100];
    int cantidadAmigos;

    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL) {
        printf("No se pudo crear el archivo.\n");
        return 1;
    }

    printf("Ingrese la cantidad de amigos: ");
    scanf("%d", &cantidadAmigos);

    for (int i = 1; i <= cantidadAmigos; i++) {
        printf("Ingrese el email del amigo %d: ", i);
        scanf("%s", email);

        fprintf(archivo, "%s\n", email);
    }

    fclose(archivo);

    printf("Los emails se han guardado correctamente en el archivo.\n");

    return 0;
}

