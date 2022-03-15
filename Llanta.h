//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_LLANTA_H
#define POO_PROJECT_LLANTA_H
#include "rin.h"
using namespace std;

class Llanta
{
    Rin *rin;
    string tipo, trazado_llanta;

public:
    Llanta()
    {
        trazado_llanta = tipo = "";
    }
    Llanta(string trazado_llanta, string tipo, Rin *rin)
    {
        this->trazado_llanta = trazado_llanta;
        this->tipo = tipo;
        this->rin = rin;
    }
    Rin *getRin()
    {
        return rin;
    }
    string getTrazadoLlanta()
    {
        return trazado_llanta;
    }
    string getTipo()
    {
        return tipo;
    }
    void setTipo(string tipo)
    {
        this->tipo = tipo;
    }
    void setRin(Rin *rin)
    {
        this->rin = rin;
    }
    void setTrazadoLlanta(string trazado_llanta)
    {
        this->trazado_llanta = trazado_llanta;
    }
    friend ostream &operator<<(ostream &out, Llanta *llanta)
    {
        out << "Tipo: " << llanta->tipo << endl
            << "Trazado de Llanta: " << llanta->trazado_llanta << endl
            << "Rin: " << llanta->rin->getRin() << endl;
        return out;
    }
    friend istream &operator>>(istream &in, Llanta *llanta)
    {
        cout << "Tipo: ";
        in >> llanta->tipo;
        cout << "Trazado de Llanta: ";
        in >> llanta->trazado_llanta;
        return in;
    }
};
#endif // POO_PROJECT_LLANTA_H
