//
// Created by Maria Hilda Bermejo on 6/21/20.
//

#ifndef EJEMPLO_01_SECCION_H
#define EJEMPLO_01_SECCION_H

#include "Tipos.h"
#include "Laboratorio.h"
#include "Profesor.h"
#include "Curso.h"
#include "Alumno.h"

class Seccion{
private:
    Curso    *m_Curso;
    Profesor *m_Profesor;
    Laboratorio *m_Laboratorio;
    vector<Alumno*> m_ListaAlumno;  //-- en el vector se almacenan punteros a objetos Alumno

    TipoEntero m_Dia;
    TipoEntero m_HoraInicio;
    TipoEntero m_HoraFin;
    TipoEntero m_NumeroMatriculados;
public:
    Seccion(){};
    Seccion(Curso    *curso, Profesor * profesor, Laboratorio * Laboratorio,
            vector<Alumno*> &listaAlumno,
            TipoEntero dia,
            TipoEntero horaInicio,
            TipoEntero horaFin,
            TipoEntero numeroMatriculados):
            m_Curso(curso),
            m_Profesor(profesor),
            m_Laboratorio(Laboratorio),
            m_ListaAlumno(listaAlumno), //-- vector
            m_Dia(dia),
            m_HoraInicio(horaInicio),
            m_HoraFin(horaFin),
            m_NumeroMatriculados(numeroMatriculados)
            {}

    virtual ~Seccion(){ };

    void setCurso(Curso *pCurso){ m_Curso =pCurso;}
    void setProfesor(Profesor *pProfesor){ m_Profesor = pProfesor;}
    void setLaboratorio(Laboratorio *pLaboratorio){m_Laboratorio =pLaboratorio;}

    void setALumno(Alumno* pAlumno); //-- inserta alumno en el vector, ver Alumno.cpp

    void setDia(TipoEntero pDia){m_Dia =pDia; }
    void setHoraInicio(TipoEntero pHoraInicio){m_HoraInicio = pHoraInicio;}
    void setHoraFin(TipoEntero pHoraFin){m_HoraFin= pHoraFin;}
    void setNumeroMatriculados(TipoEntero pNumeroMatriculados)
         {m_NumeroMatriculados = pNumeroMatriculados;}

    Curso*    getCurso(){return m_Curso;}
    Profesor* getProfesor(){return m_Profesor;}
    Laboratorio* getLaboratorio(){return m_Laboratorio;}
    TipoEntero getDia(){return m_Dia;}
    TipoEntero getHoraInicio(){return m_HoraInicio;}
    TipoEntero getHoraFin(){return m_HoraFin;}
    TipoEntero getNumeroMatriculados(){return m_NumeroMatriculados;}

    vector<Alumno*> getListaAlumnos(){return m_ListaAlumno;}
    void mostrarDatos();
    void add_alumno_sin_repetir(Alumno * alu);
    void remove_alumno(Alumno* alu);
    void buscar_alumno(TipoString nombre);
};

#endif //EJEMPLO_01_SECCION_H
