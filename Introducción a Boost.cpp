#include <iostream>
#include <boost/lexical_cast.hpp>

int main() {
    try {

        std::string str_number = "42";
        int result = boost::lexical_cast<int>(str_number);

        // Imprime el resultado
        std::cout << "Número convertido: " << result << std::endl;
    } catch (const boost::bad_lexical_cast &e) {
        // Maneja la excepción en caso de error en la conversión
        std::cerr << "Error de conversión: " << e.what() << std::endl;
    }

    return 0;
}

