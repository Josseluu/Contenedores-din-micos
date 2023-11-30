#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void lectura() {
    ifstream archivo;
    string texto;
    archivo.open("fisica.txt", ios::in);

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }
}
while (!archivo.eof()) {
    getline(archivo, texto);
    cout << texto << endl;
}
int main() {
    lectura();
    system("pause");
    return 0;
}
