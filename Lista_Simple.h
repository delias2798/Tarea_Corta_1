//
// Created by elias on 14/03/18.
//

//#ifndef UNTITLED_LISTA_SIMPLE_H
//#define UNTITLED_LISTA_SIMPLE_H

#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H

#include <iostream>
#include "Nodo_simple.h"/*
#include <fstream>

#include <string>
#include <stdlib.h>*/

template<class T>

class Lista_Simple
{
public:
    Lista_Simple<T>();
    virtual ~Lista_Simple<T>();

    void insertar_inicio(T);
    void insertar_final(T);
    void insertar_por_posicion(int, T);
    void eliminar_por_posicion(int);
    void eliminar_inicio();
    void eliminar_final();
    void editar_posicion(int, T);
    void obtener_por_posicion(int);
    void imprimir();
protected:
private:
    Nodo_simple<T> *m_cabeza;
    int m_num_nodos;
};



#endif //UNTITLED_LISTA_SIMPLE_H
