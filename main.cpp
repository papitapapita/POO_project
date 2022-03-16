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
    vector<Llanta *> llanta;
    vector<Rin *> rin;
    vector<PlataformaManejo *> plataformaManejo;
    vector<Transmision *> transmision;
    vector<Motor *> motor;
    vector<Motorizados *> motorizado;
    vector<NoMotorizado *> noMotorizado;
    vector<Marca *> marca;
    int op[6];
    int rep[6];
    int temp[10];
    int i = 1;
    int i2 = 1;
    string result;
    rep[0] = 1;
    do
    {
        cout << "1. Vehiculos\n"
             << "2. Usuarios\n"
             << "3. Salir\n"
             << ">> ";
        cin >> op[0];
        switch (op[0])
        {
        case 1:
            rep[1] = 1;
            do
            {
                cout << "1. Marcas\n"
                     << "2. Llantas\n"
                     << "3. Vehiculos\n"
                     << "4. Regresar\n"
                     << ">> ";
                cin >> op[1];

                switch (op[1])
                {
                case 1:
                    do
                    {
                        cout << "1. Crear Marca\n"
                             << "2. Mostrar Marcas\n"
                             << "3. Borrar Marca\n"
                             << "4. Regresar\n"
                             << ">> ";
                        cin >> op[2];
                        switch (op[2])
                        {
                        case 1:
                            marca.push_back(new Marca());
                            cin >> marca.back();
                            break;
                        case 2:
                            i = 0;
                            for (Marca *marcas : marca)
                            {
                                i++;
                                cout << i << ". " << marcas->getNombre() << endl;
                            }
                            cin >> op[1];
                            cout << marca[op[1] - 1];
                            break;
                        case 3:
                            op[1] = 0;
                            i = 0;
                            for (Marca *marcas : marca)
                            {
                                i++;
                                cout << i << ". " << marcas->getNombre() << endl;
                            }
                            cin >> op[1];
                            *marca[op[1] - 1] = Marca();
                            break;
                        case 4:
                            rep[2] = 0;
                        default:
                            break;
                        }
                    } while (rep[2] == 1);

                    break;
                case 2:
                    rep[2] = 1;
                    do
                    {
                        cout << "1. Crear Llantas\n"
                             << "2. Mostrar Tipos Llantas\n"
                             << "3. Borrar Llantas\n"
                             << "4. Regresar\n"
                             << ">> ";
                        cin >> op[2];
                        switch (op[2])
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
                            cin >> op[1];
                            if (op[1] == 1)
                            {
                                rin.push_back(new Rin());
                                cin >> rin.back();
                                llanta.back()->setRin(rin.back());
                            }
                            else
                            {
                                llanta.back()->setRin(rin[op[1] - 1]);
                            }
                            break;
                        case 2:
                            op[1] = 0;
                            i = 0;
                            for (Llanta *llantas : llanta)
                            {
                                i++;
                                cout << i << ". " << llantas->getTipo() << endl;
                            }
                            cin >> op[1];
                            cout << llanta[op[1] - 1];
                            break;
                        case 3:
                            op[1] = 0;
                            i = 0;
                            for (Llanta *llantas : llanta)
                            {
                                i++;
                                cout << i << ". " << llantas->getTipo() << endl;
                            }
                            cin >> op[1];
                            *llanta[op[1] - 1] = Llanta();
                            break;
                        case 4:
                            rep[2] = 0;
                        default:
                            break;
                        }
                    } while (rep[2] == 1);
                    break;
                case 3:
                    rep[2] = 1;
                    do
                    {
                        cout << "1. Motorizado\n"
                             << "2. No Motorizado\n"
                             << "3. Regresar\n"
                             << ">> ";
                        cin >> op[2];
                        switch (op[2])
                        {
                        case 1:
                            rep[3] = 1;
                            do
                            {

                                cout << "1. Partes del Vehiculo\n"
                                     << "2. Tipos de vehiculos\n"
                                     << "3. Regresar\n"
                                     << ">> ";
                                cin >> op[3];
                                switch (op[3])
                                {
                                case 1:
                                    rep[4] = 1;
                                    do
                                    {

                                        cout << "1. Motor\n"
                                             << "2. Plataforma y Manejo\n"
                                             << "3. Transmision\n"
                                             << "4. Regresar\n"
                                             << ">> ";
                                        cin >> op[4];
                                        switch (op[4])
                                        {
                                        case 1:
                                            rep[5] = 1;
                                            do
                                            {
                                                cout << "1. Crear Motor\n"
                                                     << "2. Ver Motores\n"
                                                     << "3. Borrar Motor\n"
                                                     << "4. Regresar\n"
                                                     << ">> ";
                                                cin >> op[5];
                                                switch (op[5])
                                                {
                                                case 1:
                                                    motor.push_back(new Motor());
                                                    cin >> motor.back();
                                                    break;
                                                case 2:
                                                    i = 0;
                                                    for (Motor *motores : motor)
                                                    {
                                                        i++;
                                                        cout << i << ". " << motores->getNombre() << endl;
                                                    }
                                                    cin >> op[1];
                                                    cout << motor[op[1] - 1];
                                                    break;
                                                case 3:
                                                    op[1] = 0;
                                                    i = 0;
                                                    for (Motor *motores : motor)
                                                    {
                                                        i++;
                                                        cout << i << ". " << motores->getNombre() << endl;
                                                    }
                                                    cin >> op[1];
                                                    *motor[op[1] - 1] = Motor();
                                                    break;
                                                case 4:
                                                    rep[5] = 0;
                                                    break;
                                                default:
                                                    break;
                                                }
                                            } while (rep[5] == 1);

                                            break;
                                        case 2:
                                            rep[5] = 1;
                                            do
                                            {
                                                cout << "1. Plataforma y Manejo Carro\n"
                                                     << "2. Plataforma y Manejo Moto\n"
                                                     << "3. Plataforma y Manejo Camión\n"
                                                     << "4. Regresar\n"
                                                     << ">> ";
                                                cin >> op[1];
                                                switch (op[1])
                                                {
                                                case 1:
                                                    rep[6] = 1;
                                                    do
                                                    {
                                                        cout << "1. Crear Plataforma y Manejo\n"
                                                             << "2. Ver Plataformas y Manejo\n"
                                                             << "3. Borrar Plataformas y Manejo\n"
                                                             << "4. Regresar\n"
                                                             << ">> ";
                                                        cin >> op[6];
                                                        switch (op[6])
                                                        {
                                                        case 1:
                                                            plataformaManejo.push_back(new PlataformaManejoCarro());
                                                            cin >> plataformaManejo.back();
                                                            break;
                                                        case 2:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (PlataformaManejo *plataformas : plataformaManejo)
                                                            {
                                                                result = plataformas->TipoPlataformaManejo();
                                                                if (result == "Carro")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << plataformas->getNombre() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            cout << plataformaManejo[temp[op[1] - 1]];
                                                            break;
                                                        case 3:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (PlataformaManejo *plataformas : plataformaManejo)
                                                            {
                                                                result = plataformas->TipoPlataformaManejo();
                                                                if (result == "Carro")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << plataformas->getNombre() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            *plataformaManejo[temp[op[1] - 1]] = PlataformaManejoCarro();
                                                            break;
                                                        case 4:
                                                            rep[5] = 0;
                                                            break;
                                                        default:
                                                            break;
                                                        }
                                                    } while (rep[5] == 1);

                                                    break;
                                                case 2:
                                                    rep[6] = 1;
                                                    do
                                                    {
                                                        cout << "1. Crear Plataforma y Manejo\n"
                                                             << "2. Ver Plataformas y Manejo\n"
                                                             << "3. Borrar Plataformas y Manejo\n"
                                                             << "4. Regresar\n"
                                                             << ">> ";
                                                        cin >> op[6];
                                                        switch (op[6])
                                                        {
                                                        case 1:
                                                            plataformaManejo.push_back(new PlataformaManejoMoto());
                                                            cin >> plataformaManejo.back();
                                                            break;
                                                        case 2:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (PlataformaManejo *plataformas : plataformaManejo)
                                                            {
                                                                result = plataformas->TipoPlataformaManejo();
                                                                if (result == "Moto")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << plataformas->getNombre() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            cout << plataformaManejo[temp[op[1] - 1]];
                                                            break;
                                                        case 3:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (PlataformaManejo *plataformas : plataformaManejo)
                                                            {
                                                                result = plataformas->TipoPlataformaManejo();
                                                                if (result == "Moto")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << plataformas->getNombre() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            *plataformaManejo[temp[op[1] - 1]] = PlataformaManejoMoto();
                                                            break;
                                                        case 4:
                                                            rep[5] = 0;
                                                            break;
                                                        default:
                                                            break;
                                                        }
                                                    } while (rep[5] == 1);
                                                    break;
                                                case 3:
                                                    rep[6] = 1;
                                                    do
                                                    {
                                                        cout << "1. Crear Plataforma y Manejo\n"
                                                             << "2. Ver Plataformas y Manejo\n"
                                                             << "3. Borrar Plataformas y Manejo\n"
                                                             << "4. Regresar\n"
                                                             << ">> ";
                                                        cin >> op[6];
                                                        switch (op[6])
                                                        {
                                                        case 1:
                                                            plataformaManejo.push_back(new PlataformaManejoCarro());
                                                            cin >> plataformaManejo.back();
                                                            break;
                                                        case 2:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (PlataformaManejo *plataformas : plataformaManejo)
                                                            {
                                                                result = plataformas->TipoPlataformaManejo();
                                                                if (result == "Carro")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << plataformas->getNombre() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            cout << plataformaManejo[temp[op[1] - 1]];
                                                            break;
                                                        case 3:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (PlataformaManejo *plataformas : plataformaManejo)
                                                            {
                                                                result = plataformas->TipoPlataformaManejo();
                                                                if (result == "Carro")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << plataformas->getNombre() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            *plataformaManejo[temp[op[1] - 1]] = PlataformaManejoCarro();
                                                            break;
                                                        case 4:
                                                            rep[5] = 0;
                                                            break;
                                                        default:
                                                            break;
                                                        }
                                                    } while (rep[5] == 1);
                                                    break;
                                                case 4:
                                                    break;

                                                default:
                                                    break;
                                                }
                                            } while (rep[5] == 1);

                                            break;
                                        case 3:
                                            rep[4] = 1;
                                            do
                                            {
                                                cout << "1. transmisión Carro\n"
                                                     << "2. transmisión Moto\n"
                                                     << "4. Regresar\n"
                                                     << ">> ";
                                                cin >> op[1];
                                                switch (op[1])
                                                {
                                                case 1:
                                                    rep[4] = 1;
                                                    do
                                                    {
                                                        cout << "1. Crear transmision"
                                                             << "2. Ver transmision\n"
                                                             << "3. Borrar transmision\n"
                                                             << "4. Regresar\n"
                                                             << ">> ";
                                                        cin >> op[6];
                                                        switch (op[6])
                                                        {
                                                        case 1:
                                                            transmision.push_back(new TransmisionCarro());
                                                            cin >> transmision.back();
                                                            break;
                                                        case 2:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (Transmision *trans : transmision)
                                                            {
                                                                result = trans->claseTransmision();
                                                                if (result == "Carro")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << trans->getTipoTransmision() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            cout << transmision[temp[op[1] - 1]];
                                                            break;
                                                        case 3:
                                                            op[1] = 0;
                                                            i = 0;
                                                            i2 = 0;
                                                            for (Transmision *trans : transmision)
                                                            {
                                                                result = trans->claseTransmision();
                                                                if (result == "Carro")
                                                                {
                                                                    temp[i] = i2;
                                                                    i++;
                                                                    cout << i << ". " << trans->getTipoTransmision() << endl;
                                                                }
                                                                i2++;
                                                            }
                                                            cin >> op[1];
                                                            *transmision[temp[op[1] - 1]] = TransmisionCarro();
                                                            break;
                                                        }
                                                    } while (rep[4]);
                                                    break;
                                                    case 2:
                                                        rep[4] = 1;
                                                        do
                                                        {
                                                            cout << "1. Crear transmision"
                                                                 << "2. Ver transmision\n"
                                                                 << "3. Borrar transmision\n"
                                                                 << "4. Regresar\n"
                                                                 << ">> ";
                                                            cin >> op[6];
                                                            switch (op[6])
                                                            {
                                                                case 1:
                                                                    transmision.push_back(new TransmisionMoto());
                                                                    cin >> transmision.back();
                                                                    break;
                                                                case 2:
                                                                    op[1] = 0;
                                                                    i = 0;
                                                                    i2 = 0;
                                                                    for (Transmision *trans : transmision)
                                                                    {
                                                                        result = trans->claseTransmision();
                                                                        if (result == "Moto")
                                                                        {
                                                                            temp[i] = i2;
                                                                            i++;
                                                                            cout << i << ". " << trans->getTipoTransmision() << endl;
                                                                        }
                                                                        i2++;
                                                                    }
                                                                    cin >> op[1];
                                                                    cout << transmision[temp[op[1] - 1]];
                                                                    break;
                                                                case 3:
                                                                    op[1] = 0;
                                                                    i = 0;
                                                                    i2 = 0;
                                                                    for (Transmision *trans : transmision)
                                                                    {
                                                                        result = trans->claseTransmision();
                                                                        if (result == "Moto")
                                                                        {
                                                                            temp[i] = i2;
                                                                            i++;
                                                                            cout << i << ". " << trans->getTipoTransmision() << endl;
                                                                        }
                                                                        i2++;
                                                                    }
                                                                    cin >> op[1];
                                                                    *transmision[temp[op[1] - 1]] = TransmisionMoto();
                                                                    break;
                                                            }
                                                        } while (rep[4]);
                                                        break;
                                                }
                                            } while (rep[4] == 1);
                                            break;
                                        case 4:
                                            rep[4] = 0;
                                            break;
                                        default:
                                            break;
                                        }
                                    } while (rep[4] == 1);
                                    break;
                                case 2:
                                    rep[4] = 1;
                                    do
                                    {
                                        cout << "1. Carro\n"
                                             << "2. Moto\n"
                                             << "3. Camión\n"
                                             << "4. Regresar\n"
                                             << ">> ";
                                        cin >> op[4];
                                        switch (op[4])
                                        {
                                        case 1:
                                            rep[5] = 1;
                                            do
                                            {
                                                cout << "1. Crear Carro\n"
                                                     << "2. Ver Carro\n"
                                                     << "3. Borrar Carro\n"
                                                     << "4. Regresar\n"
                                                     << ">> ";
                                                cin >> op[5];
                                                switch (op[5])
                                                {
                                                case 1:
                                                    motorizado.push_back(new Carro());
                                                    cin >> motorizado.back();
                                                    cout << "SELECCIÓN DE MARCA: \n"
                                                         << "\t1. Crear nueva marca " << endl;
                                                    for (Marca *marcas : marca)
                                                    {
                                                        i++;
                                                        cout << "\t" << i << ". " << marcas->getNombre() << endl;
                                                    }
                                                    cin >> op[1];
                                                    if (op[1] == 1)
                                                    {
                                                        marca.push_back(new Marca());
                                                        cin >> marca.back();
                                                        motorizado.back()->setMarca(marca.back());
                                                    }
                                                    else
                                                    {
                                                        motorizado.back()->setMarca(marca[op[1] - 1]);
                                                    }
                                                    cout << "SELECCIÓN DE LLANTAS: \n"
                                                         << "\t1. Crear nuevas llantas " << endl;
                                                    for (Llanta *llantas : llanta)
                                                    {
                                                        i++;
                                                        cout << "\t" << i << ". " << llantas->getTipo() << endl;
                                                    }
                                                    cin >> op[1];
                                                    if (op[1] == 1)
                                                    {
                                                        llanta.push_back(new Llanta());
                                                        cin >> llanta.back();
                                                        motorizado.back()->setLlantas(llanta.back());
                                                    }
                                                    else
                                                    {
                                                        motorizado.back()->setLlantas(llanta[op[1] - 1]);
                                                    }
                                                    cout << "SELECCIÓN DE MOTOR: \n"
                                                         << "\t1. Crear nuevas motor " << endl;
                                                    for (Motor *motores : motor)
                                                    {
                                                        i++;
                                                        cout << "\t" << i << ". " << motores->getNombre() << endl;
                                                    }
                                                    cin >> op[1];
                                                    if (op[1] == 1)
                                                    {
                                                        motor.push_back(new Motor());
                                                        cin >> motor.back();
                                                        motorizado.back()->setMotor(motor.back());
                                                    }
                                                    else
                                                    {
                                                        motorizado.back()->setMotor(motor[op[1] - 1]);
                                                    }
                                                    break;
                                                    cout << "SELECCIÓN DE PLATAFORMA Y MANEJO: \n"
                                                         << "\t1. Crear nueva Plataforma y Manejo " << endl;
                                                    for (PlataformaManejo *plataformas : plataformaManejo)
                                                    {
                                                        result = plataformas->TipoPlataformaManejo();
                                                        if (result == "Carro")
                                                        {
                                                            temp[i] = i2;
                                                            i++;
                                                            cout << i << ". " << plataformas->getNombre() << endl;
                                                        }
                                                        i2++;
                                                    }
                                                    if (op[1] == 1)
                                                    {
                                                        plataformaManejo.push_back(new PlataformaManejoCarro());
                                                        cin >> plataformaManejo.back();
                                                        motorizado.back()->setPlataformaManejo(plataformaManejo.back());
                                                    }
                                                    else
                                                    {
                                                        motorizado.back()->setPlataformaManejo(plataformaManejo[temp[op[1] - 1]]);
                                                    }
                                                    cout << "SELECCIÓN DE TRANSMISIÓN: \n"
                                                         << "\t1. Crear nueva Transmisión " << endl;
                                                    for (Transmision *trans : transmision)
                                                    {
                                                        result = trans->claseTransmision();
                                                        if (result == "Carro")
                                                        {
                                                            temp[i] = i2;
                                                            i++;
                                                            cout << i << ". " << trans->getTipoTransmision() << endl;
                                                        }
                                                        i2++;
                                                    }
                                                    cin >> op[1];
                                                    if (op[1] == 1)
                                                    {
                                                        transmision.push_back(new TransmisionCarro());
                                                        cin >> transmision.back();
                                                        motorizado.back()->setTransmision(transmision.back());
                                                    }
                                                    else
                                                    {
                                                        motorizado.back()->setTransmision(transmision[temp[op[1] - 1]]);
                                                    }
                                                case 2:
                                                    for (Motorizados *motorizados : motorizado)
                                                    {
                                                        i++;
                                                        cout << i << ". " << motorizados->getTipo() << endl;
                                                    }
                                                    cin >> op[1];
                                                    cout << motorizado[op[1] - 1];
                                                    break;
                                                case 3:
                                                    for (Motorizados *motorizados : motorizado)
                                                    {
                                                        i++;
                                                        cout << i << ". " << motorizados->getTipo() << endl;
                                                    }
                                                    cin >> op[1];
                                                    *motorizado[op[1] - 1] = Carro();
                                                    break;
                                                case 4:
                                                    rep[5] = 0;
                                                    break;
                                                default:
                                                    break;
                                                }
                                            } while (rep[5] == 1);

                                            break;
                                        case 2:
                                            break;
                                        case 3:
                                            break;
                                        case 4:
                                            rep[4] = 0;
                                            break;
                                        default:
                                            break;
                                        }
                                    } while (rep[4] == 1);

                                    break;
                                case 3:
                                    rep[3] = 0;
                                    break;
                                default:
                                    break;
                                }
                            } while (rep[3] == 1);
                            break;

                        case 2:
                            rep[3] = 1;
                            do
                            {
                                cout << "1. Patineta\n"
                                     << "2. Bicicleta\n"
                                     << "3. Scooter\n"
                                     << "4. Regresar\n"
                                     << ">> ";
                                cin >> op[3];
                                switch (op[3])
                                {
                                case 1:
                                    break;
                                case 2:
                                    break;
                                case 3:
                                    break;
                                case 4:
                                    rep[3] = 0;
                                    break;
                                default:
                                    break;
                                }
                            } while (rep[3] == 1);

                            break;
                        case 3:
                            rep[2] = 0;
                            break;
                        default:
                            break;
                        }
                    } while (rep[2] == 1);

                    break;
                case 4:
                    rep[1] = 0;
                    break;
                default:
                    break;
                }
            } while (rep[1] == 1);

            break;
        case 2:
            rep[1] = 1;
            do
            {
                cout << "1. Asesores\n"
                     << "2. Clientes\n"
                     << "3. Ventas\n"
                     << "4. Regresar\n"
                     << ">> ";
                switch (op[1])
                {
                case 1:
                    rep[2] = 1;
                    do
                    {
                        cout << "1. Crear Asesor\n"
                             << "2. Ver Asesores\n"
                             << "3. Borrar Asesores\n"
                             << "4. Regresar\n"
                             << ">> ";
                    } while (rep[2] == 1);

                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    rep[1] = 0;
                    break;

                default:
                    break;
                }
            } while (rep[1] == 1);

            break;
        case 3:
            rep[0] = 0;
            break;
        default:
            break;
        }
    } while (rep[0] == 1);

    return 0;
}