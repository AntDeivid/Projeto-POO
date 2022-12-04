#ifndef JOGADORATACANTE_HPP
#define JOGADORATACANTE_HPP
#include <iostream>
#include <string>
#include <typeinfo>

#include "Jogador.hpp"

class JogadorAtacante : public Jogador {

    private:
        int velocidade, tecnica;
        std::string id = "atacante";

    public:
        JogadorAtacante() = default;
        JogadorAtacante(std::string, int, int, int, int, int, int);
        int getHabilidade();
        std::string getId() { return this->id; }

};

#endif // JOGADOR_ATACANTE_HPP