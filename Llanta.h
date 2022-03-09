//
// Created by klmxl on 9/03/2022.
//

#ifndef POO_PROJECT_LLANTA_H
#define POO_PROJECT_LLANTA_H
using namespace std;

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
#endif //POO_PROJECT_LLANTA_H
