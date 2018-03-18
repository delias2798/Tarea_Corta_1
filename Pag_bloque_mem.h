//
// Created by elias on 17/03/18.
//

#ifndef UNTITLED_PAG_BLOQUE_MEM_H
#define UNTITLED_PAG_BLOQUE_MEM_H


typedef struct Pag_bloque_mem {
    struct Pag_bloque_mem *siguiente;
    bool vacio;
    void *dir_memoria;
}Pag_Bloque_Mem;

#define Tamano_bloque_pag_mem sizeof(Pag_Bloque_Mem)

#endif //UNTITLED_PAG_BLOQUE_MEM_H
