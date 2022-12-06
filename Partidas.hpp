#ifndef PARTIDAS_HPP
#define PARTIDAS_HPP
#include <string>
#include "Date.hpp"
#include "Time.hpp"

class Partidas {

    private:
        Date *data;
        Time *timeCasa, *timeVisitante;
        int placarCasa, placarVisitante;

    public:
        Partidas(Date *data, Time*, Time*);

        std::string getCasa();
        Time* gettimeCasa() { return this->timeCasa; }
        std::string getVisitante();
        Time* gettimeVisitante() { return this->timeVisitante; }
        std::string getPlacar();
        Date getData() { return *data; }

        int golCasa();

        int golVisitante();
};


#endif