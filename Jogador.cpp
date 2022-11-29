#include <iostream>
#include <string>
#include "Jogador.hpp"

using namespace std;

Jogador::Jogador(std::string nome, int idade, int habilidade, int gols, int camisa) {
    this->nome = nome;
    this->idade = idade;
    this->habilidade = habilidade;
    this->gols = gols;
    this->camisa = camisa;
}

string Jogador::getNome() { return this->nome; }
void Jogador::setNome(string nome) { this->nome = nome; }
//int Jogador::getHabilidade() {return this->habilidade; }
int Jogador::getGols() { return this->gols; }
void Jogador::somaGol() { this->gols++; }
int Jogador::getCamisa(){
    return this->camisa;
}
void Jogador::setCamisa(int camisa) { this->camisa = camisa; }