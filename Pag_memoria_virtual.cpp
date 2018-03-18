//
// Created by elias on 16/03/18.
//


#include <cstdlib>
#include "Pag_memoria_virtual.h"
#include "Pag_bloque_mem.h"

#define Memoria_página_virtual size_of(MEMORIA_VIRTUAL)
#define Tamano_pag 4096
#define Max_pag 256
#define Max_tamano_pag 0x256
//Asignar la memoria para la MV
/*_VIRTMEMPAGEBLOCKS* _virtmempageblockscreateNewNode(int process, size_t size, int pagenumber, void *memoryaddress)
{
    _VIRTMEMPAGEBLOCKS *newNode = NULL;
    newNode=(_VIRTMEMPAGEBLOCKS*)malloc(sizeof(_VIRTMEMPAGEBLOCKS));
    if(newNode == NULL) {
        printf("Memory allocation error\n");
        return NULL;
    }
    newNode->process = process;
    newNode->size = size;
    newNode->pagenumber=pagenumber;
    newNode->memoryaddress=memoryaddress;
    newNode->next = NULL;
    return newNode;
}


 function to insert new node at the end of list _PROCINTNODE
_PROCINTNODE* _procintinsertAtEnd(int process, int size, _PROCINTNODE **head)
{
    _PROCINTNODE *current = *head;
    if (current == NULL) {
        *head = _procintcreateNewNode(process, size);
    }else{
        while(current->next != NULL){
            current = current->next;
        }
        current->next = _procintcreateNewNode(process, size);
    }
    return *head;
}



/***************************************************************************/
/* function to insert new node at the end of list _VIRTMEMPAGEBLOCKS
_VIRTMEMPAGEBLOCKS* _virtmempageblocksinsertAtEnd(int process,size_t size,int pagenumber,
                                                  void *memoryaddress, _VIRTMEMPAGEBLOCKS **head)
{
    _VIRTMEMPAGEBLOCKS *current = *head;
    if (current == NULL) {
        *head = _virtmempageblockscreateNewNode(process, size, pagenumber, memoryaddress);
    }else{
        while(current->next != NULL){
            current = current->next;
        }
        current->next = _virtmempageblockscreateNewNode(process, size, pagenumber, memoryaddress);
    }
    return *head;
}
*/

void Paginacion_memoria_virtual(dato_nodo_int *dato_nodo_int1, Pag_memoria_virtual **pag_memoria_virtual,
                                Pag_bloque_mem **pag_bloque_mem){
    dato_nodo_int *temp = dato_nodo_int1;
    unsigned  int num_pag = 0;
    void* direccion = (void*)0x12345678;

    while(temp != NULL){
        if(temp->tamano < Tamano_pag){

        }
    }
}

void Pag* _virtmempageblocksinsertAtEnd(int ,size_t ,int ,void *, _VIRTMEMPAGEBLOCKS **);

