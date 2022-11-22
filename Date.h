#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>

class Date {

    private:
        int dia, mes, ano;
    public:
        Date();

        int getDia() { return this->dia; }
        void setDia(int dia) { this->dia = dia; }
        
        int getMes() { return this->mes; }
        void setMes(int mes) { this->mes = mes; }

        int getAno() { return this->ano; }
        void setAno(int ano) { this->ano = ano; }

        void print() { std::cout << this->getDia() << "/" << this->getMes() << "/" << this->getAno() << std::endl; }

};
#endif // DATE_H