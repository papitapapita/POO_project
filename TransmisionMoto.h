//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_TRANSMISIONMOTO_H
#define POO_PROJECT_TRANSMISIONMOTO_H

#include "Transmision.h"
using namespace std;

class TransmisionMoto : public Transmision
{
public:
    TransmisionMoto() : Transmision()
    {
    }
    TransmisionMoto(string tipoTransmision, bool clutch) : Transmision(tipoTransmision, clutch)
    {
    }
    virtual string claseTransmision(){
        return "Moto";
    };
    void print(ostream &out)
    {
        out << "Automatico: " << automatico();
    }
    string automatico() override
    {
        if (clutch)
        {
            return "Sí";
        }
        else
        {
            return "No";
        }
    }
    void set(istream &in) override
    {
    }
};
#endif // POO_PROJECT_TRANSMISIONMOTO_H
