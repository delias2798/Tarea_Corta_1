//
// Created by elias on 14/03/18.
//

//#ifndef UNTITLED_NODO_SIMPLE_H
//#define UNTITLED_NODO_SIMPLE_H


#ifndef NODO_SIMPLE_H
#define NODO_SIMPLE_H

#include <iostream>

template <class T>

class Nodo_simple
{
public:
    Nodo_simple<T>();
    Nodo_simple<T>(T);
    virtual ~Nodo_simple<T>();

    Nodo_simple *siguiente;
    T dato;

    void borrar_todo();
    void imprimir();
protected:
private:
};


#endif //UNTITLED_NODO_SIMPLE_H
