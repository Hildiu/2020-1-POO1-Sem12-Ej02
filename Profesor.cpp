//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#include "Profesor.h"

void Profesor::mostrarDatos()
{
  cout << "\n";
  cout<<" Datos del Profesor"<<endl;
  cout<<" Codigo           : " << m_Codigo<<endl;
  cout<<" Nombres          : " << m_Nombres<<endl;
  cout<<" Apellido Paterno : " << m_ApePaterno<<endl;
  cout<<" Apellido Materno : " << m_ApeMaterno<<endl;
  cout<<" Correo           : " << m_CuentaCorreo<<endl;
}

