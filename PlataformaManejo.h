//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_PLATAFORMAMANEJO_H
#define POO_PROJECT_PLATAFORMAMANEJO_H

using namespace std;

class PlataformaManejo
{
    string frenos, kitAmortiguadores, reduccionPeso, nombre;

public:
    PlataformaManejo()
    {
        frenos = kitAmortiguadores = reduccionPeso = nombre = "";
    }
    PlataformaManejo(string frenos, string kitAmortiguadores, string reduccionPeso, string nombre)
    {
        this->frenos = frenos;
        this->kitAmortiguadores = kitAmortiguadores;
        this->reduccionPeso = reduccionPeso;
        this->nombre = nombre;
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
    string getNombre()
    {
        return nombre;
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
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    virtual string TipoPlataformaManejo() = 0;
    virtual void print(ostream &out) = 0;
    virtual void set(istream &in) = 0;
    friend ostream &operator<<(ostream &out, PlataformaManejo *plataformaManejo)
    {
        out << "Nombre: " << plataformaManejo->nombre << endl
            << "Frenos: " << plataformaManejo->frenos << endl
            << "Kit Amortiguadores: " << plataformaManejo->kitAmortiguadores << endl
            << "Reducción de Peso: " << plataformaManejo->reduccionPeso << endl;
        plataformaManejo->print(out);
        return (out);
    }
    friend istream &operator>>(istream &in, PlataformaManejo *plataformaManejo)
    {
        cout << "Nombre: ";
        in >> plataformaManejo->nombre;
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
