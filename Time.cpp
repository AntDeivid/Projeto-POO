#include <iostream>
#include "Time.hpp"
using namespace std;
#include <iostream>

Time::Time(string nome){
    this->nome = nome;
}

string Time::getNome(){
    return this->nome;
}
void Time::setNome(string nome){
    this->nome = nome;
}

void Time::printJogadores(Jogador *jogador[]){
    for(int i=0; i<11; i++){
        cout << jogador[i]->getNome() << endl;
    }
}


string Time::getResultados(){
    cout << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
}







