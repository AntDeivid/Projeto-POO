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
        cout << "Nome: " << jogador[i].getNome() << endl;
        cout << "Idade: " << jogador[i].getNome() << endl;
        cout << "Habilidade: " << jogador[i].getHabilidade() << endl;
        cout << "Gols: " << jogador[i].getGols() << endl;
        cout << "Camisa: " << jogador[i].getCamisa() << endl;
    }
}

void Time::insJogadores(Jogador *jog){
    jogador.push_back(*jog);
}

string Time::getResultados(){
    cout << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
}







