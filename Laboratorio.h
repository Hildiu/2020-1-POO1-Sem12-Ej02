//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#ifndef EJEMPLO_01_LABORATORIO_H
#define EJEMPLO_01_LABORATORIO_H

#include "Tipos.h"

class Laboratorio{
private:
    TipoString codigo;
    TipoEntero numeroPiso;
    TipoEntero numeroComputadoras;
public:
    Laboratorio(){};
    Laboratorio(TipoString _codigo, TipoEntero _numeroPiso, TipoEntero _numeroComputadoras):
                codigo(_codigo),
                numeroPiso(_numeroPiso),
                numeroComputadoras(_numeroComputadoras)
                {}
    virtual ~Laboratorio(){};

    void setCodigo(TipoString _codigo){ codigo = _codigo; }
    void setNumeroPiso(TipoEntero _numeroPiso){ numeroPiso = _numeroPiso;}
    void setNumeroComputadoras(TipoEntero _numeroComputadoras){numeroComputadoras =_numeroComputadoras;}

    TipoString getCodigo(){ return  codigo;}
    TipoEntero getNumeroPiso(){return  numeroPiso;}
    TipoEntero getNumeroComputadoras(){ return  numeroComputadoras;}

    void mostrarDatos();
};

#endif //EJEMPLO_01_LABORATORIO_H
