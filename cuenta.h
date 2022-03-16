//
// Created by cras9 on 10/03/2022.
//

#ifndef POO_PROJECT_CUENTA_H
#define POO_PROJECT_CUENTA_H

#include <string>

using namespace std;

class Cuenta
{
    int numCuenta;
    float saldo;
    string banco;

public:
    Cuenta()
    {
        numCuenta = 0;
        saldo = 0;
        banco = " ";
    }

    Cuenta(int numCuenta, float saldo, string banco)
    {
        this->numCuenta = numCuenta;
        this->saldo = saldo;
        this->banco = banco;
    }

    void print()
    {
        cout << "Banco: " << getBanco();
        cout << "N de cuenta: " << getNumCuenta();
        cout << "Saldo: " << getSaldo();
    }

    int getNumCuenta()
    {
        return numCuenta;
    }

    void setNumCuenta(int numCuenta)
    {
        this->numCuenta = numCuenta;
    }

    float getSaldo()
    {
        return saldo;
    }

    void setSaldo(float saldo)
    {
        this->saldo = saldo;
    }

    string getBanco()
    {
        return banco;
    }

    void setBanco(const string banco)
    {
        this->banco = banco;
    }

    friend istream &operator>>(istream &in, Cuenta *cuenta)
    {
        cout << "Banco: ";
        in >> cuenta->banco;
        cout << "N de cuenta: ";
        in >> cuenta->numCuenta;
        cout << "Saldo: ";
        in >> cuenta->saldo;
        return in;
    }
};
#endif // POO_PROJECT_CUENTA_H
