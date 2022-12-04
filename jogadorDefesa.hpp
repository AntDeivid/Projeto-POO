#ifndef JOGADORDEFESA_HPP
#define JOGADORDEFESA_HPP
#include "Jogador.hpp"
#include <iostream>
#include <string>
#include "Jogador.hpp"

class JogadorDefesa : public Jogador
{
    private:
        int cobertura;
        int desarme;
        std::string id = "defesa";
    public:
        JogadorDefesa() = default;
        JogadorDefesa(std::string, int, int, int, int, int, int);
        int getHabilidade();
        std::string getId() { return this->id; }
};


#endif //JOGADOR_DEFESA_HPP
