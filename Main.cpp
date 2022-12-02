#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include "Partidas.hpp"
#include "Menu.hpp"

using namespace std;

// main interativa com do while

int verifica_flamengo = 0;
int verifica_palmeiras = 0;
int verifica_saopaulo = 0;
int verifica_ceara = 0;

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

                if (nome == "Flamengo") {
                    if (verifica_flamengo == 0) {
                        Time time(nome);
                        times.push_back(time);
                        verifica_flamengo = 1;
                    } else {
                        cout << "Time já existe" << endl;
                    }
                } else if (nome == "Palmeiras") {
                    if (verifica_palmeiras == 0) {
                        Time time(nome);
                        times.push_back(time);
                        verifica_palmeiras = 1;
                    } else {
                        cout << "Time já existe" << endl;
                    }
                } else if (nome == "São Paulo") {
                    if (verifica_saopaulo == 0) {
                        Time time(nome);
                        times.push_back(time);
                        verifica_saopaulo = 1;
                    } else {
                        cout << "Time já existe" << endl;
                    }
                } else if (nome == "Ceara") {
                    if (verifica_ceara == 0) {
                        Time time(nome);
                        times.push_back(time);
                        verifica_ceara = 1;
                    } else {
                        cout << "Time já existe" << endl;
                    }
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

                if (nome == "Flamengo"){
                    if (verifica_flamengo == 1) {

                        for (int i = 0; i < times.size(); i++) {
                            if (times[i].getNome() == nome) {
                                times.erase(times.begin() + i);
                            }
                        }
                        verifica_flamengo = 0;
                    } else {
                        cout << "Time nao existe" << endl;
                    }
                } else if (nome == "Palmeiras") {
                    if (verifica_palmeiras == 1) {

                        for (int i = 0; i < times.size(); i++) {
                            if (times[i].getNome() == nome) {
                                times.erase(times.begin() + i);
                            }
                        }
                        verifica_palmeiras = 0;
                    } else {
                        cout << "Time nao existe" << endl;
                    }
                } else if (nome == "São Paulo") {
                    if (verifica_saopaulo == 1) {

                        for (int i = 0; i < times.size(); i++) {
                            if (times[i].getNome() == nome) {
                                times.erase(times.begin() + i);
                            }
                        }
                        verifica_saopaulo = 0;
                    } else {
                        cout << "Time nao existe" << endl;
                    }
                } else if (nome == "Ceara") {
                    if (verifica_ceara == 1) {

                        for (int i = 0; i < times.size(); i++) {
                            if (times[i].getNome() == nome) {
                                times.erase(times.begin() + i);
                            }
                        }
                        verifica_ceara = 0;
                    } else {
                        cout << "Time nao existe" << endl;
                    }
                } else {
                    try {
                        throw "Nao e possivel remover esse time, pois nao existe!";
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
            case 7: {
                // sair
                menu_saida();
                break;
            }
            default:
                cout << "Opcao invalida" << endl;
                break;
        }
    } while (opcao != 7);
    return 0;
}