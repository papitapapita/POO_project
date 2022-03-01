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
    Vehiculo(float manejo, float frenado, float offroad, float valor, float salida, float aceleracion, float velocidad, float peso, int modelo, int potencia, int torque, string tipo, Marca *marca, Llanta *llantas)
    {
        manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso
    }
};

class Marca
{
};

class Llanta
{
};

int main()
{
    cout << "Hello World" << endl;
    return 0;
}