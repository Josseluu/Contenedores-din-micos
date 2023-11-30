#include <iostream>
#include <valarray>

int main() {
    int main() {

        std::valarray<double> array1 = {1.0, 2.0, 3.0, 4.0};
        std::valarray<double> array2 = {5.0, 6.0, 7.0, 8.0};


        std::valarray<double> suma = array1 + array2;
        std::valarray<double> resta = array1 - array2;
        std::valarray<double> multiplicacion = array1 * array2;
        std::valarray<double> division = array1 / array2;

        // Mostrar resultados
        std::cout << "Array 1: ";
        for (double val: array1) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        std::cout << "Array 2: ";
        for (double val: array2) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        std::cout << "Suma: ";
        for (double val: suma) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        std::cout << "Resta: ";
        for (double val: resta) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        std::cout << "Multiplicación: ";
        for (double val: multiplicacion) {
            std::cout << val << " ";
        }
        std::cout << std::endl;

        std::cout << "División: ";
        for (double val: division) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
