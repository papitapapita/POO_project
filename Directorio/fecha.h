//
// Created by cras9 on 9/03/2022.
//

#ifndef UNTITLED_FECHA_H
#define UNTITLED_FECHA_H

class Fecha{
    int dia, mes, año;

public:
    Fecha(){
        dia = mes = año = 0;
    }
    Fecha(int dia, int mes, int año) {

        this->dia = dia;
        this->mes = mes;
        this->año = año;
    }

    void print(){
        cout << getDia() << "/" << getMes() << "/" << getAño();
    }

    int getDia(){
        return dia;
    }

    void setDia(int dia) {
        this->dia = dia;
    }

    int getMes(){
        return mes;
    }

    void setMes(int mes) {
        this->mes = mes;
    }

    int getAño(){
        return año;
    }

    void setAño(int año) {
        this->año = año;
    }

};
#endif //UNTITLED_FECHA_H
