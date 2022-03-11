//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_MOTOR_H
#define POO_PROJECT_MOTOR_H
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
    friend ostream &operator<<(ostream &out, Marca *marca)
    {
        out << "Nombre: " << marca->nombre << endl
            << "País: " << marca->pais << endl
            << "Año Fundación: " << marca->anio_fundacion << endl;
        return out;
    }
    friend istream &operator>>(istream &in, Marca *marca)
    {
        cout << "Nombre: ";
        in >> marca->nombre;
        cout << "País: ";
        in >> marca->pais;
        cout << "Año Fundación: ";
        in >> marca->anio_fundacion;
        return in;
    }
};
#endif // POO_PROJECT_MOTOR_H
