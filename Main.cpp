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
                // terminar (perguntar pro pernambucano)
                // visualizar time com seus jogadores
                for (int i = 0; i < times.size(); i++) {
                    cout << i << " - " << times[i].getNome() << endl;
                }
                cout << "Escolha qual time deseja visualizar: " << endl;
                int escolha;
                cin >> escolha;

                if (escolha >= 0 && escolha < times.size()) {

                    cout << "+=============================================+" << endl;
                    cout << times[escolha].getNome() << endl;
                    cout << "+=============================================+" << endl;
                    times[escolha].printJogadores();
                    cout << "+=============================================+" << endl;

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
                // editar time
                for (int i = 0; i < times.size(); i++) {
                    cout << i << " - " << times[i].getNome() << endl;
                }
                cout << "Escolha qual time deseja editar: " << endl;
                int escolha;
                cin >> escolha;
                menu_editar();
                int editar;
                cin >> editar;

                switch(editar) {
                    case 1: {

                        vector<Jogador> jogadores = times[escolha].getJogadores();
                        for (int i = 0; i < jogadores.size(); i++) {
                            cout << i << " - " << jogadores[i].getNome() << endl;
                        }
                        cout << "Escolha qual jogador deseja editar: " << endl;
                        menu_jogador();

                        int opcaoJogador;
                        cin >> opcaoJogador;
                        
                        switch(opcaoJogador) {
                            case 1: {
                                string novoNome;
                                getline(cin, novoNome);
                                jogadores[opcaoJogador].setNome(novoNome);
                                cout << "Nome alterado para: " << times[escolha].getNome() << endl;
                            }
                        }
                        break;
                    }

                    case 2: {
                        string novoNome;
                        getline(cin, novoNome);
                        times[escolha].setNome(novoNome);
                        cout << "Nome alterado para: " << times[escolha].getNome() << endl;
                        break;
                    }
                }
                
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