#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

int main() {

    int main() {

        std::function<int(int)> cuadrado;
        cuadrado = [](int x) { return x * x; };

        auto numero = 5;

        std::vector<int> numeros = {2, 33, 66, 12, 30};

        std::cout << "Cuadrados de los números en el vector:" << std::endl;
        std::for_each(numeros.begin(), numeros.end(), [&](int n) {
            std::cout << cuadrado(n) << " ";
        });
        std::cout << std::endl;

        return 0;
    }

    std::unique_ptr<int> punteroInteligente = std::unique_ptr<int>(new int(10));

    std::cout << "Valor almacenado en el puntero inteligente: " << *punteroInteligente << std::endl;

    return 0;
}

