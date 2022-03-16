#ifndef POO_PROJECT_VEHICULO_H
#define POO_PROJECT_VEHICULO_H

#include "Marca.h"
#include "Llanta.h"
using namespace std;

class Vehiculo
{
    float manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso;
    int modelo, potencia, torque;
    string tipo;
    Marca *marca;
    Llanta *llantas;

public:
    Vehiculo(float manejo, float frenado, float offroad, float valor, float salida, float aceleracion, float velocidad, float peso, int modelo, int potencia, int torque, string tipo, Marca *marca, Llanta *llantas)
    {
        this->manejo = manejo;
        this->frenado = frenado;
        this->offroad = offroad;
        this->valor = valor;
        this->salida = salida;
        this->aceleracion = aceleracion;
        this->velocidad = velocidad;
        this->peso = peso;
        this->modelo = modelo;
        this->potencia = potencia;
        this->torque = torque;
        this->tipo = tipo;
        this->marca = marca;
        this->llantas = llantas;
    }
    Vehiculo()
    {
        manejo = frenado = offroad = valor = salida = aceleracion = velocidad = peso = modelo = potencia = torque = 0;
        tipo = " ";
        marca = {};
        llantas = {};
    }
    float getManejo()
    {
        return manejo;
    }
    float getFrenado()
    {
        return frenado;
    }
    float getOffroad()
    {
        return offroad;
    }
    float getValor()
    {
        return valor;
    }
    float getSalida()
    {
        return salida;
    }
    float getAceleracion()
    {
        return aceleracion;
    }
    float getVelocidad()
    {
        return velocidad;
    }
    float getPeso()
    {
        return peso;
    }
    int getModelo()
    {
        return modelo;
    }
    int getPotencia()
    {
        return potencia;
    }
    int getTorque()
    {
        return torque;
    }
    string getTipo()
    {
        return tipo;
    }
    Marca *getMarca()
    {
        return marca;
    }
    Llanta *getLlantas()
    {
        return llantas;
    }
    void setManejo(float manejo)
    {
        this->manejo = manejo;
    }
    void setFrenado(float frenado)
    {
        this->frenado = frenado;
    }
    void setOffroad(float offroad)
    {
        this->offroad = offroad;
    }
    void setValor(float valor)
    {
        this->valor = valor;
    }
    void setSalida(float salida)
    {
        this->salida = salida;
    }
    void setAceleracion(float aceleracion)
    {
        this->aceleracion = aceleracion;
    }
    void setVelocidad(float velocidad)
    {
        this->velocidad = velocidad;
    }
    void setPeso(float peso)
    {
        this->peso = peso;
    }
    void setModelo(int modelo)
    {
        this->modelo = modelo;
    }
    void setPotencia(int potencia)
    {
        this->potencia = potencia;
    }
    void setTorque(int torque)
    {
        this->torque = torque;
    }
    void setTipo(string tipo)
    {
        this->tipo = tipo;
    }
    void setMarca(Marca *marca)
    {
        this->marca = marca;
    }
    void setLlantas(Llanta *llantas)
    {
        this->llantas = llantas;
    }
    virtual string claseVehiculo() = 0;
    virtual void print(ostream &out) = 0;
    virtual void set(istream &in) = 0;
    friend ostream &operator<<(ostream &out, Vehiculo *vehiculo)
    {
        out << "Manejo: " << vehiculo->manejo << endl
            << "Frenado: " << vehiculo->frenado << endl
            << "Offroad: " << vehiculo->offroad << endl
            << "Valor: " << vehiculo->valor << endl
            << "Salida: " << vehiculo->salida << endl
            << "Aceleración: " << vehiculo->aceleracion << endl
            << "Velocidad: " << vehiculo->velocidad << endl
            << "Peso: " << vehiculo->peso << endl
            << "Modelo: " << vehiculo->modelo << endl
            << "Potencia: " << vehiculo->potencia << endl
            << "Torque: " << vehiculo->torque << endl
            << "Tipo: " << vehiculo->tipo << endl
            << "Marca: " << vehiculo->marca->getNombre() << endl
            << "Llantas: " << vehiculo->llantas->getTipo() << endl;
        vehiculo->print(out);
        return out;
    }
    friend istream &operator>>(istream &in, Vehiculo *vehiculo)
    {
        cout << "Manejo: ";
        in >> vehiculo->manejo;
        cout << "Frenado: ";
        in >> vehiculo->frenado;
        cout << "Offroad: ";
        in >> vehiculo->offroad;
        cout << "Valor: ";
        in >> vehiculo->valor;
        cout << "Salida: ";
        in >> vehiculo->salida;
        cout << "Aceleración: ";
        in >> vehiculo->aceleracion;
        cout << "Velocidad: ";
        in >> vehiculo->velocidad;
        cout << "Peso: ";
        in >> vehiculo->peso;
        cout << "Modelo: ";
        in >> vehiculo->modelo;
        cout << "Potencia: ";
        in >> vehiculo->potencia;
        cout << "Torque: ";
        in >> vehiculo->torque;
        cout << "Tipo: ";
        in >> vehiculo->tipo;
        vehiculo->set(in);
        return in;
    }
};

#endif // POO_PROJECT_VEHICULO_H
