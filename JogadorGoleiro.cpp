#include "JogadorGoleiro.h"
#include <iostream>
using namespace std;

Goleiro::Goleiro(string nome, int idade, int habilidade, int gols, int camisa, int reflexos, float altura): Jogador(nome, idade, habilidade, gols, camisa){
    this->reflexos = reflexos;
    this->altura = altura;
}

float Goleiro::getAltura(){
    return altura;
}

void Goleiro::setAltura(int altura){
    this->altura = altura;
}

int Goleiro::getReflexos(){
    return reflexos;
}

void Goleiro::setReflexos(int reflexos){
    this->reflexos = reflexos;
}

int Goleiro::getHabilidade(){
    return ((getHabilidade()*5)+ (((int)(getAltura()*100))*2) + (getReflexos*3))/10;
}
