//
// Created by elias on 20/03/18.
//

#ifndef UNTITLED_NODO_PAG_INT_H
#define UNTITLED_NODO_PAG_INT_H


#include "Nodo_simple.h"
#include "Obtener_datos_de_archivo.h"

typedef struct Nodo_pag_int{
    int proceso;
    int tamano;
    Nodo_pag_int *siguiente;
    Nodo_pag_int* crear_nuevo_nodo(int, int);
    Nodo_pag_int* insertar_nodo_final(int, int, Nodo_pag_int**);
    Nodo_pag_int* obtener_dato(Obtener_datos_de_archivo *, Nodo_pag_int**);
    int obtener_tamano_total_proceso(Nodo_pag_int*);
    int contar_nodos(Nodo_pag_int*);
    void borra_nodo(Nodo_pag_int**);

}Dato_nodo_int;

#endif //UNTITLED_NODO_PAG_INT_H
