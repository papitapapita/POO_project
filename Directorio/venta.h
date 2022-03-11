//
// Created by cras9 on 9/03/2022.
//

#ifndef UNTITLED_VENTA_H
#define UNTITLED_VENTA_H
#include "asesor.h"
#include "fecha.h"
#include "comprador.h"
#include "Asesoria.h"

using namespace std;



class Venta{
    Fecha *fechaVenta;
    //Vehiculo *vehiculo;
    Comprador *comprador;
    Se

public:
    Venta(int dia, int mes, int año, string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia1,
          int mes1, int año1, int numCuenta, float saldo, string banco) {
        fechaVenta = new Fecha(dia, mes, año);
        comprador = new Comprador(nombre, apellido, numDocumento,
                                  tipoDocumento, nacionalidad,
                                  dia1, mes1, año1, numCuenta, saldo, banco);
    }

    float valorVenta(){
        return 1;
    }

    void print(){
        cout<< "Datos del comprador: ";
        comprador->print();
        cout << "Datos del asesor: ";

        fechaVenta->print();
    }

    Fecha *getFechaVenta(){
        return fechaVenta;
    }

    void setFechaVenta(Fecha *fechaVenta) {
        this->fechaVenta = fechaVenta;
    }

   // Vehiculo *getVehiculo() const {
   //     return vehiculo;
  //  }

  //  void setVehiculo(Vehiculo *vehiculo) {
    //    this->vehiculo = vehiculo;
    //}

    Comprador *getComprador(){
        return comprador;
    }

    void setComprador(Comprador *comprador) {
        this->comprador = comprador;
    }

};
#endif //UNTITLED_VENTA_H
