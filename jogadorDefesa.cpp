#include <iostream>
#include "jogadorDefesa.hpp"

using namespace std;

JogadorDefesa::JogadorDefesa(string nome, int idade, int habilidade, int gols, int camisa, int cobertura, int desarme) : Jogador(nome, idade, habilidade, gols, camisa)
{
    this->cobertura = cobertura;
    this->desarme = desarme;
}

int JogadorDefesa::getCobertura()
{
    return this->cobertura;
}

void JogadorDefesa::setCobertura(int cobertura)
{
    this->cobertura = cobertura;
}

int JogadorDefesa::getDesarme()
{
    return this->desarme;
}

void JogadorDefesa::setDesarme(int desarme)
{
    this->desarme = desarme;
}

int JogadorDefesa::getHabilidade()
{
    return ((Jogador::getHabilidade()*5) + (cobertura*3) + (desarme*2) )/10;
}

void JogadorDefesa::print() {
    Jogador::print();
    cout << " | Cobertura: " << getCobertura()
         << " | Desarme: " << getDesarme() << endl;
}
