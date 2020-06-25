//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#ifndef EJEMPLO_01_ALUMNO_H
#define EJEMPLO_01_ALUMNO_H

#include "Tipos.h"

class Alumno {
private:
    TipoString m_Codigo;
    TipoString m_Nombres;
    TipoString m_ApePaterno;
    TipoString m_ApeMaterno;
    TipoString m_CuentaCorreo;
    TipoEntero m_Edad;
    TipoEntero m_CreditosAcumulados;
public:
    Alumno(){};
    Alumno(TipoString Codigo, TipoString Nombres,
           TipoString ApePaterno,TipoString ApeMaterno, TipoString CuentaCorreo,
           TipoEntero Edad,TipoEntero CreditosAcumulados):
           m_Codigo(Codigo), m_Nombres(Nombres),m_ApePaterno(ApePaterno),
           m_ApeMaterno(ApeMaterno), m_CuentaCorreo(CuentaCorreo),
           m_Edad(Edad),m_CreditosAcumulados(CreditosAcumulados)
           {}

    virtual ~Alumno(){};
    void setCodigo(TipoString _codigo){m_Codigo =_codigo;}
    void setNombres(TipoString _nombres){m_Nombres = _nombres;}
    void setApellidoPaterno( TipoString _apePaterno){m_ApePaterno = _apePaterno;}
    void setApellidoMaterno(TipoString _apeMaterno){ m_ApeMaterno =_apeMaterno;}
    void setEdad(TipoEntero _edad){m_Edad = _edad;}
    void setCorreo(TipoString _correo){m_CuentaCorreo = _correo;}
    void setCreditoAcumulado(TipoEntero _creditos ){m_CreditosAcumulados = _creditos;}

    TipoString getCodigo(){return m_Codigo;}
    TipoString getNombres(){return m_Nombres;}
    TipoString getApellidoPaterno(){return  m_ApePaterno;}
    TipoString getApellidoMaterno(){return m_ApeMaterno;}
    TipoEntero getEdad(){return  m_Edad;}
    TipoString getCorreo(){return m_CuentaCorreo;}
    TipoEntero getCreditoAcumulado(){return m_CreditosAcumulados;}

    void mostrarDatos();
};


#endif //EJEMPLO_01_ALUMNO_H
