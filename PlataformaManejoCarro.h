//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_PLATAFORMAMANEJOCARRO_H
#define POO_PROJECT_PLATAFORMAMANEJOCARRO_H

#include "PlataformaManejo.h"
using namespace std;


class PlataformaManejoCarro : public PlataformaManejo
{
    string barraEstabilizadora, refuerzoChasis, jaulaAntivuelco;

public:
    PlataformaManejoCarro() : PlataformaManejo()
    {
        barraEstabilizadora = refuerzoChasis = jaulaAntivuelco = "";
    }
    PlataformaManejoCarro(string frenos, string kitAmortiguadores, string reduccionPeso, string barraEstabilizadora, string refuerzoChasis, string jaulaAntivuelco) : PlataformaManejo(frenos, kitAmortiguadores, reduccionPeso)
    {
        this->barraEstabilizadora = barraEstabilizadora;
        this->refuerzoChasis = refuerzoChasis;
        this->jaulaAntivuelco = jaulaAntivuelco;
    }
    string getBarraEstabilizadora()
    {
        return barraEstabilizadora;
    }
    string getRefuerzoChasis()
    {
        return refuerzoChasis;
    }
    string getJaulaAntivuelco()
    {
        return jaulaAntivuelco;
    }
    void setBarraEstabilizadora(string barraEstabilizadora)
    {
        this->barraEstabilizadora = barraEstabilizadora;
    }
    void setRefuerzoChasis(string refuerzoChasis)
    {
        this->refuerzoChasis = refuerzoChasis;
    }
    void setJaulaAntivuelco(string jaulaAntivuelco)
    {
        this->jaulaAntivuelco = jaulaAntivuelco;
    }
    string TipoPlataformaManejo() override
    {
        return "Carro";
    }
};
#endif //POO_PROJECT_PLATAFORMAMANEJOCARRO_H
