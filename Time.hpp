#ifndef TIME_H
#define TIME_H
#include "Jogador.hpp"
#include <iostream>

class Time : public Jogador{
    private:
        std::string nome;
        Jogador *jogadores;
        int vitorias{0};
        int derrotas{0};
        int empates{0};
    
    public:
        Time(std::string nome);
        std::string getNome();
        void setNome(std::string nome);
        std::string getResultados();
        void printJogadores(Jogador *jogador[]);
        int somaVitorias();
        int somaDerrotas();
        int somaEmpates();
        void insJogadores(Jogador *jogador);
};

#endif // TIME_H