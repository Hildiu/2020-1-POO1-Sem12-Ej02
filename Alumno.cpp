//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#include "Alumno.h"

void Alumno::mostrarDatos()
{
  cout << "\n";
  cout<<" Datos del Alumno"<<endl;
  cout<<" Codigo              : "<<m_Codigo<<endl;
  cout<<" Nombres             : "<<m_Nombres<<endl;
  cout<<" Apellido Paterno    : "<<m_ApePaterno<<endl;
  cout<<" Apellido Materno    : "<<m_ApeMaterno<<endl;
  cout<<" Edad                : "<<m_Edad<<endl;
  cout<<" Correo              : "<<m_CuentaCorreo<<endl;
  cout<<" Creditos Acumulados : "<< m_CreditosAcumulados<<endl;
}
