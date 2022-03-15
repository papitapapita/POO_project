#ifndef POO_PROJECT_RIN_H
#define POO_PROJECT_RIN_H
#include <iostream>
using namespace std;

class Rin
{
    string rin;
    float diametroRin;

public:
    Rin()
    {
        rin = "";
        diametroRin = 0;
    }
    Rin(string rin, float diametroRin)
    {
        this->rin = rin;
        this->diametroRin = diametroRin;
    }
    string getRin()
    {
        return rin;
    }
    float getDiametroRin()
    {
        return diametroRin;
    }
    void setRin(string rin)
    {
        this->rin = rin;
    }
    void setDiametroRin(float diametroRin)
    {
        this->diametroRin = diametroRin;
    }
    friend istream &operator>>(istream &in, Rin *rin)
    {
        cout << "Rin: ";
        in >> rin->rin;
        cout << "Diametro Rin: ";
        in >> rin->diametroRin;
        return in;
    }
};

#endif