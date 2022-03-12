#ifndef POO_PROJECT_VENTA_H
#define POO_PROJECT_VENTA_H
#include "fecha.h"
#include "consultor.h"
#include "comprador.h"
#include "vehiculo.h"

using namespace std;

class Venta
{
    Consultor *asesor;
    Fecha *fechaVenta;
    Vehiculo *vehiculo;
    Comprador *comprador;

public:
    Venta(){
        fechaVenta = Fecha::Fecha();
        asesor = Consultor::Consultor();
    }

    Venta(int dia, int mes, int anio, string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia1,
          int mes1, int anio1)
    {
        fechaVenta = new Fecha(dia, mes, anio);
        asesor = new Consultor(nombre, apellido, numDocumento, tipoDocumento, nacionalidad, dia1, mes1, anio1);
    }

    float valorVenta()
    {
        return 1;
    }

    void print()
    {
        cout << "Datos del asesor: ";
        asesor->print();
        fechaVenta->print();
    }

    Fecha *getFechaVenta()
    {
        return fechaVenta;
    }

    void setFechaVenta(Fecha *fechaVenta)
    {
        this->fechaVenta = fechaVenta;
    }

    Vehiculo *getVehiculo() const {
        return vehiculo;
    }

    void setVehiculo(Vehiculo *vehiculo) {
        this->vehiculo = vehiculo;
    }

    Comprador *getComprador()
    {
        return comprador;
    }

    void setComprador(Comprador *comprador)
    {
        this->comprador = comprador;
    }
};
#endif // UNTITLED_VENTA_H
