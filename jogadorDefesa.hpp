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
    public:
        JogadorDefesa() = default;
        JogadorDefesa(std::string, int, int, int, int, int, int);
        int getHabilidade();
        const std::type_info& getID();
};


#endif //JOGADOR_DEFESA_HPP
