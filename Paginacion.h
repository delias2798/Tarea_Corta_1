//
// Created by elias on 20/03/18.
//

#ifndef UNTITLED_PAGINACION_H
#define UNTITLED_PAGINACION_H


#include "Nodo_pag_int.h"
#include "Pag_memoria_virtual.h"
#include "Pag_bloque_mem.h"
/*
typedef struct __s_block{
    struct __s_block *next;
    struct __s_block *prev;
    bool isfree;
    size_t size;
}_SBLOCK;*/

class Paginacion {
    void paginacion(Nodo_pag_int*, MEMORIA_VIRTUAL**, Pag_Bloque_Mem**);
    void mapear_VM_tabla(MEMORIA_VIRTUAL**, Pag_Bloque_Mem**);

public:
    void asignar_paginado(Pag_Bloque_Mem*, MEMORIA_VIRTUAL*, Pag_Bloque_Mem*, const char*);
};


#endif //UNTITLED_PAGINACION_H
