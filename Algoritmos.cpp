#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numeros;
    numeros.push_back(50);
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(40);
    numeros.push_back(30);
    
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;

    return 0;
}
