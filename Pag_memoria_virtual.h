//
// Created by elias on 16/03/18.
//
#include <stdio.h>
#include <unistd.h>
#include <printf.h>

#ifndef UNTITLED_PAG_MEMORIA_VIRTUAL_H
#define UNTITLED_PAG_MEMORIA_VIRTUAL_H


typedef struct Pag_memoria_virtual {
    struct Pag_memoria_virtual* siguiente;
    size_t tamano;
    int procesando;
    int numero_pagina;
    void* direccion_de_mem;
}MEMORIA_VIRTUAL;

typedef struct dato_nodo_int{
    int proceso;
    int tamano;
    struct nodo_int* siguiente;
}Dato_nodo_int;

extern Pag_memoria_virtual* VM_pag_bloq_nuevo_nodo(int, size_t, int, void*);
extern Pag_memoria_virtual* VM_pag_bloq_nuevo_nodo_final(int, size_t, int, void*, Pag_memoria_virtual **);
extern dato_nodo_int* dato_nodo_int_nuevo_nodo(int, int);
extern dato_nodo_int* dato_nodo_int_nuevo_nodo_final(int, int, dato_nodo_int **);
extern int obtener_suma_proceso_mem(dato_nodo_int *);


#endif //UNTITLED_PAG_MEMORIA_VIRTUAL_H
