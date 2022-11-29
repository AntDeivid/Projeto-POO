#include <iostream>
#include <string>
#include <sstream>
#include "Partidas.hpp"
#include "Menu.hpp"

using namespace std;

// main interativa com do while

int main() {
    primeiro_menu();
    int opcao;
    cin >> opcao;
    do {
        switch (opcao) {
            case 1:
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            default:
                cout << "Opcao invalida" << endl;
                break;
        }
    } while (opcao != 0);
    return 0;
}