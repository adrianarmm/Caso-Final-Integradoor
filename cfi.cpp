#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        std::cout << "No se pudo abrir el archivo " << filename << ".\n";
        return;
    }
