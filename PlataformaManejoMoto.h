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
    PlataformaManejoMoto(string frenos, string kitAmortiguadores, string reduccionPeso) : PlataformaManejo(frenos, kitAmortiguadores, reduccionPeso)
    {
    }
    string TipoPlataformaManejo() override
    {
        return "Moto";
    }
};

#endif //POO_PROJECT_PLATAFORMAMANEJOMOTO_H
