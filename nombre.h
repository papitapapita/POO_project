//
// Created by cras9 on 9/03/2022.
//

#ifndef POO_PROJECT_NOMBRE_H
#define POO_PROJECT_NOMBRE_H
class Nombre
{
    string nombre, apellido;

public:
    Nombre()
    {
        nombre = apellido = " ";
    }

    Nombre(string nombre, string apellido)
    {
        this->nombre = nombre;
        this->apellido = apellido;
    }

    void print()
    {
        cout << getNombre() << " " << getApellido();
    }

    string getNombre()
    {
        return nombre;
    }

    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    void setApellido(string apellido)
    {
        this->apellido = apellido;
    }

    friend istream &operator>>(istream &in, Nombre *nombre)
    {
        cout << "Nombre: ";
        in >> nombre->nombre;
        cout << "Apellido: ";
        in >> nombre->apellido;
        return in;
    }
};

#endif // POO_PROJECT_NOMBRE_H
