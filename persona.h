//
// Created by cras9 on 9/03/2022.
//

#ifndef POO_PROJECT_PERSONA_H
#define POO_PROJECT_PERSONA_H
#include "documento.h"
#include "nombre.h"
#include "fecha.h"
#include <vector>

using namespace std;

class Persona
{
protected:
    Nombre *nombre;
    Fecha *fechaNacimiento;
    Documento *documento;

public:
    Persona(){
        nombre = Nombre::Nombre();
        fechaNacimiento = Fecha::Fecha();
        documento = Documento::Documento();
    }

    Persona(string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia, int mes, int anio)
    {
        this->nombre = new Nombre(nombre, apellido);
        documento = new Documento(numDocumento, tipoDocumento, nacionalidad);
        fechaNacimiento = new Fecha(dia, mes, anio);
    }

    void showAtributes()
    {
        nombre->print();
        documento->print();
        fechaNacimiento->print();
    }
    Nombre *getNombre()
    {
        return nombre;
    }

    void setNombre(Nombre *nombre)
    {
        this->nombre = nombre;
    }

    Fecha *getFechaNacimiento()
    {
        return fechaNacimiento;
    }

    void setFechaNacimiento(Fecha *fechaNacimiento)
    {
        this->fechaNacimiento = fechaNacimiento;
    }

    Documento *getDocumento()
    {
        return documento;
    }

    void setDocumento(Documento *documento)
    {
        this->documento = documento;
    }

    virtual int getEdad() = 0;
};
#endif // POO_PROJECT_PERSONA_H
