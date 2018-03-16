//
// Created by elias on 16/03/18.
//
#include <stdio.h>
#include <unistd.h>
#include <printf.h>
#include "Nodo_simple_punteros.h"

#define TAMANO_BLOQUE sizeof(BLOQUE_NODO)

BLOQUE_NODO* asignar_bloque_mem(size_t tamano){
    BLOQUE_NODO* bloque = (BLOQUE_NODO*)sbrk(0);
    void* direc_mem = (void*)sbrk(0);
    void* asignar_mem = (void*)sbrk(TAMANO_BLOQUE + tamano);

    if(asignar_mem == (void*) - 1){ return NULL;}
    else{
        bloque->siguiente = NULL;
        bloque->vacio = false;
        bloque->tamano = tamano;
        bloque->direccion_de_memoria = direc_mem + TAMANO_BLOQUE;
        return bloque;
    }
}

void asignar_sig_bloque(size_t tamano, BLOQUE_NODO **cabeza){
    BLOQUE_NODO* temp = *cabeza;
    void* asignar_mem = NULL;
    void* direc_mem = (void*)sbrk(0);

    if(temp == NULL){*cabeza = asignar_bloque_mem(tamano);}
    else{
        while(temp->siguiente != NULL){
            temp = temp->siguiente;
        }
        BLOQUE_NODO* bloque_nuevo = static_cast<BLOQUE_NODO *>(sbrk(0));

        asignar_mem = (void*)sbrk(TAMANO_BLOQUE + tamano);
        if(asignar_mem == (void*) - 1){}
        else{
            bloque_nuevo->siguiente = NULL;
            bloque_nuevo->vacio = false;
            bloque_nuevo->tamano = tamano;
            bloque_nuevo->direccion_de_memoria = direc_mem + TAMANO_BLOQUE;
            temp->siguiente = bloque_nuevo;
        }
    }
}

void liberar_bloque_mem(BLOQUE_NODO **cabeza){
    if(*cabeza == NULL){}
    else{
        (*cabeza)->vacio = true;
    }
}
void imprimir_bloques(BLOQUE_NODO *temp){
    while(temp != nullptr){
        printf("Esta_libre = %d, Tamano = %d, Dirección_de_memoria = %p, temp = %p, Nodo_siguiente = %p\n",
            temp->vacio, temp->tamano, temp->direccion_de_memoria, temp, temp->siguiente);
        temp = temp->siguiente;
    }
}
