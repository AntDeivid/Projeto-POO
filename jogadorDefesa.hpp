#ifndef JOGADORDEFESA_H
#define JOGADORDEFESA_H
#include "Jogador.hpp"
#include <iostream>
#include <string>
#include "Jogador.hpp"

class JogadorDefesa : public Jogador
{
    private:
        int cobertura;
        int desarme;
    public:
        JogadorDefesa(std::string, int, int, int, int, int, int);
        int getHabilidade();
};


#endif //JOGADOR_DEFESA_HPP
