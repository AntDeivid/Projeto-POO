#ifndef JOGADORDEFESA_H
#define JOGADORDEFESA_H
#include "Jogador.hpp"
#include <iostream>

class JogadorDefesa : public Jogador
{
    private:
        int cobertura;
        int desarme;
    public:
        JogadorDefesa(std::string, int, int, int, int, int, int);
        int getHabilidade();
};

#endif
