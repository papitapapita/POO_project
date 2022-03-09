//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_MOTO_H
#define POO_PROJECT_MOTO_H

#include "Motorizados.h"
using namespace std;

class Moto : public Motorizados
{
    string manillar;

public:
    Moto() : Motorizados()
    {
        manillar = "";
    }
    Moto(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision, string manillar) : Motorizados(motor, plataformaManejo, transmision)
    {
        this->manillar = manillar;
    }
    string getManillar()
    {
        return manillar;
    }
    void setManillar()
    {
        this->manillar = manillar;
    }
    string TipoVehiculo() override
    {
        return "Moto";
    }
};

#endif //POO_PROJECT_MOTO_H
