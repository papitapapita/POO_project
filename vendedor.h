//
// Created by cras9 on 11/03/2022.
//

#ifndef POO_PROJECT_VENDEDOR_H
#define POO_PROJECT_VENDEDOR_H
#include "tipocliente.h"
#include "cuenta.h"
#include "vehiculo.h"
using namespace std;

class Vendedor : public Tipocliente
{
    Cuenta *cuenta;
    Vehiculo *vehiculo;

public:

    Vendedor():Tipocliente() {

        vehiculo = Vehiculo();
    }

    Vendedor(string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia,
             int mes, int anio, int numCuenta, float saldo, string banco, Vehiculo *vehiculo) : Tipocliente(nombre, apellido, numDocumento,
                                                                                        tipoDocumento, nacionalidad, dia, mes, anio)
    {
        this->vehiculo = vehiculo;
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
        return "Vendedor";
    }

    void addVehiculo(Vehiculo *v)
    {
        this->vehiculo = v;
    }

    void print()
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

    void addVehiculo(Vehiculo *v){
        this->vehiculo = v;
    }

    friend istream &operator>>(istream &in, Vendedor vendedor)
    {
        in >> vendedor.nombre;
        in >> vendedor.documento;
        in >> vendedor.fechaNacimiento;
        in >> vendedor.cuenta;
        return in;

    }

};
#endif // POO_PROJECT_VENDEDOR_H
