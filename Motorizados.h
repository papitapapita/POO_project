//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_MOTORIZADOS_H
#define POO_PROJECT_MOTORIZADOS_H

#include "engine.h"
#include "vehiculo.h"

#include "PlataformaManejo.h"
#include "Transmision.h"

using namespace std;

class Motorizados : public Vehiculo
{
    Motor *motor;
    PlataformaManejo *plataformaManejo;
    Transmision *transmision;

public:
    Motorizados() : Vehiculo()
    {
        motor = new Motor();
        plataformaManejo = {};
        transmision = {};
    }
    Motorizados(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision)
    {
    }
    Motor *getMotor()
    {
        return motor;
    }
    PlataformaManejo *getPlataformaManejo()
    {
        return plataformaManejo;
    }
    Transmision *getTransmision()
    {
        return transmision;
    }
    void setMotor(Motor *motor)
    {
        this->motor = motor;
    }
    void setPlataformaManejo(PlataformaManejo *plataformaManejo)
    {
        this->plataformaManejo = plataformaManejo;
    }
    void setTransmision(Transmision *transmision)
    {
        this->transmision = transmision;
    }
    string claseVehiculo() override
    {
        return "Motorizado";
    }
    virtual string TipoVehiculo() = 0;
};
#endif // POO_PROJECT_MOTORIZADOS_H
