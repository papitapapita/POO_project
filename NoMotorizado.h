//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_NOMOTORIZADO_H
#define POO_PROJECT_NOMOTORIZADO_H
#include "vehiculo.h"
using namespace std;

class NoMotorizado : public Vehiculo
{
public:
    NoMotorizado() : Vehiculo()
    {
    }
    NoMotorizado(float manejo, float frenado, float offroad, float valor, float salida, float aceleracion, float velocidad, float peso, int modelo, int potencia, int torque, string tipo, Marca *marca, Llanta *llantas) : Vehiculo(manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso, modelo, potencia, torque, tipo, marca, llantas)
    {
    }
    string claseVehiculo() override
    {
        return "No Motorizado";
    }
    virtual string TipoVehiculo() = 0;
};
#endif //POO_PROJECT_NOMOTORIZADO_H
