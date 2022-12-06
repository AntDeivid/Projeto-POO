#include <iostream>
#include <iostream>
#include <sstream>
#include <vector>
#include <typeinfo>
#include "Time.hpp"

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

int Time::getVitorias(){
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

    cout << endl;
    cout << "Goleiros: " << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < jogador.size(); i++){
        if (jogador[i]->getId() == "goleiro") {
            jogador[i]->print();
            cout << endl;
        }
    }

    cout << "+=============================================+" << endl;
    cout << "Defensores: " << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < jogador.size(); i++) {
        if (jogador[i]->getId() == "defesa") {
            jogador[i]->print();
            cout << endl;
        }
    }

    cout << "+=============================================+" << endl;
    cout << "Atacantes: " << endl;
    cout << "------------------------------------------------------------" << endl;
    for (int i = 0; i < jogador.size(); i++) {
        if (jogador[i]->getId() == "atacante") {
            jogador[i]->print();
            cout << endl;
        }
    }
}

void Time::insJogadores(Jogador *jog){
    jogador.push_back(jog);
}

void Time::somaVitorias(){ this->vitorias++; }

void Time::somaDerrotas(){ this->derrotas++; }

void Time::somaEmpates(){ this->empates++; }

string Time::getResultados(){
    stringstream ss;
    ss << "Vitorias: " << getVitorias() << ", Empates: " << getEmpates() << ", Derrotas: " << getDerrotas() << endl;
    return ss.str();
}

vector<Jogador*> Time::getJogadores() { return this->jogador;}