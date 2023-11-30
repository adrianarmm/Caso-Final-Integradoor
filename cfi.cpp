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
