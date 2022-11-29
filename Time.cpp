#include <iostream>
#include "Time.hpp"
#include <iostream>
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

void Time::printJogadores(){
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

string Time::getResultados(){
    cout << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
}