//
// Created by cras9 on 10/03/2022.
//

#ifndef POO_PROJECT_TIPOCLIENTE_H
#define POO_PROJECT_TIPOCLIENTE_H

#include <string>
#include <ostream>
#include "persona.h"

using namespace std;

class Tipocliente : public Persona
{
public:
    Tipocliente(): Persona(){};

    Tipocliente(string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad,
                int dia, int mes, int anio)
        : Persona(nombre, apellido, numDocumento, tipoDocumento, nacionalidad, dia, mes, anio) {}

    virtual string tipoCliente() = 0;
    virtual void print() = 0;
};
#endif // POO_PROJECT_TIPOCLIENTE_H
