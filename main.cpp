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
    void setAdmision(string admision)
    {
        this->admision = admision;
    }
    void setInyeccion(string inyeccion)
    {
        this->inyeccion = inyeccion;
    }
    void setEncendido(string encendido)
    {
        this->encendido = encendido;
    }
    void setEscape(string escape)
    {
        this->escape = escape;
    }
    void setArbolLevas(string arbol_levas)
    {
        this->arbol_levas = arbol_levas;
    }
    void setValvulas(string valvulas)
    {
        this->valvulas = valvulas;
    }
    void setCilindrada(string cilindrada)
    {
        this->cilindrada = cilindrada;
    }
    void setPistones(string pistones)
    {
        this->pistones = pistones;
    }
    void setTurbo(string turbo)
    {
        this->turbo = turbo;
    }
    void setIntercooler(string intercooler)
    {
        this->intercooler = intercooler;
    }
    void setAceite(string aceite)
    {
        this->aceite = aceite;
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
            << "Marca: " << vehiculo->marca << endl
            << "Llantas: " << vehiculo->llantas << endl;
        vehiculo->print(out);
        return out;
    }
};

class NoMotorizado : public Vehiculo
{
public:
    NoMotorizado() : Vehiculo()
    {
    }
    NoMotorizado(float manejo, float frenado, float offroad, float valor, float salida, float aceleracion, float velocidad, float peso, int modelo, int potencia, int torque, string tipo, Marca *marca, Llanta *llantas) : Vehiculo(manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso, modelo, potencia, torque, tipo, marca, llantas)
    {
    }
    string claseVehiculo() override
    {
        return "No Motorizado";
    }
    virtual string TipoVehiculo() = 0;
};

class Bicicleta : public NoMotorizado
{
    string sillin, marco;

public:
    Bicicleta() : NoMotorizado()
    {
        sillin = "";
        marco = "";
    }
    Bicicleta(float manejo, float frenado, float offroad, float valor, float salida, float aceleracion, float velocidad, float peso, int modelo, int potencia, int torque, string tipo, Marca *marca, Llanta *llantas, string sillin, string marco) : NoMotorizado(manejo, frenado, offroad, valor, salida, aceleracion, velocidad, peso, modelo, potencia, torque, tipo, marca, llantas)
    {
        this->sillin = sillin;
        this->marco = marco;
    }
    string getSillin()
    {
        return sillin;
    }
    string getMarco()
    {
        return marco;
    }
    void setSillin(string sillin)
    {
        this->sillin = sillin;
    }
    void setMarco(string marco)
    {
        this->marco = marco;
    }
};

class PlataformaManejo
{
    string frenos, kitAmortiguadores, reduccionPeso;

public:
    PlataformaManejo()
    {
        frenos = kitAmortiguadores = reduccionPeso = "";
    }
    PlataformaManejo(string frenos, string kitAmortiguadores, string reduccionPeso)
    {
        this->frenos = frenos;
        this->kitAmortiguadores = kitAmortiguadores;
        this->reduccionPeso = reduccionPeso;
    }
    string getFrenos()
    {
        return frenos;
    }
    string getKitAmortiguadores()
    {
        return kitAmortiguadores;
    }

    string getReduccionPeso()
    {
        return reduccionPeso;
    }

    void setFrenos(string frenos)
    {
        this->frenos = frenos;
    }
    void setKitAmortiguadores(string kitAmortiguadores)
    {
        this->kitAmortiguadores = kitAmortiguadores;
    }

    void setReduccionPeso(string reduccionPeso)
    {
        this->reduccionPeso = reduccionPeso;
    }

    virtual string TipoPlataformaManejo() = 0;
};

class PlataformaManejoCarro : public PlataformaManejo
{
    string barraEstabilizadora, refuerzoChasis, jaulaAntivuelco;

public:
    PlataformaManejoCarro() : PlataformaManejo()
    {
        barraEstabilizadora = refuerzoChasis = jaulaAntivuelco = "";
    }
    PlataformaManejoCarro(string frenos, string kitAmortiguadores, string reduccionPeso, string barraEstabilizadora, string refuerzoChasis, string jaulaAntivuelco) : PlataformaManejo(frenos, kitAmortiguadores, reduccionPeso)
    {
        this->barraEstabilizadora = barraEstabilizadora;
        this->refuerzoChasis = refuerzoChasis;
        this->jaulaAntivuelco = jaulaAntivuelco;
    }
    string getBarraEstabilizadora()
    {
        return barraEstabilizadora;
    }
    string getRefuerzoChasis()
    {
        return refuerzoChasis;
    }
    string getJaulaAntivuelco()
    {
        return jaulaAntivuelco;
    }
    void setBarraEstabilizadora(string barraEstabilizadora)
    {
        this->barraEstabilizadora = barraEstabilizadora;
    }
    void setRefuerzoChasis(string refuerzoChasis)
    {
        this->refuerzoChasis = refuerzoChasis;
    }
    void setJaulaAntivuelco(string jaulaAntivuelco)
    {
        this->jaulaAntivuelco = jaulaAntivuelco;
    }
    string TipoPlataformaManejo() override
    {
        return "Carro";
    }
};
class PlataformaManejoMoto : public PlataformaManejo
{
public:
    PlataformaManejoMoto() : PlataformaManejo()
    {
    }
    PlataformaManejoMoto(string frenos, string kitAmortiguadores, string reduccionPeso) : PlataformaManejo(frenos, kitAmortiguadores, reduccionPeso)
    {
    }
    string TipoPlataformaManejo() override
    {
        return "Moto";
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
        tipoTransmision = "";
        clutch = false;
    }
    Transmision(string tipoTransmision, bool clutch)
    {
        this->tipoTransmision = tipoTransmision;
        this->clutch = clutch;
    }
    string getTipoTransmision()
    {
        return tipoTransmision;
    }

