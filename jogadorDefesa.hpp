#ifndef JOGADORDEFESA_H
#define JOGADORDEFESA_H

#include <iostream>

class JogadorDefesa : public Jogador
{
    private:
        int cobertura;
        int desarme;
    public:
        JogadorDefesa(String, int, int, int, int, int, int);
        int getHabilidade();
};

#endif
