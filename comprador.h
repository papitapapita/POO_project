//
// Created by cras9 on 10/03/2022.
//

#ifndef POO_PROJECT_COMPRADOR_H
#define POO_PROJECT_COMPRADOR_H

#include <ostream>
#include "tipocliente.h"
#include "cuenta.h"

using namespace std;

class Comprador : public Tipocliente
{
    Cuenta *cuenta;

public:
    Comprador(): Tipocliente(){

        cuenta = Cuenta();
    }
    Comprador(string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia,
              int mes, int anio, int numCuenta, float saldo, string banco) : Tipocliente(nombre, apellido, numDocumento,
                                                                                         tipoDocumento, nacionalidad, dia, mes, anio)
    {
        cuenta = new Cuenta(numCuenta, saldo, banco);
    }

    int getEdad() override
    {
        return 2022 - fechaNacimiento->getAnio();
    }

    string showNombre() override
    {
        return nombre->getNombre();
    }

    string tipoCliente() override
    {
        return "Comprador";
    }

    void print()
    {
        showAtributes();
        cout << "Edad: " << getEdad();
        cout << tipoCliente();
        cuenta->print();
    }

    float getSaldoCuenta(){
        return cuenta->getSaldo();
    }

    Cuenta getCuenta()
    {
        return *cuenta;
    }

    void setCuenta(Cuenta *cuenta)
    {
        this->cuenta = cuenta;
    }

    friend istream &operator>>(istream &in, Comprador comprador)
    {
        in >> comprador.nombre;
        in >> comprador.documento;
        in >> comprador.fechaNacimiento;
        in >> comprador.cuenta;
        return in;

    }
};
#endif // POO_PROJECT_COMPRADOR_H
