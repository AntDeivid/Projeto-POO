#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <typeinfo>
#include <fstream>
#include "Partidas.hpp"
#include "Menu.hpp"
#include "Date.hpp"
#include "Elenco.hpp"

using namespace std;

// função para guardar em arquivos o resultado das partidas

void escreveArquivo(Partidas *partida) {
    ofstream arquivo;
    arquivo.open("partidas.txt", ios::app);
    arquivo << "Data da partida: ";
    arquivo << partida->getData().strPrint() << endl;
    arquivo << "Placar do jogo: ";
    arquivo << partida->getPlacar() << endl;
    arquivo << "+=============================================+" << endl;
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
    vector < Time* > times;

    do {
        primeiro_menu();
        cin >> opcao;
        cout << endl;

        switch (opcao) {
            case 1: {
                // criar um time
                cout << "Escolha qual time deseja criar (Flamengo, Palmeiras, SaoPaulo e Ceara): ";
                string nome;
                cin >> nome;

                if (nome == "Flamengo") {
                    if (verifica_flamengo == 0) {
                        Time *time = new Time(nome);
                        elenco_flamengo(time);
                        times.push_back(time);
                        verifica_flamengo = 1;
                    } else {
                        cout << "Time ja existe" << endl;
                    }
                } else if (nome == "Palmeiras") {
                    if (verifica_palmeiras == 0) {
                        Time *time = new Time(nome);
                        elenco_palmeiras(time);
                        times.push_back(time);
                        verifica_palmeiras = 1;
                    } else {
                        cout << "Time ja existe" << endl;
                    }
                } else if (nome == "SaoPaulo") {
                    if (verifica_saopaulo == 0) {
                        Time *time = new Time(nome);
                        elenco_saopaulo(time);
                        times.push_back(time);
                        verifica_saopaulo = 1;
                    } else {
                        cout << "Time ja existe" << endl;
                    }
                } else if (nome == "Ceara") {
                    if (verifica_ceara == 0) {
                        Time *time = new Time(nome);
                        elenco_ceara(time);
                        times.push_back(time);
                        verifica_ceara = 1;
                    } else {
                        cout << "Time ja existe" << endl;
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
                for (int i = 0; i < times.size(); i++) {
                    cout << i << " - " << times[i]->getNome() << endl;
                }

                cout << endl;

                if (!times.empty()) {
                    cout << "Escolha qual time deseja remover: ";
                    int apagarTime;
                    cin >> apagarTime;
                    
                    for (int i = 0; i < times.size(); i++) {
                        if (times[i] == times[apagarTime]) {
                            times.erase(times.begin() + i);
                        }
                    }
                } else {
                    try {
                        throw "Nao e possivel remover um time, pois nao existe nenhum time!";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }
                break;
            }
            case 3: {
                // visualizar todos os times
                if (verifica_flamengo == 1 || verifica_palmeiras == 1 || verifica_saopaulo == 1 || verifica_ceara == 1) {
                    for (int i = 0; i < times.size(); i++) {
                        cout << i << " - " << times[i]->getNome() << endl;
                    }
                } else {
                    try {
                        throw "Nao e possivel visualizar os times, pois nao existe nenhum time!";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }
                break;
            }
            case 4: {
                // visualizar time com seus jogadores
                if (!times.empty()){
                    for (int i = 0; i < times.size(); i++) {
                        cout << i << " - " << times[i]->getNome() << endl;
                    }

                    cout << endl;

                    cout << "Escolha qual time deseja visualizar: ";
                    int escolha;
                    cin >> escolha;
                    system ("clear || cls");
                    if (escolha >= 0 && escolha < times.size()) {

                        cout << "+=============================================+" << endl;
                        cout << times[escolha]->getNome() << endl;
                        cout << "+=============================================+" << endl;
                        times[escolha]->printJogadores();
                        cout << "+=============================================+" << endl;
                        cout << times[escolha]->getResultados();
                        cout << "+=============================================+" << endl;


                    } else {
                        try {
                            throw "Nao e possivel visualizar esse time, pois ele nao existe";
                        } catch (const char* msg) {
                            cerr << msg << endl;
                        }
                    }
                } else {
                    try {
                        throw "Nao e possivel visualizar os times, pois nao existe nenhum time criado!";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }

                break;
            }
            case 5: {
                // editar time
                if (!times.empty()){
                    for (int i = 0; i < times.size(); i++) {
                        cout << i << " - " << times[i]->getNome() << endl;
                    }
                    cout << "Escolha qual time deseja editar: ";
                    int escolha;
                    cin >> escolha;
                    
                    if (escolha >= 0 && escolha < times.size()){
                        menu_editar();

                        int editar;
                        cin >> editar;

                        switch(editar) {
                            case 1: {
                                vector<Jogador*> jogadores = times[escolha]->getJogadores();
                                for (int i = 0; i < jogadores.size(); i++) {
                                    cout << i << " - " << jogadores[i]->getNome() << endl;
                                }

                                cout << endl;
                                
                                cout << "Escolha qual jogador deseja editar: " << endl;
                                int jogadorEscolhido;
                                cin >> jogadorEscolhido;

                                menu_jogador();

                                int opcaoJogador;
                                cin >> opcaoJogador;
                                
                                switch(opcaoJogador) {
                                    case 1: {
                                        cout << "Digite o novo nome do jogador: " << endl;
                                        string novoNome;
                                        cin >> novoNome;
                                        jogadores[jogadorEscolhido]->setNome(novoNome);
                                        cout << "Nome do jogador alterado para: " << jogadores[jogadorEscolhido]->getNome() << endl;
                                        break;
                                    }

                                    case 2: {
                                        cout << "Digite a nova idade do jogador: " << endl;
                                        int novaIdade;
                                        cin >> novaIdade;
                                        jogadores[jogadorEscolhido]->setIdade(novaIdade);
                                        cout << "Idade alterada para: " << jogadores[jogadorEscolhido]->getIdade() << endl;
                                        break;
                                    }

                                    case 3: {
                                        cout << "Digite o novo numero da camisa do jogador: " << endl;
                                        int novaCamisa;
                                        cin >> novaCamisa;
                                        jogadores[jogadorEscolhido]->setCamisa(novaCamisa);
                                        cout << "Camisa alterada para: " << jogadores[jogadorEscolhido]->getCamisa() << endl;
                                        break;
                                    }
                                    default: {
                                        try {
                                            throw "Opcao invalida";
                                        } catch (const char* msg) {
                                            cerr << msg << endl;
                                        }
                                    }
                                }
                                break;
                            }
                            case 2: {
                                cout << "Digite o novo nome do time: ";
                                string novoNome;
                                cin >> novoNome;
                                times[escolha]->setNome(novoNome);
                                cout << "Nome do time alterado para: " << times[escolha]->getNome() << endl;
                                break;
                            }
                            default: {
                                try {
                                    throw "Opcao invalida";
                                } catch (const char* msg) {
                                    cerr << msg << endl;
                                }
                            }
                        }

                    } else {
                        try {
                            throw "Nao e possivel editar esse time, pois ele nao existe";
                        } catch (const char* msg) {
                            cerr << msg << endl;
                        }
                    }
                } else {
                    try {
                        throw "Nao e possivel editar nenhum time, pois nenhum foi criado";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }
                break;
            }
            case 6: {
                // iniciar partida
                // verifica se há dois times cadastrados
                if (verifica_flamengo == 1 && verifica_palmeiras == 1 || verifica_flamengo == 1 && verifica_saopaulo == 1 || verifica_flamengo == 1 && verifica_ceara == 1 || verifica_palmeiras == 1 && verifica_saopaulo == 1 || verifica_palmeiras == 1 && verifica_ceara == 1 || verifica_saopaulo == 1 && verifica_ceara == 1) { 

                    int timeCasa, timeVisitante, dia, mes, ano;

                    cout << "Selecione os times para a partida (a primeira escolha eh o time da casa): " << endl;
                    for (int i = 0; i < times.size(); i++) {
                        cout << i << " - " << times[i]->getNome() << endl;
                    }

                    cout << endl;

                    cin >> timeCasa >> timeVisitante;

                    cout << "Informe a data da partida (dd mm aa): " << endl;
                    cin >> dia >> mes >> ano;
                    Date *dataDaPartida = new Date(dia, mes, ano);

                    Partidas *partida = new Partidas(dataDaPartida, times[timeCasa], times[timeVisitante]);

                    int opcaoPartida;
                    do {
                        menu_partida();
                        cin >> opcaoPartida;

                        switch (opcaoPartida) {
                            case 1: {
                                //Mostrar placar
                                cout << partida->getPlacar() << endl;
                                break;
                            }

                            case 2: {
                                cout << "Casa: " << partida->getCasa() << endl << "Visitante: " << partida->getVisitante() << endl << endl;
                                break;
                            }
                            
                            case 3: {
                                // marca gol para o time da casa
                                vector<Jogador*> jogadores = times[timeCasa]->getJogadores();

                                cout << "Selecione o jogador que ira marcar o gol: " << endl << endl;
                                for (int i = 0; i < jogadores.size(); i++) {
                                    cout << i << " - " << jogadores[i]->getNome() << endl;
                                }

                                cout << endl;

                                int goleador;
                                cin >> goleador;

                                jogadores[goleador]->somaGol();
                                partida->golCasa();

                                break;
                            }

                            case 4: {
                                // marca gol para o time visitante
                                vector<Jogador*> jogadores = times[timeVisitante]->getJogadores();

                                cout << "Selecione o jogador que ira marcar o gol: " << endl << endl;
                                for (int i = 0; i < jogadores.size(); i++) {
                                    cout << i << " - " << jogadores[i]->getNome() << endl;
                                }

                                cout << endl;

                                int goleador;
                                cin >> goleador;

                                jogadores[goleador]->somaGol();
                                partida->golVisitante();

                                break;

                            }

                            case 5: {
                                cout << "Apita o arbitro, finaaaaaal de jogo!!!!!!!!!" << endl;
                                if (partida->getGolsCasa() > partida->getGolsVisitante()) {
                                    // salva o placar da partida no vetor de partidas do time da casa e do visitante
                                    times[timeCasa]->somaVitorias();
                                    times[timeVisitante]->somaDerrotas();
                                    // salva o placar da partida no arquivo de partidas
                                    escreveArquivo(partida);    

                                } else if (partida->getGolsCasa() < partida->getGolsVisitante ()) {
                                    times[timeVisitante]->somaVitorias();
                                    times[timeCasa]->somaDerrotas();
                                    // salva o placar da partida no arquivo de partidas
                                    escreveArquivo(partida);
                                } else {
                                    times[timeCasa]->somaEmpates();
                                    times[timeVisitante]->somaEmpates();
                                    // salva o placar da partida no arquivo de partidas
                                    escreveArquivo(partida);
                                }
                                break;
                            }
                            default: {
                                try {
                                    throw "Opcao invalida";
                                } catch (const char* msg) {
                                    cerr << msg << endl;
                                }
                            }
                        }
            
                    } while (opcaoPartida != 5);
                } else {
                    try {
                        throw "Nao e possivel iniciar uma partida, pois nao ha dois times cadastrados";
                    } catch (const char* msg) {
                        cerr << msg << endl;
                    }
                }
                break;
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
            default:{
                cout << "Opcao invalida" << endl;
                break;
            }
        } 

    } while (opcao != 8);
    return 0;
}