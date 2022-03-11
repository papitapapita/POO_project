//
// Created by cras9 on 10/03/2022.
//

#ifndef UNTITLED_TIPOCLIENTE_H
#define UNTITLED_TIPOCLIENTE_H

#include <string>
#include <ostream>
#include "persona.h"

using namespace std;

class Tipocliente: public Persona{
public:
    Tipocliente(string nombre, string apellido, int numDocumento,string tipoDocumento, string nacionalidad,
                int dia, int mes, int año)
                :Persona(nombre, apellido, numDocumento,tipoDocumento, nacionalidad, dia, mes, año){}


    virtual string tipoCliente()=0;
    virtual void print()=0;


};
#endif //UNTITLED_TIPOCLIENTE_H
