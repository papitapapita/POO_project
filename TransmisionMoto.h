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
    void print(ostream &out)
    {
        out << "Automatico: " << Automatico();
    }
};
#endif //POO_PROJECT_TRANSMISIONMOTO_H
