//
// Created by cras9 on 11/03/2022.
//

#ifndef UNTITLED_VENDEDOR_H
#define UNTITLED_VENDEDOR_H
using namespace std;

class Vendedor: public Tipocliente{
    Cuenta *cuenta;

public:
    Vendedor(string nombre, string apellido, int numDocumento, string tipoDocumento, string nacionalidad, int dia,
             int mes, int año, int numCuenta, float saldo, string banco):
             Tipocliente(nombre, apellido, numDocumento,
                         tipoDocumento, nacionalidad, dia, mes, año){

        cuenta = new Cuenta(numCuenta, saldo, banco);
    }

    int getEdad() override{
        return 2022-fechaNacimiento->getAño();
    }

    string tipoCliente() override{
        return "Vendedor";
    }

    void print(ostream &out){
        cout << "Edad: " << getEdad();
        cout << tipoCliente();
        cuenta->print();
    }

    Cuenta getCuenta(){
        return *cuenta;
    }

    void setCuenta(Cuenta *cuenta) {
        this->cuenta = cuenta;
    }

};
#endif //UNTITLED_VENDEDOR_H
