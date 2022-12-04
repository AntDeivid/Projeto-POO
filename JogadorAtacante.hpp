#ifndef JOGADORATACANTE_HPP
#define JOGADORATACANTE_HPP
#include <iostream>
#include <string>
#include <typeinfo>

#include "Jogador.hpp"

class JogadorAtacante : public Jogador {

    private:
        int velocidade, tecnica;

    public:
        JogadorAtacante() = default;
        JogadorAtacante(std::string, int, int, int, int, int, int);

        int getHabilidade();
        const std::type_info& getID();

};

#endif // JOGADOR_ATACANTE_HPP