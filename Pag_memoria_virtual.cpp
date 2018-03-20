//
// Created by elias on 16/03/18.
//


#include <cstdlib>
#include "Pag_memoria_virtual.h"

#define Memoria_página_virtual size_of(MEMORIA_VIRTUAL)

//Asignar la memoria para la MV
Pag_memoria_virtual*
Pag_memoria_virtual::VM_pag_bloq_nuevo_nodo(int proceso, size_t tamano, int num_pagina, void *dir_memoria)
{
    Pag_memoria_virtual*nuevo_nodo= NULL;
    nuevo_nodo = (Pag_memoria_virtual*)malloc(sizeof(Pag_memoria_virtual));
    if(nuevo_nodo == NULL) {
        printf("Memory allocation error\n");
        return NULL;
    }
    nuevo_nodo->proceso = proceso;
    nuevo_nodo->tamano = tamano;
    nuevo_nodo->numero_pagina = num_pagina;
    nuevo_nodo->direccion_de_mem = dir_memoria;
    nuevo_nodo->siguiente = NULL;
    return nuevo_nodo;
}





/***************************************************************************/
/* function to insert new node at the end of list _VIRTMEMPAGEBLOCKS*/
Pag_memoria_virtual*
Pag_memoria_virtual::VM_pag_bloq_nuevo_nodo_final(int proceso,size_t tamano,int num_pagina,
                                                  void *dir_memoria, Pag_memoria_virtual **cabeza)
{
    Pag_memoria_virtual *temp = *cabeza;
    if (temp == NULL) {
        *cabeza = VM_pag_bloq_nuevo_nodo(proceso, tamano, num_pagina, dir_memoria);
    }else{
        while(temp->siguiente != NULL){
            temp = temp->siguiente;
        }
        temp->siguiente = VM_pag_bloq_nuevo_nodo(proceso, tamano, num_pagina, dir_memoria);
    }
    return *cabeza;
}

