cmake_minimum_required(VERSION 3.21)
project(POO_project)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(POO_project
        Directorio/asesor.h
        Directorio/comprador.h
        Directorio/cuenta.h
        Directorio/documento.h
        Directorio/fecha.h
        Directorio/nombre.h
        Directorio/persona.h
        Directorio/tipocliente.h
        Directorio/vendedor.h
        Directorio/venta.h
        Bicicleta.h
        Camion.h
        Carro.h
        engine.h
        Llanta.h
        main.cpp
        Marca.h
        Moto.h
        Motorizados.h
        NoMotorizado.h
        PlataformaManejo.h
        PlataformaManejoCarro.h
        PlataformaManejoMoto.h
        TipoConduccion.h
        Transmision.h
        TransmisionCarro.h
        TransmisionMoto.h
        vehiculo.h)
