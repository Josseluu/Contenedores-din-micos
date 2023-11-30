#include <iostream>
#include <vector>

int main() {

    std::vector<int> miVector;


    miVector.push_back(10);
    miVector.push_back(20);
    miVector.push_back(30);
    miVector.push_back(40);

    std::cout << "Elementos del vector: ";
    for (std::vector<int>::iterator it = miVector.begin(); it != miVector.end(); ++it) {
        std::cout << *it << " ";
    }

    std::cout << std::endl;

    return 0;
}

