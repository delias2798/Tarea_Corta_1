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
    int proceso;
    int numero_pagina;
    void* direccion_de_mem;
    Pag_memoria_virtual* VM_pag_bloq_nuevo_nodo(int, size_t, int, void*);
    Pag_memoria_virtual* VM_pag_bloq_nuevo_nodo_final(int, size_t, int, void*, Pag_memoria_virtual **);

}MEMORIA_VIRTUAL;




#endif //UNTITLED_PAG_MEMORIA_VIRTUAL_H
