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
            int verificador = 0;
            while (verificador == 0) {
                if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
                    if (dia >=1 && dia <= 31) {
                        setDia(dia);
                        setMes(mes);
                        setAno(ano);
                        verificador = 1;
                    } else {
                        try {
                            throw "Dia invalido";
                        } catch (const char* msg) {
                            std::cerr << msg << std::endl;
                        }
                        std::cin >> dia >> mes >> ano;
                    }
                } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    if (dia >=1 && dia <= 30) {
                        setDia(dia);
                        setMes(mes);
                        setAno(ano);
                        verificador = 1;
                    } else {
                        try {
                            throw "Dia invalido";
                        } catch (const char* msg) {
                            std::cerr << msg << std::endl;
                        }
                        std::cin >> dia >> mes >> ano;
                    }   
                } else if (mes == 2) {
                    if (dia >= 1 && dia <= 28) {
                        setDia(dia);
                        setMes(mes);
                        setAno(ano);
                        verificador = 1;
                    } else {
                        try {
                            throw "Dia invalido";
                        } catch (const char* msg) {
                            std::cerr << msg << std::endl;
                        }
                        std::cin >> dia >> mes >> ano;
                    }
                } else {
                    try {
                        throw "Mes invalido";
                    } catch (const char* msg) {
                        std::cerr << msg << std::endl;
                    }
                    std::cin >> dia >> mes >> ano;
                }
            }
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