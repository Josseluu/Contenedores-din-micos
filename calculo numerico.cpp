#include <iostream>
#include <valarray>
#include <numeric>

int main() {
    double valores_data[] = {1, 2, 3, 4, 5};
    std::valarray<double> valores(valores_data, 5);

    double suma = std::accumulate(std::begin(valores), std::end(valores), 0.0);

    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Media: " << suma / valores.size() << std::endl;

    valores += 5.0;

    std::cout << "Valores + 5.0: ";
    for (double valor : valores) {
        std::cout << valor << " ";
    }
    std::cout << std::endl;

    return 0;
}
