//
// Created by elias on 14/03/18.
//

#include "Nodo_simple.h"

using namespace std;

template<typename T>

Nodo_simple<T>::Nodo_simple()
{
    //ctor
    dato = NULL;
    siguiente = NULL;
}

template<typename T>
Nodo_simple<T>::Nodo_simple(T dato1)
{
    //ctor
    dato = dato1;
    siguiente = NULL;
}

template<typename T>
void Nodo_simple<T>::borrar_todo()
{
    if (siguiente)
        siguiente->borrar_todo();
    delete this;
}

template<typename T>
void Nodo_simple<T>::imprimir()
{
    cout << dato << "->";
}

template<typename T>
Nodo_simple<T>::~Nodo_simple()
{
    //dtor
}

template class Nodo_simple<int>;
template class Lista_Simple<string>;
