#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cout << "No se pudo abrir el archivo " << filename << ".\n";
        return;
    }

    std::string line;
    if (show_script) {
        std::cout << "Contenido del archivo " << filename << ":\n";
        while (getline(file, line)) {
            std::cout << line << '\n';
        }

    } else {


    }
    file.close();
}

void load_script() {
    std::string filename;
    std::cout << "Introduce el nombre del archivo: ";
    std::cin >> filename;

    load_script(filename.c_str());
}

int main() {
    load_script("cfi.cpp", true);
    load_script();
    return 0;
}
std::string archivo;
std::cout << "Introduce el nombre del archivo para mostrar su contenido: ";
std::cin >> archivo;
load_script(archivo.c_str(), true); // Carga y muestra el contenido del archivo proporcionado
