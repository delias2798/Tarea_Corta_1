//
// Created by elias on 20/03/18.
//

#include "Paginacion.h"
#include "Nodo_pag_int.h"
#include "Pag_memoria_virtual.h"
#include "Pag_bloque_mem.h"
#include "Obtener_datos_de_archivo.h"


#define Tamano_pag 4096
#define Max_pag 256
#define Tamano_mem_pag 0x256


void Paginacion::paginacion(Dato_nodo_int *dato_nodo_int1, Pag_memoria_virtual **pag_memoria_virtual,
                            Pag_bloque_mem **pag_bloque_mem){
    Dato_nodo_int *temp = dato_nodo_int1;
    unsigned int num_pag = 0;
    void* direccion = (void*)0x12345678;
    MEMORIA_VIRTUAL* memoria = new MEMORIA_VIRTUAL();

    while(temp != nullptr){
        if(temp->tamano < Tamano_pag){
            memoria->VM_pag_bloq_nuevo_nodo_final(temp->proceso, Tamano_pag, num_pag, direccion, &(*pag_memoria_virtual));
            temp = temp->siguiente;
        } else{
            memoria->VM_pag_bloq_nuevo_nodo_final(temp->proceso, Tamano_pag, num_pag, direccion, &(*pag_memoria_virtual));
            temp->tamano = (temp->tamano - Tamano_pag);
            num_pag++;
            direccion += Tamano_mem_pag;
        }
    }

    for (int i = 0; i < Max_pag; ++i) {
        Pag_Bloque_Mem* blo = new Pag_Bloque_Mem();
        blo->asignar_siguiente_bloque_pag(Tamano_mem_pag, &(*pag_bloque_mem));
    }
}


void Paginacion::mapear_VM_tabla(MEMORIA_VIRTUAL **memoria_virtual, Pag_Bloque_Mem **pag_bloque_mem) {
    Pag_Bloque_Mem* mem_temp = *pag_bloque_mem;
    //Pag_Bloque_Mem* mem_temp_2 = *pag_bloque_mem;
    MEMORIA_VIRTUAL* mvirtual_temp = *memoria_virtual;
    //Pag_Bloque_Mem* bloque_temp = NULL;
    int contador = 0;


    printf("\n[ Memory mapped Virtual/Physical Page Table ]\n");
    printf("\n-----------------------------------------------------------------------------------");
    printf("\n|    Process    |    PageNumber    |    VirtualAddress    |    PhysicalAddress    |\n");
    printf("-----------------------------------------------------------------------------------\n");

    while(mem_temp != nullptr){
        if(mem_temp->vacio){
            printf("|       P%d      |        %d         |     %p       |        %p      |\n",
                   mvirtual_temp->proceso, mvirtual_temp->numero_pagina, mvirtual_temp->direccion_de_mem, mvirtual_temp->direccion_de_mem);

            mem_temp->vacio = false;
            contador++;

            /* do your work here on allocated memory
                declare your program loader code here
            */

            if(contador == 256){
                printf("***- 1MB block of pages loaded -***\n");
                contador = 0;
            }
        }

        mvirtual_temp = mvirtual_temp->siguiente;
        mem_temp = mem_temp->siguiente;

        if(mvirtual_temp == nullptr){
            goto exitLoop;
        }
    }

    printf("-----------------------------------------------------------------------------------\n");


    //free the allocated memory(_MEMPAGEBLOCKS)
    mem_temp = *pag_bloque_mem;
    while(mem_temp != nullptr){
        if(!(mem_temp->vacio)){
            mem_temp->vacio = true;
            printf("Memory Frame freed, Address = %p\n", mem_temp->dir_memoria);
        }
        mem_temp = mem_temp->siguiente;
    }

    //call again function to complete all processes
    mapear_VM_tabla(reinterpret_cast<MEMORIA_VIRTUAL **>(&mvirtual_temp), &(*pag_bloque_mem));

    exitLoop:

    //free the allocated memory(_MEMPAGEBLOCKS)
    mem_temp = *pag_bloque_mem;
    while(mem_temp != nullptr){
        if(!(mem_temp->vacio)){
            mem_temp->vacio = true;
            printf("Memory Frame freed, Address = %p\n", mem_temp->dir_memoria);
        }
        mem_temp = mem_temp->siguiente;
    }
}

void Paginacion::asignar_paginado(Pag_Bloque_Mem * Bloque_mem, MEMORIA_VIRTUAL *memoria_virtual_, Pag_Bloque_Mem *bloque_mem_2, const char *input) {
    Obtener_datos* lista_datos = new Obtener_datos();
    lista_datos->getProcessData(input);
    Nodo_pag_int* nodo_pag_int = nullptr;
    nodo_pag_int = nodo_pag_int->obtener_dato(lista_datos,&nodo_pag_int);
    printf("\n\n\t* Reading data from file \"%s\"......\n", input);
    paginacion(nodo_pag_int, &memoria_virtual_, &bloque_mem_2);
    printf("\n\n\t[Allocate memory using Paging]\n");
    mapear_VM_tabla(&memoria_virtual_, &bloque_mem_2);

}
