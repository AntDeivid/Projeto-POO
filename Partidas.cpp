#include <iostream>
#include <string>
#include <sstream>
#include "Partidas.hpp"

using namespace std;

Partidas::Partidas(Date &data, Time &timeCasa, Time &timeVisitante) {
    this->data = data;
    this->timeCasa = timeCasa;
    this->timeVisitante = timeVisitante;
    this->placarCasa = 0;
    this->placarVisitante = 0;
}

std::string Partidas::getCasa() { return timeCasa->getNome(); }
std::string Partidas::getVisitante() { return timeVisitante->getNome(); }

std::string Partidas::getPlacar() {
    stringstream ss;
    ss << "O placar esta" << this->placarCasa << " para o time da casa e " << this->placarVisitante << " para o time visitante";
    
    return ss.str();
}

void Partidas::golCasa() { this->placarCasa++; }
void Partidas::golVisitante() { this->placarVisitante++; }