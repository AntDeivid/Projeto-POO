#include <iostream>
#include <string>
#include "JogadorAtacante.hpp"

using namespace std;

JogadorAtacante::JogadorAtacante(string nome, int idade, int habilidade, int gols, int camisa, int velocidade, int tecnica)
: Jogador(nome, idade, habilidade, gols, camisa) {
    this->velocidade = velocidade;
    this->tecnica = tecnica;
}

int JogadorAtacante::getHabilidade() {
    return  ((this->habilidade*5) + (this->velocidade*2) + (this->tecnica*3))/10
}