//
// Created by cras9 on 11/03/2022.
//

#ifndef POO_PROJECT_VENDEDOR_H
#define POO_PROJECT_VENDEDOR_H
#include "tipocliente.h"
#include "cuenta.h"

using namespace std;

class Vendedor : public Tipocliente
{
    Cuenta *cuenta;

public:

    Vendedor():Tipocliente() {}

    Vendedor(string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia,
             int mes, int anio, int numCuenta, float saldo, string banco) : Tipocliente(nombre, apellido, numDocumento,
                                                                                        tipoDocumento, nacionalidad, dia, mes, anio)
    {

        cuenta = new Cuenta(numCuenta, saldo, banco);
    }

    int getEdad() override
    {
        return 2022 - fechaNacimiento->getAnio();
    }

    string tipoCliente() override
    {
        return "Vendedor";
    }

    void print(ostream &out)
    {
        cout << "Edad: " << getEdad();
        cout << tipoCliente();
        cuenta->print();
    }

    Cuenta getCuenta()
    {
        return *cuenta;
    }

    void setCuenta(Cuenta *cuenta)
    {
        this->cuenta = cuenta;
    }
};
#endif // POO_PROJECT_VENDEDOR_H
