#ifndef JOGADOR_GOLEIRO_H
#define JOGADOR_GOLEIRO_H
#include "Jogador.hpp"
#include <iostream>


class Goleiro: public Jogador{
    private:
        int reflexos;
        float altura;
    
    public:
        Goleiro(std::string nome, int idade, int habilidade, int gols, int camisa, int reflexos, float altura);
        int getReflexos();
        void setReflexos(int reflexos);
        float getAltura();
        void setAltura(float altura);
        int getHabilidade();
};

#endif // JOGADOR_GOLEIRO_HPP
