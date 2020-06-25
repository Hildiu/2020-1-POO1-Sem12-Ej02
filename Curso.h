//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#ifndef EJEMPLO_01_CURSO_H
#define EJEMPLO_01_CURSO_H

#include "Tipos.h"

class Curso {
private:
    TipoString m_Codigo;
    TipoString m_Nombre;
    TipoString m_PreRequisito;
    TipoEntero m_Ciclo;
    TipoEntero m_Creditos;
public:
    Curso(){};
    Curso(TipoString codigo,TipoString nombre, TipoString m_PreRequisito,
           TipoEntero ciclo, TipoEntero creditos):
           m_Codigo(codigo),
           m_Nombre(nombre),
           m_PreRequisito(m_PreRequisito),
           m_Ciclo(ciclo),
           m_Creditos(creditos)
           {}
    virtual ~Curso(){};

    void setCodigo(TipoString _codigo)  { m_Codigo= _codigo;}
    void setNombres(TipoString _nombre) { m_Nombre = _nombre;}
    void setPrerequisito(TipoString _preRequisito){ m_PreRequisito = _preRequisito;}
    void setCiclo(TipoEntero _ciclo) { m_Ciclo = _ciclo; }
    void setCredito(TipoEntero _creditos){ m_Creditos = _creditos;}

    TipoString getCodigo() { return  m_Codigo; }
    TipoString getNombre(){ return  m_Nombre;}
    TipoString getPrerequisitos(){ return  m_PreRequisito;}
    TipoEntero getCiclo() { return  m_Ciclo;}
    TipoEntero getCreditos() {return  m_Creditos;}

    void mostrarDatos();
};

#endif //EJEMPLO_01_CURSO_H
