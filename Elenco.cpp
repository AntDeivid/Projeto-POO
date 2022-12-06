#include <iostream>
#include "Elenco.hpp"
#include "Jogador.hpp"
#include "JogadorGoleiro.hpp"
#include "JogadorDefesa.hpp"
#include "JogadorAtacante.hpp"

using namespace std;

void elenco_flamengo(Time *time){
    Goleiro *goleiro = new Goleiro("Deivid", 20, 120, 105, 01, 999999, 1.70);
    JogadorDefesa *zaga1 = new JogadorDefesa("Victor", 20, 120, 54, 69, 87, 65);
    JogadorDefesa *zaga2 = new JogadorDefesa("Jotape", 20, 120, 32, 24, 76, 50);
    JogadorAtacante *ataque1 = new JogadorAtacante("Kaynan", 20, 120, 278, 10, 84, 90);
    JogadorAtacante *ataque2 = new JogadorAtacante("Jeferson", 20, 120, 241, 11, 76, 80);

    time->insJogadores(goleiro);
    time->insJogadores(zaga1);
    time->insJogadores(zaga2);
    time->insJogadores(ataque1);
    time->insJogadores(ataque2);
}

void elenco_palmeiras(Time *time){
    Goleiro *goleiro = new Goleiro("Weverton", 20, 120, 105, 01, 999999, 1.70);
    JogadorDefesa *zaga1 = new JogadorDefesa("Gustavo Gómez", 20, 120, 54, 69, 87, 65);
    JogadorDefesa *zaga2 = new JogadorDefesa("Luan", 20, 120, 32, 24, 76, 50);
    JogadorAtacante *ataque1 = new JogadorAtacante("Dudu", 20, 120, 278, 10, 84, 90);
    JogadorAtacante *ataque2 = new JogadorAtacante("Deyverson", 20, 120, 241, 11, 76, 80);

    time->insJogadores(goleiro);
    time->insJogadores(zaga1);
    time->insJogadores(zaga2);
    time->insJogadores(ataque1);
    time->insJogadores(ataque2);
}

void elenco_saopaulo(Time *time){
    Goleiro *goleiro = new Goleiro("Tiago Volpi", 20, 120, 105, 01, 999999, 1.70);
    JogadorDefesa *zaga1 = new JogadorDefesa("Daniel Alves", 20, 120, 54, 69, 87, 65);
    JogadorDefesa *zaga2 = new JogadorDefesa("Bruno Alves", 20, 120, 32, 24, 76, 50);
    JogadorAtacante *ataque1 = new JogadorAtacante("Calleri", 20, 120, 278, 10, 84, 90);
    JogadorAtacante *ataque2 = new JogadorAtacante("Pablo", 20, 120, 241, 11, 76, 80);

    time->insJogadores(goleiro);
    time->insJogadores(zaga1);
    time->insJogadores(zaga2);
    time->insJogadores(ataque1);
    time->insJogadores(ataque2);
}

void elenco_ceara(Time *time){
    Goleiro *goleiro = new Goleiro("Richard", 20, 120, 105, 01, 999999, 1.70);
    JogadorDefesa *zaga1 = new JogadorDefesa("Luiz Otávio", 20, 120, 54, 69, 87, 65);
    JogadorDefesa *zaga2 = new JogadorDefesa("Fabinho", 20, 120, 32, 24, 76, 50);
    JogadorAtacante *ataque1 = new JogadorAtacante("Vinícius", 20, 120, 278, 10, 84, 90);
    JogadorAtacante *ataque2 = new JogadorAtacante("Felipe Azevedo", 20, 120, 241, 11, 76, 80);

    time->insJogadores(goleiro);
    time->insJogadores(zaga1);
    time->insJogadores(zaga2);
    time->insJogadores(ataque1);
    time->insJogadores(ataque2);
}
