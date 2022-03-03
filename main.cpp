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
    friend ostream operator<<(ostream &out, Vehiculo *vehiculo)
    {
        out << "Manejo: " << vehiculo->manejo << endl
            << "Frenado: " << vehiculo->frenado << endl
            << "Frenado: " << vehiculo->offroad << endl
            << "Frenado: " << vehiculo->valor << endl
            << "Frenado: " << vehiculo->salida << endl
            << "Frenado: " << vehiculo->aceleracion << endl
            << "Frenado: " << vehiculo->velocidad << endl
            << "Frenado: " << vehiculo->peso << endl
            << "Frenado: " << vehiculo->modelo << endl
            << "Frenado: " << vehiculo->potencia << endl
            << "Frenado: " << vehiculo->torque << endl
            << "Frenado: " << vehiculo->tipo << endl
            << "Frenado: " << vehiculo->marca << endl
            << "Frenado: " << vehiculo->llantas << endl;
        vehiculo->print(out);
        return out;
    }
};

class Marca
{
    string nombre, pais;
    int anio_fundacion;

public:
    Marca(string nombre, string pais, int anio_fundacion)
    {
        this->nombre = nombre;
        this->pais = pais;
        this->anio_fundacion = anio_fundacion;
    }
    Marca()
    {
        nombre = pais = "";
        anio_fundacion = 0;
    }
    string getNombre()
    {
        return nombre;
    }
    string getPais()
    {
        return pais;
    }
    int getAnioFundacion()
    {
        return anio_fundacion;
    }
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    void setPais(string pais)
    {
        this->pais = pais;
    }
    void setAnioFundacion(int anio_fundacion)
    {
        this->anio_fundacion = anio_fundacion;
    }
};

class Llanta
{
public:
    Llanta()
    {
    }
};

class Motor
{
    string admision, inyeccion, encendido, escape, arbol_levas, valvulas, cilindrada, pistones, turbo, intercooler, aceite;

public:
    Motor()
    {
        admision = inyeccion = encendido = escape = arbol_levas = valvulas = cilindrada = pistones = turbo = intercooler = aceite = "";
    }
    Motor(string admision, string inyeccion, string encendido, string escape, string arbol_levas, string valvulas, string cilindrada, string pistones, string turbo, string intercooler, string aceite)
    {
        this->admision = admision;
        this->inyeccion = inyeccion;
        this->encendido = encendido;
        this->escape = escape;
        this->arbol_levas = arbol_levas;
        this->valvulas = valvulas;
        this->cilindrada = cilindrada;
        this->pistones = pistones;
        this->turbo = turbo;
        this->intercooler = intercooler;
        this->aceite = aceite;
    }
    string getAdmision()
    {
        return admision;
    }
    string getInyeccion()
    {
        return inyeccion;
    }
    string getEncendido()
    {
        return encendido;
    }
    string getEscape()
    {
        return escape;
    }
    string getArbolLevas()
    {
        return arbol_levas;
    }
    string getValvulas()
    {
        return valvulas;
    }
    string getCilindrada()
    {
        return cilindrada;
    }
    string getPistones()
    {
        return pistones;
    }
    string getTurbo()
    {
        return turbo;
    }
    string getIntercooler()
    {
        return intercooler;
    }
    string getAceite()
    {
        return aceite;
    }
};

class Motorizados
{
    Motor *motor;
};

int main()
{
    cout << "Hello World" << endl;
    return 0;
}