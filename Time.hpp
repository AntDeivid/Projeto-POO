#ifndef TIME_HPP
#define TIME_HPP
#include "Jogador.hpp"
#include <iostream>
#include <sstream>
#include <vector>

class Time : public Jogador{
    private:
        std::string nome;
<<<<<<< HEAD
        vector<Jogador> jogador;
=======
        std::vector <Jogador> jogador;
        int numJog{0};
>>>>>>> 9db50ed42ab36e6ee7b2d94d9180f57cf8fcff58
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
        vector<Jogador> getJogadores();
};

#endif // TIME_HPP