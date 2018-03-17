//
// Created by elias on 16/03/18.
//


#include <cstdlib>
#include "Pag_memoria_virtual.h"
#define Memoria_página_virtual size_of(MEMORIA_VIRTUAL)

MEMORIA_VIRTUAL* pag_mem_virtual_crear_nodo(int proceso, size_t tamano, int num_pag, void *direc_mem){
    MEMORIA_VIRTUAL* nodo_nuevo = NULL;
    nodo_nuevo = (MEMORIA_VIRTUAL*)malloc(sizeof(MEMORIA_VIRTUAL));
    if(nodo_nuevo == NULL){
        printf("Error al asignar la memoria\n");
        return NULL;
    }
    nodo_nuevo->procesando = proceso;
    nodo_nuevo->tamano = tamano;
    nodo_nuevo->numero_pagina = num_pag;
    nodo_nuevo->direccion_de_mem = direc_mem;
    nodo_nuevo->siguiente = NULL;
    return nodo_nuevo;
}
