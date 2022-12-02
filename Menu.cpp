#include <iostream>
#include "Menu.hpp"

using namespace std;

void primeiro_menu() {
    cout << "+=============================================+" << endl;
    cout << "|(1) - Criar time                             |" << endl;
    cout << "|(2) - Remover time                           |" << endl;
    cout << "|(3) - Visualizar todos os times              |" << endl;
    cout << "|(4) - Visualizar time                        |" << endl;
    cout << "|(5) - Editar time                            |" << endl;
    cout << "|(6) - Iniciar Partida                        |" << endl;
    cout << "|(7) - Sair                                   |" << endl;
    cout << "+=============================================+" << endl;
    cout << "Opcao: ";
}

void menu_editar() {
    cout << "+=============================================+" << endl;
    cout << "|(1) - Editar jogador                         |" << endl;
    cout << "|(2) - Editar nome do time                    |" << endl;
    cout << "+=============================================+" << endl;
    cout << "Opcao: ";
}

void menu_jogador() {
    cout << "+=============================================+" << endl;
    cout << "|(1) - Editar nome                            |" << endl;
    cout << "|(2) - Editar idade                           |" << endl;
    cout << "|(3) - Editar camisa                          |" << endl;
    cout << "+=============================================+" << endl;
    cout << "Opcao: ";
}

void menu_saida() {
    system("clear || cls");
    cout << endl;
    cout << "+==================================+\n";
    cout << "|           DESENVOLVIDO           |\n";
    cout << "|               POR:               |\n";
    cout << "|==================================|\n";
    cout << "|         - ANTONIO DEIVID         |\n";
    cout << "|         - VICTOR EMANUEL         |\n";
    cout << "|         - JOAO PEDRO             |\n";
    cout << "|==================================|\n";
    cout << "|   CIENCIA DA COMPUTACAO 2022.2   |\n";
    cout << "|==================================|\n";
    cout << "|      UFC - CAMPUS DE QUIXADA     |\n";
    cout << "|==================================|\n";
    cout << "|             DISCIPLINA:          |\n";
    cout << "|  PROGAMACAO ORIENTADA A OBJETOS  |\n";
    cout << "|==================================|\n";
    cout << "|              PROJETO:            |\n";  
    cout << "|           FOOTBALL MANAGER       |\n";
    cout << "|==================================|\n";
    cout << "|             PROFESSOR:           |\n";
    cout << "|            THIAGO WERLLEY        |\n";
    cout << "+==================================+\n";

    cout << endl;
}