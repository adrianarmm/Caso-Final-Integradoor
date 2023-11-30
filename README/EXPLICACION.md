# Caso-Final-Integradoor
https://github.com/adrianarmm/Caso-Final-Integradoor.git

Hola, aqui dejare explicado todo lo que ido haciendo.
En primer lugar en lugar de utilizar #include <cstudio> he utilizado #include <fstream> que es propio de C++. 
A continuacion he utlizado load_script(const char* filename, bool show_script = false) para que abra un archivo y si show_script fuera verdadero mostraria su contenido 
He utlizado tambien load_script() que solicita el nombre del archivo y llama a la función load_script() para cargar el contenido.
En el main(), se demuestra cómo se utilizan ambas variantes de la función load_script().

Las principales diferencias que veo es que he utilizado std::string y fstream como he mencionado mas arriba, en cambio en la solucion propuesta se utiliza FILE y cstudio, ademas he utilizado std::string directamente en vez de std::cin y scanf().
