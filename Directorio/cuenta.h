//
// Created by cras9 on 10/03/2022.
//

#ifndef UNTITLED_CUENTA_H
#define UNTITLED_CUENTA_H

#include <string>

using namespace std;

class Cuenta{
    int numCuenta;
    float saldo;
    string banco;

public:
    Cuenta(){
        numCuenta = 0;
        saldo = 0;
        banco = " ";
    }

    Cuenta(int numCuenta, float saldo, string banco){
        this->numCuenta = numCuenta;
        this->saldo = saldo;
        this->banco = banco;
    }

    void print(){
        cout << "Banco: " << getBanco();
        cout << "N de cuenta: " << getNumCuenta();
        cout << "Saldo: " << getSaldo();
    }

    int getNumCuenta(){
        return numCuenta;
    }

    void setNumCuenta(int numCuenta) {
        this->numCuenta = numCuenta;
    }

    float getSaldo(){
        return saldo;
    }

    void setSaldo(float saldo) {
        this->saldo = saldo;
    }

    string getBanco(){
        return banco;
    }

    void setBanco(const string banco) {
        this->banco = banco;
    }


};
#endif //UNTITLED_CUENTA_H
