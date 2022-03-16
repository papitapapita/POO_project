//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_PLATAFORMAMANEJOMOTO_H
#define POO_PROJECT_PLATAFORMAMANEJOMOTO_H
#include "PlataformaManejo.h"
using namespace std;

class PlataformaManejoMoto : public PlataformaManejo
{
public:
    PlataformaManejoMoto() : PlataformaManejo()
    {
    }
    PlataformaManejoMoto(string frenos, string kitAmortiguadores, string reduccionPeso, string nombre) : PlataformaManejo(frenos, kitAmortiguadores, reduccionPeso, nombre)
    {
    }
    string TipoPlataformaManejo() override
    {
        return "Moto";
    }
    void print(ostream &out) override
    {
    }
    void set(istream &in) override
    {
    }
};

#endif // POO_PROJECT_PLATAFORMAMANEJOMOTO_H
