#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cout << "No se pudo abrir el string " << filename << ".\n";
        return;
    }

    std::string line;
    if (show_script) {
        std::cout << "Contenido del string " << filename << ":\n";
        while (getline(file, line)) {
            std::cout << line << '\n';
        }
    } else {

        file.seekg(0, std::ios::end);
        std::streampos fileSize = file.tellg();
        if (fileSize == -1) {
            std::cout << "No se puede obtener el tamaño del archivo " << filename << ".\n";
            file.close();
            return;
        }
        std::cout << "El archivo " << filename << " tiene " << fileSize << " bytes.\n";
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


std::string string;
std::cout << "Introduce el nombre del string para mostrar su contenido: ";
std::cin >> string;
load_script(string.c_str(), true);

std::cout << "Introduce el nombre del string para mostrar su tamaño: ";
std::cin >> string;
load_script(string.c_str());

return 0;
}