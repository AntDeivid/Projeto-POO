#include <iostream>
#include "Time.hpp"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

Time::Time(string nome){
    this->nome = nome;
}

string Time::getNome(){
    return this->nome;
}
void Time::setNome(string nome){
    this->nome = nome;
}

int Time:: getVitorias(){
    return this->vitorias;
}

int Time::getEmpates(){
    return this->empates;
}

int Time::getDerrotas(){
    return this->derrotas;
}

void Time::setDerrotas(int derrotas){ this-> derrotas = derrotas; }
void Time::setVitorias(int vitorias){ this-> vitorias = vitorias; }
void Time::setEmpates(int empates){ this-> empates = empates; }

void Time::printJogadores(){
    // criando um id para cada tipo de jogador
    const type_info& goleiroID = typeid(JogadorGoleiro()).name();
    const type_info& defesaID = typeid(JogadorDefesa()).name();
    const type_info& atacanteID = typeid(JogadorAtacante()).name();

    cout << "Goleiros: " << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < jogador.size(); i++){
        if (jogador[i].getID() == goleiroID) {
            cout << "Nome: " << jogador[i].getNome()
                << " | Idade: " << jogador[i].getIdade()
                << " | Habilidade: " << jogador[i].getHabilidade()
                << " | Gols: " << jogador[i].getGols()
                << " | Camisa: " << jogador[i].getCamisa() << endl;
        }
    }

    cout << "Defensores: " << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < times.size(); i++) {
    if (jogador[i].getID() == defesaID) {
            cout << "Nome: " << jogador[i].getNome()
                << " | Idade: " << jogador[i].getIdade()
                << " | Habilidade: " << jogador[i].getHabilidade()
                << " | Gols: " << jogador[i].getGols()
                << " | Camisa: " << jogador[i].getCamisa() << endl;
        }
    }

    cout << "Atacantes: " << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < times.size(); i++) {
    if (jogador[i].getID() == atacanteID) {
            cout << "Nome: " << jogador[i].getNome()
                << " | Idade: " << jogador[i].getIdade()
                << " | Habilidade: " << jogador[i].getHabilidade()
                << " | Gols: " << jogador[i].getGols()
                << " | Camisa: " << jogador[i].getCamisa() << endl;
        }
    }
}

void Time::insJogadores(Jogador *jog){
    jogador.push_back(*jog);
}

int Time::somaVitorias(){
    int vit = getVitorias();
    setVitorias(vit+1);
    return getVitorias();   
}

int Time::somaDerrotas(){
    int der = getDerrotas();
    setDerrotas(der+1);
    return getDerrotas();
}

int Time::somaEmpates(){
    int emp = getEmpates();
    setEmpates(emp+1);
    return getEmpates();
}

string Time::getResultados(){
    stringstream ss;
    ss << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
    return ss.str();
}

vector<Jogador> Time::getJogadores() { return this->jogador;}