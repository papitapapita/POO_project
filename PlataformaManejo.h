//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_PLATAFORMAMANEJO_H
#define POO_PROJECT_PLATAFORMAMANEJO_H

using namespace std;

class PlataformaManejo
{
    string frenos, kitAmortiguadores, reduccionPeso;

public:
    PlataformaManejo()
    {
        frenos = kitAmortiguadores = reduccionPeso = "";
    }
    PlataformaManejo(string frenos, string kitAmortiguadores, string reduccionPeso)
    {
        this->frenos = frenos;
        this->kitAmortiguadores = kitAmortiguadores;
        this->reduccionPeso = reduccionPeso;
    }
    string getFrenos()
    {
        return frenos;
    }
    string getKitAmortiguadores()
    {
        return kitAmortiguadores;
    }

    string getReduccionPeso()
    {
        return reduccionPeso;
    }

    void setFrenos(string frenos)
    {
        this->frenos = frenos;
    }
    void setKitAmortiguadores(string kitAmortiguadores)
    {
        this->kitAmortiguadores = kitAmortiguadores;
    }

    void setReduccionPeso(string reduccionPeso)
    {
        this->reduccionPeso = reduccionPeso;
    }

    virtual string TipoPlataformaManejo() = 0;
    virtual void print(ostream &out);
    virtual void set(istream &in);
    friend ostream &operator<<(ostream &out, PlataformaManejo *plataformaManejo)
    {
        out << "Frenos: " << plataformaManejo->frenos << endl
            << "Kit Amortiguadores: " << plataformaManejo->kitAmortiguadores << endl
            << "Reducción de Peso: " << plataformaManejo->reduccionPeso << endl;
        plataformaManejo->print(out);
        return (out);
    }
    friend istream &operator>>(istream &in, PlataformaManejo *plataformaManejo)
    {
        cout << "Frenos: ";
        in >> plataformaManejo->frenos;
        cout << "kit Amortiguadores: ";
        in >> plataformaManejo->kitAmortiguadores;
        cout << "reduccion Peso: ";
        in >> plataformaManejo->reduccionPeso;
        plataformaManejo->set(in);
        return in;
    }
};

#endif // POO_PROJECT_PLATAFORMAMANEJO_H
