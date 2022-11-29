#include <iostream>
#include "Time.hpp"
using namespace std;
#include <iostream>
#include <vector>

Time::Time(string nome){
    this->nome = nome;
}

string Time::getNome(){
    return this->nome;
}
void Time::setNome(string nome){
    this->nome = nome;
}

void Time::printJogadores(){
    for (int i = 0; i < jogador.size(); i++){
        cout << jogador[i].getNome() << endl;
    }
}

void Time::insJogadores(Jogador *jog){
    jogador.push_back((Jogador) *jog);
}

string Time::getResultados(){
    cout << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
}







