//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#include "Seccion.h"

void Seccion::setALumno(Alumno* pAlumno)
{
  m_ListaAlumno.emplace_back(pAlumno);
}

void Seccion::mostrarDatos()
{
  cout << "\n";
  cout<<"Datos de la seccion"<<endl;
  m_Curso->mostrarDatos();
  m_Profesor->mostrarDatos();
  m_Laboratorio->mostrarDatos();
  cout<<" Dia         :" << m_Dia << endl;
  cout<<" Hora inicio :" << m_HoraInicio<<endl;
  cout<<" Hora fin    :"<< m_HoraFin<< endl;
  //-- se muestran los alumnos
  for (auto& item: m_ListaAlumno)
    item->mostrarDatos();
}


void Seccion::add_alumno_sin_repetir(Alumno * alu)
{
  auto it = find(begin(m_ListaAlumno), end(m_ListaAlumno), alu);
  if (it == end(m_ListaAlumno))
    m_ListaAlumno.push_back(alu);
}

void Seccion::remove_alumno(Alumno* alu)
{
  auto it = find(begin(m_ListaAlumno), end(m_ListaAlumno), alu);
  if (it != end(m_ListaAlumno))
    m_ListaAlumno.erase(it);
}

void Seccion::buscar_alumno(TipoString nombre)
{
  auto it = find_if(begin(m_ListaAlumno), end(m_ListaAlumno),
                    [nombre](Alumno * alumno) {return alumno->getNombres() == nombre;});

  if (it != end(m_ListaAlumno))
  {
    cout << (*it)->getCodigo() << " " << (*it)->getNombres() << endl;
  }
}
