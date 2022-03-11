//
// Created by cras9 on 11/03/2022.
//

#ifndef UNTITLED_ASESOR_H
#define UNTITLED_ASESOR_H
#include <ostream>
#include <string>
#include "persona.h"
#include "venta.h"

using namespace std;
class Seller: public Persona{

public:
    Seller(string nombre, string apellido, int numDocumento, string tipoDocumento,
           string nacionalidad, int dia, int mes, int año):
            Persona(nombre, apellido, numDocumento, tipoDocumento,
                    nacionalidad, dia, mes, año) {
    }

    int getEdad() override{
        return 2022-fechaNacimiento->getAño();
    }

    void print(){
        showAtributes();
    }


};
#endif //UNTITLED_ASESOR_H
