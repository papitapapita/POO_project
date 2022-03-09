//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_BICICLETA_H
#define POO_PROJECT_BICICLETA_H
#include "NoMotorizado.h"
using namespace std;

class Bicicleta : public NoMotorizado
{
    string sillin, marco;

public:
    Bicicleta() : NoMotorizado()
    {
        sillin = "";
        marco = "";
    }
    Bicicleta(float manejo, float frenado, float offroad, float valor, float salida, float aceleracion, float velocidad, float peso, int modelo, int potencia, int torque, string tipo, Marca *marca, Llanta *llantas, string sillin, string marco) : NoMotorizado(manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso, modelo, potencia, torque, tipo, marca, llantas)
    {
        this->sillin = sillin;
        this->marco = marco;
    }
    string getSillin()
    {
        return sillin;
    }
    string getMarco()
    {
        return marco;
    }
    void setSillin(string sillin)
    {
        this->sillin = sillin;
    }
    void setMarco(string marco)
    {
        this->marco = marco;
    }
};
#endif //POO_PROJECT_BICICLETA_H
