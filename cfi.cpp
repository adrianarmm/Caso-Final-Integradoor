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