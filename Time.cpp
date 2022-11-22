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


string Time::getResultados(){
    cout << "Vitorias: " << somaVitorias() << ", Empates: " << somaEmpates() << ", Derrotas: " << somaDerrotas() << endl;
}







