#include <iostream>
#include "Seccion.h"

int main()
{
  Curso       *oPoo = new Curso();
  Laboratorio *l604 = new Laboratorio();
  Profesor    *pTeofilo =new Profesor();

  //---- Se crea un alumnos: jorge
  Alumno *pJorge =new Alumno();
  //---- Se setean sus datos
  pJorge->setCodigo("A2017001");
  pJorge->setApellidoPaterno("Perez");
  pJorge->setApellidoMaterno("Suarez");
  pJorge->setNombres("Jorge");
  pJorge->setEdad(17);
  pJorge->setCorreo("jorge@utec.edu.pe");
  pJorge->setCreditoAcumulado(30);

  Alumno *pLuis = new Alumno();
  //-- se setea los datos de Luis
  pLuis->setCodigo("A2017002");
  pLuis->setApellidoPaterno("Costa");
  pLuis->setApellidoMaterno("Piñan");
  pLuis->setNombres("Luis");
  pLuis->setEdad(17);
  pLuis->setCorreo("luis@utec.edu.pe");
  pLuis->setCreditoAcumulado(15);

  //--- Se setea el curso:  poo
  oPoo->setCodigo("CS1002");
  oPoo->setNombres("Programacion orientada a objectos");
  oPoo->setPrerequisito("CS1001");
  oPoo->setCiclo(2);
  oPoo->setCredito(4);

  //--- Se setea el laboratorio
  l604->setCodigo("L604");
  l604->setNumeroComputadoras(25);
  l604->setNumeroPiso(6);

  //--- Se Setea al profesor
  pTeofilo->setCodigo("P2017001");
  pTeofilo->setNombres("Teofilo");
  pTeofilo->setCorreo("teofilo@utec.edu.pe");
  pTeofilo->setApellidoPaterno("Chambilla");
  pTeofilo->setApellidoMaterno("Aquino");

  //---Se crea la seccion
  Seccion     *pUnica = new Seccion();

  //--Se setea la seccion unica
  pUnica->setCurso(oPoo);
  pUnica->setProfesor(pTeofilo);
  pUnica->setLaboratorio(l604);
  pUnica->setDia(2);
  pUnica->setHoraInicio(18);
  pUnica->setHoraFin(22);
  //--- la sección tendrá dos alumnos matriculados
  pUnica->setNumeroMatriculados(2);
  pUnica->setALumno(pJorge);
  pUnica->setALumno(pLuis);
  pUnica->mostrarDatos();

  //--- modificaciones:
  //--1) 1) Permita insertar por lo menos 4 alumnos al vector de alumnos, cuyos datos se leen del teclado

  TipoString Codigo;
  TipoString Nombres;
  TipoString ApePaterno;
  TipoString ApeMaterno;
  TipoString CuentaCorreo;
  TipoEntero Edad;
  TipoEntero CreditosAcumulados;

  Alumno *unAlumno= nullptr;
  int n;

  cout << "Numero de alumnos a insertar : ";
  cin >> n;
  for(int i=0; i<n; i++)
  {
    cout << "Codigo             : "; cin >> Codigo;
    cout << "Nombres            : "; cin >> Nombres;
    cout << "Apellido Paterno   : "; cin >> ApePaterno;
    cout << "Apellido Materno   : "; cin >> ApeMaterno;
    cout << "E-mail             : "; cin >> CuentaCorreo;
    cout << "Edad               : "; cin >> Edad;
    cout << "CreditosAcumulados : "; cin >> CreditosAcumulados;

    unAlumno = new Alumno(Codigo,Nombres,ApePaterno,ApeMaterno,CuentaCorreo,Edad,CreditosAcumulados);
    pUnica->setALumno(unAlumno);
  }

  //-- 2) Mostrar el listado de alumnos
  vector<Alumno*> vdeAlumnos = pUnica->getListaAlumnos();
  cout << "\nListado de Alumnos\n";
  for (auto& item: vdeAlumnos)
    item->mostrarDatos();

  //3) Imprimir los datos del alumno mas joven
  TipoEntero menor;
  TipoEntero posMenor;

  menor = vdeAlumnos[0]->getEdad();
  posMenor=0;
  for(int i=1; i<vdeAlumnos.size(); i++)
  {
    if (vdeAlumnos[i]->getEdad()<menor)
    {
      menor = vdeAlumnos[i]->getEdad();
      posMenor=i;
    }
  }
  cout << "\nDatos del alumno mas joven \n";
  vdeAlumnos[posMenor]->mostrarDatos();

  //-- completar ... Imprimir los datos del alumnos que tiene la mayor cantidad de créditos acumulados.

  //-- Buscar un alumno por nombre
  pUnica->buscar_alumno("Luis");

  //--- Adicionar un alumnos sin repetir, por direccion
  Alumno *pA = new Alumno();

  pA->setCodigo("A2021111");
  pA->setApellidoPaterno("Arce");
  pA->setApellidoMaterno("Arce");
  pA->setNombres("Renata");
  pA->setEdad(21);
  pA->setCorreo("renata@utec.edu.pe");
  pA->setCreditoAcumulado(23);

  pUnica->add_alumno_sin_repetir(pA);
  cout << "\nListado sin repetir\n";
  pUnica->mostrarDatos();

  //--- Probamos ahora insertar otra vez a la misma alumna Renata.
  pUnica->add_alumno_sin_repetir(pA);
  cout << "\nListado sin repetir 2\n";
  pUnica->mostrarDatos();

  //--- Remover un alumno
  pUnica->remove_alumno(pA);
  cout << "\nLuego de remover a Renata \n";
  pUnica->mostrarDatos();

  return 0;
}

/* Modifique el programa de tal manera que realice ademas, lo siguiente:
 * 1) Permita insertar por lo menos 4 alumnos al vector de alumnos, cuyos datos se leen del teclado
 * 2) Mostrar el listado de alumnos
 * 3) Imprimir los datos del alumno mas joven
 * 4) Imprimir los datos del alumnos que tiene la mayor cantidad de créditos acumulados.
 * */

