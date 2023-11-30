#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> numeros;
    numeros.push_back(1);
    numeros.push_back(2);
    numeros.push_back(3);
    numeros.push_back(4);
    numeros.push_back(5);

    cout << "Números originales:" << endl;
    for (auto num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> numerosCuadrados;
    numerosCuadrados.reserve(numeros.size());

    for (auto num : numeros) {
        numerosCuadrados.push_back(num * num);
    }

    cout << "Cuadrados de los números: " << endl;
    for (auto num : numerosCuadrados) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
