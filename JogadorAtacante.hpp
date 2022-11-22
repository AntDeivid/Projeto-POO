#ifndef JOGADORATACANTE_HPP
#define JOGADORATACANTE_HPP
#include <iostream>
#include <string>

#include "Jogador.hpp"

class JogadorAtacante : public Jogador {

    private:
        int velocidade, tecnica;
    public:
        JogadorAtacante(std::string, int, int, int, int, int, int);

        int getHabilidade();

};

#endif // JOGADOR_ATACANTE_HPP