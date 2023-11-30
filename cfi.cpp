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

    } else
    {
        std::cout << "El string " << filename << " tiene " << file.tellg() << " bytes.\n";
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
    load_script();
    return 0;
}
int main() {
std::string string;
std::cout << "Introduce el nombre del string para mostrar su contenido: ";
std::cin >> string;
load_script(string.c_str(), true);

return 0;
}