#include <iostream>
#include "vector"

using namespace std;

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
    string rin, trazado_llanta;
    float diametro_rin;

public:
    Llanta()
    {
        rin = trazado_llanta = "";
        diametro_rin = 0;
    }
    Llanta(string rin, string trazado_llanta, float diametro_rin)
    {
        this->rin = rin;
        this->trazado_llanta = trazado_llanta;
        this->diametro_rin = diametro_rin;
    }
    string getRin()
    {
        return rin;
    }
    string getTrazadoLlanta()
    {
        return trazado_llanta;
    }
    float getDiametroRin()
    {
        return diametro_rin;
    }
    void setRin(string rin)
    {
        this->rin = rin;
    }
    void setTrazadoLlanta(string trazado_llanta)
    {
        this->trazado_llanta = trazado_llanta;
    }
    void setDiametroRin(float diametro_rin)
    {
        this->diametro_rin = diametro_rin;
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
    friend ostream &operator<<(ostream &out, Vehiculo *vehiculo)
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

class PlataformaManejo
{
    string frenos, kitAmortiguadores, barraEstabilizadora, refuerzoChasis, reduccionPeso, jaulaAntivuelco;

public:
    PlataformaManejo()
    {
        frenos = kitAmortiguadores = barraEstabilizadora = refuerzoChasis = reduccionPeso = jaulaAntivuelco = "";
    }
    PlataformaManejo(string frenos, string kitAmortiguadores, string barraEstabilizadora, string refuerzoChasis, string reduccionPeso, string jaulaAntivuelco)
    {
        this->frenos = frenos;
        this->kitAmortiguadores = kitAmortiguadores;
        this->barraEstabilizadora = barraEstabilizadora;
        this->refuerzoChasis = refuerzoChasis;
        this->reduccionPeso = reduccionPeso;
        this->jaulaAntivuelco = jaulaAntivuelco;
    }
    string getFrenos()
    {
        return frenos;
    }
    string getKitAmortiguadores()
    {
        return kitAmortiguadores;
    }
    string getBarraEstabilizadora()
    {
        return barraEstabilizadora;
    }
    string getRefuerzoChasis()
    {
        return refuerzoChasis;
    }
    string getReduccionPeso()
    {
        return reduccionPeso;
    }
    string getJaulaAntivuelco()
    {
        return jaulaAntivuelco;
    }
    void setFrenos(string frenos)
    {
        this->frenos = frenos;
    }
    void setKitAmortiguadores(string kitAmortiguadores)
    {
        this->kitAmortiguadores = kitAmortiguadores;
    }
    void setBarraEstabilizadora(string barraEstabilizadora)
    {
        this->barraEstabilizadora = barraEstabilizadora;
    }
    void setRefuerzoChasis(string refuerzoChasis)
    {
        this->refuerzoChasis = refuerzoChasis;
    }
    void setReduccionPeso(string reduccionPeso)
    {
        this->reduccionPeso = reduccionPeso;
    }
    void setJaulaAntivuelco(string jaulaAntivuelco)
    {
        this->jaulaAntivuelco = jaulaAntivuelco;
    }
};

class TipoConduccion
{
protected:
    bool clutch;

public:
    virtual bool Automatico() = 0;
};
class Transmision : public TipoConduccion
{
    string tipoTransmision, lineaTransmision;

public:
    Transmision()
    {
        tipoTransmision = lineaTransmision = "";
        clutch = false;
    }
    Transmision(string tipoTransmision, string lineaTransmision, bool clutch)
    {
        this->tipoTransmision = tipoTransmision;
        this->lineaTransmision = lineaTransmision;
        this->clutch = clutch;
    }
    string getTipoTransmision()
    {
        return tipoTransmision;
    }
    string getLineaTransmision()
    {
        return lineaTransmision;
    }
    bool getClutch()
    {
        return clutch;
    }
    void setTipoTransmision(string tipoTransmision)
    {
        this->tipoTransmision = tipoTransmision;
    }
    void setLineaTransmision(string lineaTransmision)
    {
        this->lineaTransmision = lineaTransmision;
    }
    void setClutch(bool clutch)
    {
        this->clutch = clutch;
    }
    virtual void print(ostream &out) = 0;
    friend ostream &operator<<(ostream &out, Transmision *transmision)
    {
        out << "Tipo de Transmisión: " << transmision->tipoTransmision << endl
            << "Linea de Transmisión: " << transmision->lineaTransmision << endl
            << "Clutch: " << (transmision->clutch ? "Sí" : "No") << endl;
        transmision->print(out);
        return out;
    }
};

class TransmisionMoto : public Transmision
{
public:
    TransmisionMoto() : Transmision()
    {
    }
    TransmisionMoto(string tipoTransmision, string lineaTransmision, bool clutch) : Transmision(tipoTransmision, lineaTransmision, clutch)
    {
    }
};

class TransmisionCarro : public Transmision
{
};
class Motorizados : public Vehiculo
{
    Motor *motor;
    PlataformaManejo *plataformaManejo;
    Transmision *transmision;
};

int main()
{
    cout << "Hello World" << endl;
    return 0;
}