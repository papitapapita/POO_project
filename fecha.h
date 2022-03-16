//
// Created by cras9 on 9/03/2022.
//

#ifndef POO_PROJECT_FECHA_H
#define POO_PROJECT_FECHA_H

class Fecha
{
    int dia, mes, anio;

public:
    Fecha()
    {
        dia = mes = anio = 0;
    }
    Fecha(int dia, int mes, int anio)
    {

        this->dia = dia;
        this->mes = mes;
        this->anio = anio;
    }

    void print()
    {
        cout << getDia() << "/" << getMes() << "/" << getAnio();
    }

    int getDia()
    {
        return dia;
    }

    void setDia(int dia)
    {
        this->dia = dia;
    }

    int getMes()
    {
        return mes;
    }

    void setMes(int mes)
    {
        this->mes = mes;
    }

    int getAnio()
    {
        return anio;
    }

    void setAnio(int anio)
    {
        this->anio = anio;
    }

    friend istream &operator>>(istream &in, Fecha fecha)
    {
        cout << "Dia de nacimiento: ";
        in >> fecha.dia;
        cout << "Mes de nacimiento: ";
        in >> fecha.mes;
        cout << "Año de nacimiento: ";
        in >> fecha.anio;
        return in;

    }
};
#endif // POO_PROJECT_FECHA_H
