#include <iostream>
#include "vector"
#include "vehiculo.h"
#include "Llanta.h"
#include "engine.h"
#include "Motorizados.h"
#include "Marca.h"
#include "NoMotorizado.h"
#include "Bicicleta.h"
#include "TipoConduccion.h"
#include "Carro.h"
#include "Moto.h"
#include "Camion.h"
#include "Transmision.h"
#include "TransmisionCarro.h"
#include "TransmisionMoto.h"
#include "PlataformaManejo.h"
#include "PlataformaManejoCarro.h"
#include "PlataformaManejoMoto.h"

using namespace std;

int main()
{
    int op, op2, rep, rep2, i;
    vector<Motor *> motor;
    vector<Vehiculo *> vehiculo;
    vector<Llanta *> llanta;
    vector<Marca *> marca;
    vector<Bicicleta *> bicicleta;
    vector<Carro *> carro;
    rep = rep2 = 1;
    do
    {
        cout << "1. Marcas\n"
             << ">> ";
        cin >> op;

        switch (op)
        {
        case 1:
            do
            {
                cout << "1. Crear Marca\n"
                     << "2. Mostrar Marcas\n"
                     << "3. Borrar Marca\n"
                     << "4. Regresar\n"
                     << ">> ";
                cin >> op2;
                switch (op2)
                {
                case 1:
                    marca.push_back(new Marca());
                    cin >> marca.back();
                    break;
                case 2:
                    op = 0;
                    i = 0;
                    for (Marca *marcas : marca)
                    {
                        i++;
                        cout << i << ". " << marcas->getNombre() << endl;
                    }
                    cin >> op;
                    cout << marca[op - 1];
                    break;
                case 3:
                    op = 0;
                    i = 0;
                    for (Marca *marcas : marca)
                    {
                        i++;
                        cout << i << ". " << marcas->getNombre() << endl;
                    }
                    cin >> op;
                    marca[op - 1] = Marca();
                    break;
                case 4:
                    rep = 0;
                default:
                    break;
                }
            } while (rep2 == 1);

            break;
        case 9:
            rep = 0;
            break;
        default:
            break;
        }
    } while (rep == 1);
    return 0;
}