#ifndef TIME_H
#define TIME_H
#include "Jogador.hpp"
#include <iostream>

class Time : public Jogador{
    private:
        std::string nome;
        Jogador *jogadores;
        int vitorias;
        int derrotas;
        int empates;
    
    public:
        Time(std::string nome);
        std::string getNome();
        void setNome(std::string nome);
        std::string getResultados();
        void printJogadores();
        int somaVitorias();
        int somaDerrotas();
        int somaEmpates();
        Jogador insJogadores(Jogador *jogador);
};

#endif // TIME_H