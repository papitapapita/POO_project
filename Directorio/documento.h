//
// Created by cras9 on 9/03/2022.
//

#ifndef UNTITLED_DOCUMENTO_H
#define UNTITLED_DOCUMENTO_H
using namespace std;
class Documento{
    int numDocumento;
    string tipoDocumento, nacionalidad;

public:
    Documento(){
        numDocumento = 0;
        tipoDocumento = nacionalidad = " ";
    }

    Documento(int numDocumento, string tipoDocumento, string nacionalidad){
        this->numDocumento = numDocumento;
        this->tipoDocumento = tipoDocumento;
        this->nacionalidad = nacionalidad;
    }

    void print(){
        cout << "Tipo de documento: " << getTipoDocumento();
        cout << "Numero: " << getNumDocumento();
        cout << "Nacionalidad: " << getNacionalidad();
    }
    int getNumDocumento(){
        return numDocumento;
    }

    void setNumDocumento(int numDocumento) {
        this->numDocumento = numDocumento;
    }

    string getTipoDocumento(){
        return tipoDocumento;
    }

    void setTipoDocumento(string tipoDocumento) {
        this->tipoDocumento = tipoDocumento;
    }

    string &getNacionalidad(){
        return nacionalidad;
    }

    void setNacionalidad(string nacionalidad) {
        this->nacionalidad = nacionalidad;
    }
};
#endif //UNTITLED_DOCUMENTO_H
