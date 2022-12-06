#include <iostream>
#include <string>
#include <sstream>
#include "Partidas.hpp"

using namespace std;

Partidas::Partidas(Date *data, Time *timeCasa, Time *timeVisitante) : data(data), timeCasa(timeCasa), timeVisitante(timeVisitante) {
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
    ss << this->getCasa() << " " << this->placarCasa << " X " << this->placarVisitante << " " << this->getVisitante();
    return ss.str();
}

int Partidas::golCasa() { 
    placarCasa = 0;
    this->placarCasa++; 
    return placarCasa;
}
int Partidas::golVisitante() { 
    placarVisitante = 0;
    this->placarVisitante++; 
    return placarVisitante;
}