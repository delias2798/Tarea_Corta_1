//
// Created by elias on 14/03/18.
//

#include "Lista_Simple.h"
#include "Nodo_simple.h"
//#include <cstddef>

using namespace std;

template<typename T>
Lista_Simple<T>::Lista_Simple()
{
    //ctor
    cout << "hola" << endl;
    m_num_nodos = 0;
    m_cabeza = NULL;

}
//
template<typename T>
void Lista_Simple<T>::insertar_inicio(T data1)
{
    Nodo_simple<T> *nuevo_nodo = new Nodo_simple<T>(data1);
    Nodo_simple<T> *temp = m_cabeza;

    if (!m_cabeza){
        m_cabeza = nuevo_nodo;
    } else{
        nuevo_nodo->siguiente = m_cabeza;
        m_cabeza =nuevo_nodo;

        while(temp){
            temp = temp->siguiente;
        }
    }
    m_num_nodos++;
}

template<typename T>
void Lista_Simple<T>::insertar_final(T data1)
{
    Nodo_simple<T> *nuevo_nodo = new Nodo_simple<T>(data1);
    Nodo_simple<T> *temp = m_cabeza;

    if (!m_cabeza){
        m_cabeza = nuevo_nodo;
    } else{
        while(temp->siguiente != NULL){
            temp = temp->siguiente;
        }
        temp->siguiente = nuevo_nodo;
    }
    m_num_nodos++;
}

template<typename T>
void Lista_Simple<T>::insertar_por_posicion(int ind, T nuevo)
{
    Nodo_simple<T>* temp = m_cabeza;
    Nodo_simple<T>* temp1 = temp->siguiente;

    if(ind < 0 || ind > m_num_nodos - 1)
    {
        cout << "Fuera de rango" << endl;
    } else if(ind == 0){
        insertar_inicio(nuevo);
    } else{
        for (int i = 0; i <= ind; i++){
            if (i == ind-1){
                Nodo_simple<T>* nodo_nuevo = new Nodo_simple<T>(nuevo);
                temp->siguiente = nodo_nuevo;
                nodo_nuevo->siguiente = temp1;
                m_num_nodos++;
            }
            temp = temp->siguiente;
            temp1 = temp1->siguiente;
        }
    }
}

template<typename T>
void Lista_Simple<T>::editar_posicion(int ind, T nuevo)
{
    Nodo_simple<T>* temp = m_cabeza;
    Nodo_simple<T>* temp1 = temp->siguiente;

    if(ind <= 0 || ind > m_num_nodos - 1)
    {
        cout << "Fuera de rango" << endl;
    } else{
        for (int i = 0; i <= ind; i++){
            if (i == ind-1){
                temp1->dato = nuevo;
            }
            temp = temp->siguiente;
            temp1 = temp1->siguiente;
        }
    }
}

template<typename T>
void Lista_Simple<T>::obtener_por_posicion(int ind)
{
    Nodo_simple<T>* temp = m_cabeza;
    Nodo_simple<T>* temp1 = temp->siguiente;

    if(ind <= 0 || ind > m_num_nodos - 1)
    {
        cout << "Fuera de rango" << endl;
    } else{
        for (int i = 0; i <= ind; i++){
            if (i == ind-1){
                temp1->imprimir();
                return;
            }
            temp = temp->siguiente;
            temp1 = temp1->siguiente;
        }
    }
}

template<typename T>
void Lista_Simple<T>::eliminar_inicio()
{
    Nodo_simple<T> *temp = m_cabeza->siguiente;

    if (!m_cabeza){
        cout << "Lista vacia" << endl;
    } else{
        m_cabeza = temp;
    }
    m_num_nodos--;
}

template<typename T>
void Lista_Simple<T>::eliminar_final()
{
    Nodo_simple<T>* temp = m_cabeza;
    Nodo_simple<T>* temp1 = temp->siguiente;

    if (!m_cabeza){
        cout << "Lista vacia" << endl;
    } else{
        while(temp1->siguiente != NULL){
            temp = temp->siguiente;
            temp1 = temp1->siguiente;
        }
        temp->siguiente = temp1->siguiente;
    }
    m_num_nodos--;
}

template<typename T>
void Lista_Simple<T>::eliminar_por_posicion(int ind)
{
    Nodo_simple<T>* temp = m_cabeza;
    Nodo_simple<T>* temp1 = temp->siguiente;

    if(ind < 0 || ind > m_num_nodos - 1)
    {
        cout << "Fuera de rango" << endl;
    } else if(ind == 0){
        m_cabeza = temp->siguiente;
    } else{
        for (int i = 1; i <= ind; i++){
            if (i == ind){
                Nodo_simple<T>* nodo_aux = temp1;
                temp->siguiente = temp1->siguiente;
                delete nodo_aux;
                m_num_nodos--;
            }
            temp = temp->siguiente;
            temp1 = temp1->siguiente;
        }
    }
}

template<typename T>
void Lista_Simple<T>::imprimir()
{
    Nodo_simple<T> *temp = m_cabeza;
    if (!m_cabeza){
        cout << "La lista está vacía " << endl;
    } else {
        while (temp){
            temp->imprimir();
            if (!temp->siguiente) cout << "NULL";
            temp = temp->siguiente;
        }
    }
    cout << endl << endl;
}



template<typename T>
Lista_Simple<T>::~Lista_Simple()
{
    //dtor
}

template class Lista_Simple<int>;
//template class Lista_Simple<string>;

