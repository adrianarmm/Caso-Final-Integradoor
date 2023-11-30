#include <iostream>
#include <fstream>
#include <string>

void load_script(const char* filename, bool show_script = false) {
    std::ifstream file(filename);

