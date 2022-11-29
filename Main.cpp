#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Partidas.hpp"
#include "Menu.hpp"

using namespace std;

// main interativa com do while

int main() {
    
    int opcao;
    vector <Time> times;

    do {
        primeiro_menu();
        cin >> opcao;
        cout << endl;

        switch (opcao) {
            case 1: {
                // criar um time
                cout << "Escolha qual time deseja criar (Flamengo, Palmeiras, São Paulo e Ceara): " << endl;
                string nome;
                cin >> nome;

                if (nome == "Flamengo" || nome == "Palmeiras" || nome == "São Paulo" || nome == "Ceara") {
                    Time *time = new Time(nome);
                    times.push_back(*time);
                } else {
                    try {
                        throw "Nao e possivel criar esse time, pois nao existe!";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }

                break;
            }
            case 2: {
                // remover um time
                cout << "Escolha qual time deseja remover (Flamengo, Palmeiras, São Paulo e Ceara): " << endl;
                string nome;
                cin >> nome;

                if (nome == "Flamengo" || nome == "Palmeiras" || nome == "São Paulo" || nome == "Ceara") {
                    Time *time = new Time(nome);

                    for (int i = 0; i < times.size(); i++) {
                        if (times[i].getNome() == nome) {
                            times.erase(times.begin() + i);
                        }
                    }

                } else {
                    try {
                        throw "Nao e possivel deletar esse time, pois ele nao existe";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }

                break;
            }
            case 3: {
                // visualizar todos os times
                for (int i = 0; i < times.size(); i++) {
                    cout << times[i].getNome() << endl;
                }

                break;
            }
            case 4: {
                // visualizar time com seus jogadores
                cout << "Escolha qual time deseja visualizar (Flamengo, Palmeiras, São Paulo e Ceara): " << endl;
                string nome;
                cin >> nome;

                if (nome == "Flamengo" || nome == "Palmeiras" || nome == "São Paulo" || nome == "Ceara") {
                    Time *time = new Time(nome);

                    for (int i = 0; i < times.size(); i++) {
                        if (times[i].getNome() == nome) {
                            cout << times[i].getNome() << endl;
                            times[i].printJogadores();
                        }
                    }

                } else {
                    try {
                        throw "Nao e possivel visualizar esse time, pois ele nao existe";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }
                break;
            }
            case 5: {
 
                break;
            }
            case 6: {
                
            }
            default:
                cout << "Opcao invalida" << endl;
                break;
        }
    } while (opcao != 0);
    return 0;
}