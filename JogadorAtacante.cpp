#include <iostream>
#include <string>
#include "JogadorAtacante.hpp"

using namespace std;

JogadorAtacante::JogadorAtacante(string nome, int idade, int habilidade, int gols, int camisa, int velocidade, int tecnica)
: Jogador(nome, idade, habilidade, gols, camisa) {
    this->velocidade = velocidade;
    this->tecnica = tecnica;
}

int JogadorAtacante::getVelocidade() {
    return this->velocidade;
}

void JogadorAtacante::setVelocidade(int velocidade) {
    this->velocidade = velocidade;
}

int JogadorAtacante::getTecnica() {
    return this->tecnica;
}

void JogadorAtacante::setTecnica(int tecnica) {
    this->tecnica = tecnica;
}

int JogadorAtacante::getHabilidade() {
    return  ((Jogador::getHabilidade()*5) + (this->velocidade*2) + (this->tecnica*3))/10;
}

void JogadorAtacante::print() {
    Jogador::print();
    cout << " | Velocidade: " << getVelocidade()
         << " | Tecnica: " << getTecnica() << endl;
}