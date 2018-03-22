//
// Created by elias on 20/03/18.
//

#include <cstdlib>
#include <iostream>
#include "Nodo_pag_int.h"
#include "Obtener_datos_de_archivo.h"


Nodo_pag_int *Nodo_pag_int::crear_nuevo_nodo(int proceso, int tamano) {
    Nodo_pag_int* nodo_nuevo = nullptr;
    nodo_nuevo = (Nodo_pag_int*)malloc(sizeof(Nodo_pag_int));
    if(nodo_nuevo == nullptr){
        std::cout << "Memory allocation error\n" << std::endl;
        return nullptr;
    }
    nodo_nuevo->proceso = proceso;
    nodo_nuevo->tamano = tamano;
    nodo_nuevo->siguiente = nullptr;
    return nodo_nuevo;
}

Nodo_pag_int *Nodo_pag_int::insertar_nodo_final(int proceso, int tamano, Nodo_pag_int **cabeza) {
    Nodo_pag_int* temp = *cabeza;
    if(temp == nullptr){
        *cabeza = crear_nuevo_nodo(proceso, tamano);
    } else{
        while(temp->siguiente != nullptr){
            temp = reinterpret_cast<Nodo_pag_int *>(temp->siguiente);
        }
        temp->siguiente = reinterpret_cast<Nodo_pag_int *>(crear_nuevo_nodo(proceso, tamano));
    }
    return *cabeza;
}

Nodo_pag_int *Nodo_pag_int::obtener_dato(Obtener_datos_de_archivo *cabeza_simp, Nodo_pag_int **cabeza_pag) {
    _INTNODE* temp = reinterpret_cast<_INTNODE *>(cabeza_simp);
    int contador = 0, proceso;
    while (temp != NULL){
        contador++;
        switch (contador){
            case 1: proceso = temp->data;
                temp = temp->next;
                break;

            case 2: *cabeza_pag = insertar_nodo_final(proceso, temp->data, &(*cabeza_pag));
                contador = 0;
                temp = temp ->next;
                break;
        }
    }
    return *cabeza_pag;
}

int Nodo_pag_int::obtener_tamano_total_proceso(Nodo_pag_int *temp) {
    int sum = 0;
    while (temp != nullptr){
        sum += temp->tamano;
        temp = temp->siguiente;
    }
    return sum;
}

int Nodo_pag_int::contar_nodos(Nodo_pag_int *temp) {
    int contador = 0;
    while(temp != nullptr){
        contador++;
        temp = temp->siguiente;
    }
    return contador;
}

void Nodo_pag_int::borra_nodo(Nodo_pag_int **cabeza) {
    Nodo_pag_int* temp = *cabeza;
    Nodo_pag_int* temp2 = *cabeza;

    if (temp == nullptr){} else{
        if (contar_nodos(temp) == 1){
            if(temp->tamano == 0){
                *cabeza = nullptr;
                free(temp);
            }
        } else{
            while (temp != nullptr){
                if(temp->tamano == 0){
                    temp2->siguiente = temp->siguiente;
                    free(temp);
                    temp = temp2->siguiente;
                } else{
                    temp2 = temp;
                    temp = temp->siguiente;
                }
            }
        }
    }
    temp = *cabeza;
    if(temp->tamano == 0){
        *cabeza = temp->siguiente;
    }
}
