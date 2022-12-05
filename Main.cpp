#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <typeinfo>
#include <fstream>
#include "Partidas.hpp"
#include "Menu.hpp"

using namespace std;

// função para escrever os resultados das partidas no arquivo
void escreveArquivo(Partidas partida) {
    ofstream arquivo;
    arquivo.open("partidas.txt", ios::app);
    arquivo << partida.getPlacar() << endl;
    arquivo.close();
}

// função para ler os resultados das partidas do arquivo
void leArquivo() {
    ifstream arquivo;
    arquivo.open("partidas.txt");
    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
    arquivo.close();
}

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
                    times[escolha].getResultados();
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
                        int jogadorEscolhido;
                        cin >> jogadorEscolhido;

                        menu_jogador();

                        int opcaoJogador;
                        cin >> opcaoJogador;
                        
                        switch(opcaoJogador) {
                            case 1: {
                                string novoNome;
                                getline(cin, novoNome);
                                jogadores[jogadorEscolhido].setNome(novoNome);
                                cout << "Nome do jogador alterado para: " << jogadores[jogadorEscolhido].getNome() << endl;
                                break;
                            }

                            case 2: {
                                int novaIdade;
                                cin >> novaIdade;
                                jogadores[jogadorEscolhido].setIdade(novaIdade);
                                cout << "Idade alterada para: " << jogadores[jogadorEscolhido].getIdade() << endl;
                                break;
                            }

                            case 3: {
                                int novaCamisa;
                                cin >> novaCamisa;
                                jogadores[jogadorEscolhido].setCamisa(novaCamisa);
                                cout << "Camisa alterada para: " << jogadores[jogadorEscolhido].getCamisa() << endl;
                                break;
                            }
                        }
                        break;
                    }

                    case 2: {
                        cout << "Digite o novo nome do time: ";
                        string novoNome;
                        cin >> novoNome;
                        times[escolha].setNome(novoNome);
                        cout << "Nome do time alterado para: " << times[escolha].getNome() << endl;
                        break;
                    }
                }
                
                break;
            }
            case 6: {
                // iniciar partida
                menu_partida();
                
            }
            case 7: {
                // le os resultados das partidas vindo do arquivo
                ifstream arquivo;
                arquivo.open("partidas.txt");
                if (arquivo.is_open()) {
                    string linha;
                    while (getline(arquivo, linha)) {
                        cout << linha << endl;
                    }
                } else {
                    cout << "Nao foi possivel abrir o arquivo" << endl;
                }
                arquivo.close();
                break;
            }
            case 8: {
                // sair
                menu_saida();
                break;
            }
            default:
                cout << "Opcao invalida" << endl;
                break;
        }
    } while (opcao != 8);
    return 0;
}