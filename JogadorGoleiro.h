#ifndef JOGADOR_GOLEIRO_H
#define JOGADOR_GOLEIRO_H
#include "Jogador.h"
#include <iostream>


class Goleiro: public Jogador{
    private:
        int reflexos;
        float altura;
    
    public:
        Goleiro(std::string nome, int idade, int habilidade, int gols, int camisa, int reflexos, float altura);
        int getIdade();
        void setIdade(int idade);
        float getAltura();
        void setAltura(float altura);
        int getHabilidade();
};

#endif // JOGADOR_GOLEIRO_H