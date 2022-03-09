//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_CAMION_H
#define POO_PROJECT_CAMION_H

#include "Motorizados.h"
using namespace std;

class Camion : public Motorizados
{
    float capacidadCarga;

public:
    Camion() : Motorizados()
    {
        capacidadCarga = 0;
    }
    Camion(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision, float capacidadCarga) : Motorizados(motor, plataformaManejo, transmision)
    {
        this->capacidadCarga = capacidadCarga;
    }
    float getCapacidadCarga()
    {
        return capacidadCarga;
    }
    void setCapacidadCarga()
    {
        this->capacidadCarga = capacidadCarga;
    }
    string TipoVehiculo() override
    {
        return "Camion";
    }
};
#endif //POO_PROJECT_CAMION_H
