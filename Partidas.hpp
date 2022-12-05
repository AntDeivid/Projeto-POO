#ifndef PARTIDAS_HPP
#define PARTIDAS_HPP
#include <string>
#include "Date.hpp"
#include "Time.hpp"

class Partidas {

    private:
        Date *data;
        Time timeCasa, timeVisitante;
        int placarCasa, placarVisitante;

    public:
        Partidas(Date *data, Time, Time);

        std::string getCasa();
        std::string getVisitante();
        std::string getPlacar();

        int golCasa();
        int golVisitante();
};


#endif