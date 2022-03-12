#ifndef POO_PROJECT_CONSULTOR_H
#define POO_PROJECT_CONSULTOR_H
#include "persona.h"
#include "venta.h"

using namespace std;
class Consultor : public Persona
{

public:
    Consultor(string nombre, string apellido, int numDocumento, string tipoDocumento,
              string nacionalidad, int dia, int mes, int anio) : Persona(nombre, apellido, numDocumento, tipoDocumento,
                                                                         nacionalidad, dia, mes, anio)
    {
    }

    int getEdad() override
    {
        return 2022 - fechaNacimiento->getAnio();
    }

    void print()
    {
        showAtributes();
    }
};
#endif
