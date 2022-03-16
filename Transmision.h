//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_TRANSMISION_H
#define POO_PROJECT_TRANSMISION_H

#include "TipoConduccion.h"
using namespace std;

class Transmision : public TipoConduccion
{
    string tipoTransmision, lineaTransmision;

public:
    Transmision()
    {
        tipoTransmision = "";
        clutch = false;
    }
    Transmision(string tipoTransmision, bool clutch)
    {
        this->tipoTransmision = tipoTransmision;
        this->clutch = clutch;
    }
    string getTipoTransmision()
    {
        return tipoTransmision;
    }

    bool getClutch()
    {
        return clutch;
    }
    void setTipoTransmision(string tipoTransmision)
    {
        this->tipoTransmision = tipoTransmision;
    }

    void setClutch(bool clutch)
    {
        this->clutch = clutch;
    }
    virtual void print(ostream &out) = 0;
    virtual void set(istream &in) = 0;
    friend ostream &operator<<(ostream &out, Transmision *transmision)
    {
        out << "Tipo de Transmisión: " << transmision->tipoTransmision << endl
            << "Clutch: " << (transmision->clutch ? "Sí" : "No") << endl;
        transmision->print(out);
        return out;
    }
    friend istream &operator>>(istream &in, Transmision *transmision)
    {
        cout << "tipo Transmision: ";
        in >> transmision->tipoTransmision;
        cout << "linea Transmision: ";
        in >> transmision->lineaTransmision;
        transmision->set(in);
        return in;
    }
};
#endif // POO_PROJECT_TRANSMISION_H
