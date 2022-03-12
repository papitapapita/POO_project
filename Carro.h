//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_CARRO_H
#define POO_PROJECT_CARRO_H

#include "Motorizados.h"
using namespace std;

class Carro : public Motorizados
{
    int cantidadPuestos;

public:
    Carro() : Motorizados()
    {
        cantidadPuestos = 0;
    }
    Carro(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision, int cantidadPuestos) : Motorizados(motor, plataformaManejo, transmision)
    {
        this->cantidadPuestos = cantidadPuestos;
    }
    int getCantidadPuestos()
    {
        return cantidadPuestos;
    }
    void setCantidadPuestos()
    {
        this->cantidadPuestos = cantidadPuestos;
    }
    string TipoVehiculo() override
    {
        return "Carro";
    }
};
#endif // POO_PROJECT_CARRO_H
