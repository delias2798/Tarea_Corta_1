//
// Created by elias on 16/03/18.
//

#ifndef UNTITLED_NODO_SIMPLE_PUNTEROS_H
#define UNTITLED_NODO_SIMPLE_PUNTEROS_H


#include <cstddef>


typedef struct Nodo_simple_punteros {
    struct Nodo_simple_punteros* siguiente;
    bool vacio;
    void* direccion_de_memoria;
    size_t tamano;


}BLOQUE_NODO;



extern void asignar_sig_bloque(size_t , BLOQUE_NODO **);
extern void liberar_bloque_mem(BLOQUE_NODO **);
extern void imprimir_bloques(BLOQUE_NODO *);


#endif //UNTITLED_NODO_SIMPLE_PUNTEROS_H
