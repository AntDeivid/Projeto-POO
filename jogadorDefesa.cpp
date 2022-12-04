#include <iostream>
#include "jogadorDefesa.hpp"

using namespace std;

JogadorDefesa::JogadorDefesa(string nome, int idade, int habilidade, int gols, int camisa, int cobertura, int desarme) : Jogador(nome, idade, habilidade, gols, camisa)
{
    this->cobertura = cobertura;
    this->desarme = desarme;
}

int JogadorDefesa::getHabilidade()
{
    return ((Jogador::getHabilidade()*5) + (cobertura*3) + (desarme*2) )/10;
}

const type_info& JogadorDefesa::getID() {
    std::type_info& defesaID = typeid(JogadorDefesa());
    return defesaID.name();
}