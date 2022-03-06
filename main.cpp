#include <iostream>
#include "vector"

using namespace std;

class Vehiculo
{
    float manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso;
    int modelo, potencia, torque;
    string tipo;
    Marca *marca;
    Llanta *llantas;

public:
    Vehiculo()
    {
        this->manejo = 0;
        this->frenado = 0;
        this->offroad = 0;
        this->valor = 0;
        this->salida = 0;
        this->aceleracion = 0;
        this->velocidad = 0;
        this->peso = 0;
        this->modelo = 0;
        this->potencia = 0;
        this->torque = 0;
        this->tipo = "";
        this->marca = Marca();
        this->llantas = Llanta();
    }
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
        // Complete constructors of the following classes
        this->marca = Marca();
        this->llantas = llantas;
    }
};

class Marca
{
    string nombre, pais;
    int anio_fundacion;

public:
    Marca()
    {
        nombre = pais = "";
        anio_fundacion = 0;
    }
    Marca(string nombre, string pais, int anio_fundacion)
    {
        this->nombre = nombre;
        this->pais = pais;
        this->anio_fundacion = anio_fundacion;
    }
};

class Llanta
{
};

int main()
{
    cout << "Hello World" << endl;
    return 0;
}