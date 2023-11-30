#include <iostream>
#include <list>
#include <stack>

int main() {

    std::list<double> listaNumeros;
    listaNumeros.push_back(1.1);
    listaNumeros.push_back(2.2);
    listaNumeros.push_back(3.3);
    listaNumeros.push_back(4.4);
    listaNumeros.push_back(5.5);

    std::stack<double, std::list<double> > pilaNumeros(listaNumeros);

    std::cout << "Contenido de la pila original: ";
    while (!pilaNumeros.empty()) {
        std::cout << pilaNumeros.top() << " ";
        pilaNumeros.pop();
    }
    std::cout << std::endl;

    pilaNumeros.push(6.6);
    pilaNumeros.push(7.7);

    std::cout << "Contenido de la pila después del push: ";
    while (!pilaNumeros.empty()) {
        std::cout << pilaNumeros.top() << " ";
        pilaNumeros.pop();
    }
    std::cout << std::endl;

    return 0;
}
