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
        int getHabilidade();
        int getGols();
        void somaGol();

};