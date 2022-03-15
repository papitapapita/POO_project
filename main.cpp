#include <iostream>
#include "vector"
#include "persona.h"
#include "venta.h"
#include "consultor.h"
#include "fecha.h"
#include "comprador.h"
#include "cuenta.h"
#include "documento.h"
#include "nombre.h"
#include "tipocliente.h"
#include "vendedor.h"
#include "vehiculo.h"
#include "Llanta.h"
#include "rin.h"
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
    vector<Llanta *> llanta;
    vector<Rin *> rin;
    vector<Motor *> motor;
    vector<Vehiculo *> vehiculo;
    vector<Marca *> marca;
    vector<Bicicleta *> bicicleta;
    vector<Carro *> carro;
    rep = rep2 = 1;
    do
    {
        cout << "1. Marcas\n"
             << "2. Llantas\n"
             << "9. Salir\n"
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
                    *marca[op - 1] = Marca();
                    break;
                case 4:
                    rep2 = 0;
                default:
                    break;
                }
            } while (rep2 == 1);

            break;
        case 2:
            rep2 = 1;
            do
            {
                cout << "1. Crear Llantas\n"
                     << "2. Mostrar Tipos Llantas\n"
                     << "3. Borrar Llantas\n"
                     << "4. Regresar\n"
                     << ">> ";
                cin >> op2;
                switch (op2)
                {
                case 1:
                    i = 1;
                    llanta.push_back(new Llanta());
                    cin >> llanta.back();

                    cout << "SELECCIÓN DE RIN: \n"
                         << "\t1. Crear nuevo rin " << endl;
                    for (Rin *rines : rin)
                    {
                        i++;
                        cout << "\t" << i << ". " << rines->getRin() << endl;
                    }
                    cout << "\t>> ";
                    cin >> op;
                    if (op == 1)
                    {
                        rin.push_back(new Rin());
                        cin >> rin.back();
                        llanta.back()->setRin(rin.back());
                    }
                    else
                    {
                        llanta.back()->setRin(rin[op - 1]);
                    }
                    break;
                case 2:
                    op = 0;
                    i = 0;
                    for (Llanta *llantas : llanta)
                    {
                        i++;
                        cout << i << ". " << llantas->getTipo() << endl;
                    }
                    cin >> op;
                    cout << llanta[op - 1];
                    break;
                case 3:
                    op = 0;
                    i = 0;
                    for (Llanta *llantas : llanta)
                    {
                        i++;
                        cout << i << ". " << llantas->getTipo() << endl;
                    }
                    cin >> op;
                    *llanta[op - 1] = Llanta();
                    break;
                case 4:
                    rep2 = 0;
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