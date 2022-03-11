//
// Created by cras9 on 9/03/2022.
//

#ifndef UNTITLED_NOMBRE_H
#define UNTITLED_NOMBRE_H
class Nombre {
    string nombre, apellido;

public:
    Nombre(){
        nombre = apellido = " ";
    }

    Nombre(string nombre, string apellido){
        this->nombre = nombre;
        this->apellido = apellido;
    }

    void print(){
       cout << getNombre() << " " << getApellido();
    }

    string getNombre(){
        return nombre;
    }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    string getApellido(){
        return apellido;
    }

    void setApellido(string apellido) {
        this->apellido = apellido;
    }

};

#endif //UNTITLED_NOMBRE_H
