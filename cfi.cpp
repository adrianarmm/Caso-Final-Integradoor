#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* hola, bool show_script = false) {
    std::ifstream file(hola);

    if (!file.is_open()) {
        std::cout << "No se pudo abrir el string " << hola << ".\n";
        return;
    }

    std::string line;
    if (show_script) {
        std::cout << "Contenido del string " << hola << ":\n";
        while (getline(file, line)) {
            std::cout << line << '\n';
        }

    } else
    {
        std::cout << "El string " << hola << " tiene " << file.tellg() << " bytes.\n";

    }
    file.close();
}

void load_script() {
    std::string filename;
    std::cout << "Introduce el nombre del string: ";
    std::cin >> filename;

    load_script(filename.c_str());
}

int main() {
    load_script("cfi.cpp", true);
    load_script("Algoritmos.cpp", true);

std::string string;
std::cout << "Introduce el nombre del string para mostrar su contenido: ";
std::cin >> string;
load_script(string.c_str(), true);

return 0;
}