//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_TIPOCONDUCCION_H
#define POO_PROJECT_TIPOCONDUCCION_H
using namespace std;

class TipoConduccion
{
protected:
    bool clutch;

public:
    virtual string automatico() = 0;
};

#endif // POO_PROJECT_TIPOCONDUCCION_H
