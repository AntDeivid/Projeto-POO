#ifndef TIME_HPP
#define TIME_HPP
#include "Jogador.hpp"
#include <iostream>
#include <sstream>
#include <vector>

class Time : public Jogador{
    private:
        std::string nome;
        std::vector <Jogador> jogador;
        int numJog{0};
        int vitorias{0};
        int derrotas{0};
        int empates{0};
    
    public:
        Time(std::string nome);
        std::string getNome();
        void setNome(std::string nome);
        std::string getResultados();
        void printJogadores();
        int somaVitorias();
        int somaDerrotas();
        int somaEmpates();
        void insJogadores(Jogador *jog);
};

#endif // TIME_HPP