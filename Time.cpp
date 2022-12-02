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
    cout << "Goleiros: " << endl;
    for (int i = 0; i < jogador.size(); i++){
        cout << "Nome: " << jogador[i].getNome()
             << " | Idade: " << jogador[i].getIdade()
             << " | Habilidade: " << jogador[i].getHabilidade()
             << " | Gols: " << jogador[i].getGols()
             << " | Camisa: " << jogador[i].getCamisa() << endl;
    }
}

void Time::insJogadores(Jogador *jog){
    jogador.push_back(*jog);
}

int Time::somaVitorias(){

}

int Time::somaDerrotas(){

}

int Time::somaEmpates(){

}

string Time::getResultados(){
    stringstream ss;
    ss << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
    return ss.str();
}

vector<Jogador> Time::getJogadores() { return this->jogador;}