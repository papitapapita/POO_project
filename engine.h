#ifndef POO_PROJECT_ENGINE_H
#define POO_PROJECT_ENGINE_H

using namespace std;

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
    friend ostream &operator<<(ostream &out, Motor *motor)
    {
        out << "Admision: " << motor->admision << endl
            << "cilindrada: " << motor->cilindrada << endl
            << "Inyeccion: " << motor->inyeccion << endl
            << "Encendido: " << motor->encendido << endl
            << "Escape: " << motor->escape << endl
            << "arbol_levas: " << motor->arbol_levas << endl
            << "valvulas: " << motor->valvulas << endl
            << "pistones: " << motor->pistones << endl
            << "turbo: " << motor->turbo << endl
            << "intercooler: " << motor->intercooler << endl
            << "aceite: " << motor->aceite << endl;
        return out;
    }
    friend istream &operator>>(istream &in, Motor *motor)
    {
        cout << "Admision: ";
        in >> motor->admision;
        cout << "cilindrada: ";
        in >> motor->cilindrada;
        cout << "Inyeccion: ";
        in >> motor->inyeccion;
        cout << "Encendido: ";
        in >> motor->encendido;
        cout << "Escape: ";
        in >> motor->escape;
        cout << "arbol_levas: ";
        in >> motor->arbol_levas;
        cout << "valvulas: ";
        in >> motor->valvulas;
        cout << "pistones: ";
        in >> motor->pistones;
        cout << "turbo: ";
        in >> motor->turbo;
        cout << "intercooler: ";
        in >> motor->intercooler;
        cout << "aceite: ";
        in >> motor->aceite;
        return in;
    }
};
#endif // POO_PROJECT_MOTOR_H
