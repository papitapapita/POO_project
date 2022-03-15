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
    PlataformaManejoCarro(string frenos, string kitAmortiguadores, string reduccionPeso, string nombre, string barraEstabilizadora, string refuerzoChasis, string jaulaAntivuelco) : PlataformaManejo(frenos, kitAmortiguadores, reduccionPeso, nombre)
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
    void print(ostream &out) override
    {
        out << "Barra Estabilizadora: " << barraEstabilizadora << endl
            << "Refuerzo Chasis: " << refuerzoChasis << endl
            << "Jaula Antivuelco: " << jaulaAntivuelco << endl;
    }
    void set(istream &in) override
    {
        cout << "barra Estabilizadora: ";
        in >> barraEstabilizadora;
        cout << "Refuerzo Chasis: ";
        in >> refuerzoChasis;
        cout << "Jaula Antivuelco: ";
        in >> jaulaAntivuelco;
    }
};
#endif // POO_PROJECT_PLATAFORMAMANEJOCARRO_H
