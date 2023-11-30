#include <iostream>
#include <boost/lexical_cast.hpp>

class bad_lexical_cast;

int main() {
    try {
        std::string str_number = "123";
        int number = boost::lexical_cast<int>(str_number);
        std::cout << "Número convertido: " << number << std::endl;
    } catch (const boost::bad_lexical_cast& e) {
        std::cerr << "Error al convertir la cadena: " << e.what() << std::endl;
    }

    return 0;
}
