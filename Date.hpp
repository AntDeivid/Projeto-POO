#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Date {

    private:
        int dia, mes, ano;
    public:
        Date();
        Date(int dia, int mes, int ano) {
            setDia(dia);
            setAno(ano);
            setMes(mes);
        }

        int getDia() { return this->dia; }
        void setDia(int dia) { this->dia = dia; }
        
        int getMes() { return this->mes; }
        void setMes(int mes) { this->mes = mes; }

        int getAno() { return this->ano; }
        void setAno(int ano) { this->ano = ano; }

        void print() { std::cout << this->getDia() << "/" << this->getMes() << "/" << this->getAno() << std::endl; }

        std::string strPrint() {
            std::stringstream ss;
            ss << getDia() << "/" << getMes() << "/" << getAno();
            return ss.str();
        }

};
#endif // DATE_HPP