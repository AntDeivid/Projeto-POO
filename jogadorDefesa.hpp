#ifndef JOGADORDEFESA_H
#define JOGADORDEFESA_H

#include <iostream>
#include <string>
#include "Jogador.hpp"

class JogadorDefesa : public Jogador
{
    private:
        int cobertura;
        int desarme;
    public:
        JogadorDefesa(std::String, int, int, int, int, int, int);
        int getHabilidade();
};

#endif
