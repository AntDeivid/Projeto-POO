#ifndef JOGADOR_HPP
#define JOGADOR_HPP
#include <iostream>
#include <string>

class Jogador {

    private:
        std::string nome;
        int idade, habilidade, gols, camisa;

    public:
        Jogador(std::string, int, int, int, int);

        std::string getNome();
        void setNome(std::string);
        virtual int getHabilidade() = 0;
        int getGols();
        void somaGol();

};
#endif