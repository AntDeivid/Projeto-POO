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
        int getVelocidade();
        void setVelocidade(int velocidade);
        int getTecnica();
        void setTecnica(int tecnica);
        void print();
        std::string getId() { return this->id; }

};

#endif // JOGADOR_ATACANTE_HPP