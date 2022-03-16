//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_TRANSMISIONCARRO_H
#define POO_PROJECT_TRANSMISIONCARRO_H

#include "Transmision.h"
using namespace std;

class TransmisionCarro : public Transmision
{
    string diferencial, lineaTransmision;

public:
    TransmisionCarro()
    {
        diferencial = lineaTransmision = "";
    }
    TransmisionCarro(string tipoTransmision, bool clutch, string diferencial, string lineaTransmision) : Transmision(tipoTransmision, clutch)
    {
        this->diferencial = diferencial;
        this->lineaTransmision = lineaTransmision;
    }
    void setLineaTransmision(string lineaTransmision)
    {
        this->lineaTransmision = lineaTransmision;
    }
    string getLineaTransmision()
    {
        return lineaTransmision;
    }
    void print(ostream &out)
    {
        out << "Diferencial: " << diferencial << endl
            << "Linea de Transmisión: " << lineaTransmision << "Automático: " << Automatico();
    }
    void set(istream &in) override{
        cout<<"diferencial: ";
        in>>diferencial;
        cout<<"linea Transmision: ";
        in>>lineaTransmision;
    }
};
#endif //POO_PROJECT_TRANSMISIONCARRO_H
