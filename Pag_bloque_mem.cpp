//
// Created by elias on 17/03/18.
//

#include <cstddef>
#include <unistd.h>
#include "Pag_bloque_mem.h"

Pag_Bloque_Mem *asignar_bloque_pag(size_t tamano){
    Pag_Bloque_Mem *bloque = (Pag_Bloque_Mem*)sbrk(0);
    if(sbrk(Tamano_bloque_pag_mem + tamano) == (void*) - 1){ return NULL;}
    else{
        sbrk(Tamano_bloque_pag_mem + tamano);
        bloque->siguiente = NULL;
        bloque->vacio = true;
        bloque->dir_memoria = sbrk(0);
        return bloque;
    }
}

void asignar_bloque_pag(size_t tamano, Pag_bloque_mem **cabeza){
    Pag_bloque_mem *temp = *cabeza;
    void *asignar_mem = NULL;
    if (temp == NULL){*cabeza = asignar_bloque_pag(tamano);}
    else{
        while(temp->siguiente != NULL){
            temp = temp->siguiente;
        }
        Pag_bloque_mem *nuevo_bloque = (Pag_bloque_mem*)sbrk(0);
        asignar_mem = sbrk(Tamano_bloque_pag_mem + tamano);
        if(asignar_mem == (void*) - 1){}
        else{
            sbrk(Tamano_bloque_pag_mem + tamano);
            nuevo_bloque->siguiente = NULL;
            nuevo_bloque->vacio = true;
            nuevo_bloque->dir_memoria = sbrk(0);
            temp->siguiente = nuevo_bloque;
        }
    }
}