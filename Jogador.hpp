#ifndef JOGADOR_HPP
#define JOGADOR_HPP
#include <iostream>
#include <string>

class Jogador {

    private:
        std::string nome;
        int idade, habilidade, gols, camisa;

    public:
        Jogador()= default;
        Jogador(std::string, int, int, int, int);

        std::string getNome();
        void setNome(std::string);
        virtual int getHabilidade(){};
        int getGols();
        void somaGol();
        int getCamisa();
        void setCamisa(int camisa);
        int getIdade();
        void setIdade(int idade);

};

#endif // JOGADOR_HPP