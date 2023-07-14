#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream archivo;
    std::string nombreArchivo;
    std::string email;
    char respuesta;

    std::cout << "Ingrese el nombre del archivo: ";
    std::cin >> nombreArchivo;

    archivo.open(nombreArchivo, std::ios::app);
    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        return 1;
    }

    do {
        std::cout << "Ingrese el email del contacto: ";
        std::cin >> email;

        archivo << email << std::endl;

        std::cout << "¿Desea agregar otro contacto? (s/n): ";
        std::cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    archivo.close();

    std::cout << "Los contactos se han agregado correctamente al archivo." << std::endl;

    return 0;
}

