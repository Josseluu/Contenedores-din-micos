#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-extensions"
int main() {

    int cuadrado;
    cuadrado = [](int x) { return x * x; };

    auto numero = 5;

    std::vector<int> numeros;
    numeros.push_back(2);
    numeros.push_back(33);
    numeros.push_back(66);
    numeros.push_back(12);
    numeros.push_back(30);

    std::cout << "Cuadrados de los números en el vector:" << std::endl;
    std::for_each(numeros.begin(), numeros.end(), [&](int n) {
        std::cout << cuadrado(n) << " ";
    });
    std::cout << std::endl;

    std::unique_ptr<int> punteroInteligente = std::unique_ptr<int>(new int(10));

    std::cout << "Valor almacenado en el puntero inteligente: " << *punteroInteligente << std::endl;

    return 0;
}

#pragma clang diagnostic pop