//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#include "Curso.h"

void Curso::mostrarDatos()
{
  cout<<"\n";
  cout<<" Datos del Curso" << endl;
  cout<<" Codigo       : " << m_Codigo<<endl;
  cout<<" Nombre       : " << m_Nombre<<endl;
  cout<<" Prerequisito : " << m_PreRequisito<<endl;
  cout<<" Ciclo        : " << m_Ciclo<<endl;
  cout<<" Creditos     : " << m_Creditos<<endl;
}