    bool getClutch()
    {
        return clutch;
    }
    void setTipoTransmision(string tipoTransmision)
    {
        this->tipoTransmision = tipoTransmision;
    }

    void setClutch(bool clutch)
    {
        this->clutch = clutch;
    }
    virtual void print(ostream &out) = 0;
    friend ostream &operator<<(ostream &out, Transmision *transmision)
    {
        out << "Tipo de Transmisión: " << transmision->tipoTransmision << endl
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
    TransmisionMoto(string tipoTransmision, bool clutch) : Transmision(tipoTransmision, clutch)
    {
    }
    void print(ostream &out)
    {
        out << "Automatico: " << Automatico();
    }
};

class TransmisionCarro : public Transmision
{
    string diferencial, lineaTransmision;

public:
    TransmisionCarro()
    {
        diferencial = lineaTransmision = "";
    }
    TransmisionCarro(string tipoTransmision, bool clutch, string diferencial, string lineaTransmision) : Transmision(tipoTransmision, clutch)
    {
        this->diferencial = diferencial;
        this->lineaTransmision = lineaTransmision;
    }
    void setLineaTransmision(string lineaTransmision)
    {
        this->lineaTransmision = lineaTransmision;
    }
    string getLineaTransmision()
    {
        return lineaTransmision;
    }
    void print(ostream &out)
    {
        out << "Diferencial: " << diferencial << endl
            << "Linea de Transmisión: " << lineaTransmision << "Automático: " << Automatico();
    }
};
class Motorizados : public Vehiculo
{
    Motor *motor;
    PlataformaManejo *plataformaManejo;
    Transmision *transmision;

public:
    Motorizados() : Vehiculo()
    {
        motor = new Motor();
        plataformaManejo = {};
        transmision = {};
    }
    Motorizados(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision)
    {
    }
    Motor *getMotor()
    {
        return motor;
    }
    PlataformaManejo *getPlataformaManejo()
    {
        return plataformaManejo;
    }
    Transmision *getTransmision()
    {
        return transmision;
    }
    void setMotor(Motor *motor)
    {
        this->motor = motor;
    }
    void setPlataformaManejo(PlataformaManejo *plataformaManejo)
    {
        this->plataformaManejo = plataformaManejo;
    }
    void setTransmision(Transmision *transmision)
    {
        this->transmision = transmision;
    }
    string claseVehiculo() override
    {
        return "Motorizado";
    }
    virtual string TipoVehiculo() = 0;
};

class Carro : public Motorizados
{
    int cantidadPuestos;

public:
    Carro() : Motorizados()
    {
        cantidadPuestos = 0;
    }
    Carro(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision, int cantidadPuestos) : Motorizados(motor, plataformaManejo, transmision)
    {
        this->cantidadPuestos = cantidadPuestos;
    }
    int getCantidadPuestos()
    {
        return cantidadPuestos;
    }
    void setCantidadPuestos()
    {
        this->cantidadPuestos = cantidadPuestos;
    }
    string TipoVehiculo() override
    {
        return "Carro";
    }
};
class Moto : public Motorizados
{
    string manillar;

public:
    Moto() : Motorizados()
    {
        manillar = "";
    }
    Moto(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision, string manillar) : Motorizados(motor, plataformaManejo, transmision)
    {
        this->manillar = manillar;
    }
    string getManillar()
    {
        return manillar;
    }
    void setManillar()
    {
        this->manillar = manillar;
    }
    string TipoVehiculo() override
    {
        return "Moto";
    }
};
class Camion : public Motorizados
{
    float capacidadCarga;

public:
    Camion() : Motorizados()
    {
        capacidadCarga = 0;
    }
    Camion(Motor *motor, PlataformaManejo *plataformaManejo, Transmision *transmision, float capacidadCarga) : Motorizados(motor, plataformaManejo, transmision)
    {
        this->capacidadCarga = capacidadCarga;
    }
    float getCapacidadCarga()
    {
        return capacidadCarga;
    }
    void setCapacidadCarga()
    {
        this->capacidadCarga = capacidadCarga;
    }
    string TipoVehiculo() override
    {
        return "Camion";
    }
};

int main()
{
    cout << "Hello World" << endl;
    return 0;
}