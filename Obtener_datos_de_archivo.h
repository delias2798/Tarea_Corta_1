//
// Created by elias on 20/03/18.
//

#ifndef UNTITLED_OBTENER_DATOS_DE_ARCHIVO_H
#define UNTITLED_OBTENER_DATOS_DE_ARCHIVO_H

typedef struct __node {
    char data;
    struct __node *next;
}_NODE;


//structure to store integer data
typedef struct __intnode {
    int data;
    struct __intnode *next;
}_INTNODE;

typedef struct Obtener_datos_de_archivo {
    Obtener_datos_de_archivo * _createNewNode(char );
    Obtener_datos_de_archivo * _insertAtEnd(char , _NODE **);
    void _deleteCharList(_NODE **);
    Obtener_datos_de_archivo * _removeExtraSpaces(_NODE** );
    Obtener_datos_de_archivo * _intcreateNewNode(int );
    Obtener_datos_de_archivo * _intinsertAtEnd(int , _INTNODE **);
    int _countINTNodes(_INTNODE *);
    void _deleteINTList(_INTNODE **);
    Obtener_datos_de_archivo *_deleteINTFront(_INTNODE **);
    Obtener_datos_de_archivo *_deleteINTEnd(_INTNODE **);
    Obtener_datos_de_archivo * _deleteINT_FromSecondNode(_INTNODE **);
    void _separateNumbDatas(_NODE *head, _INTNODE **);

    Obtener_datos_de_archivo *getProcessData(const char *);
}Obtener_datos;


#endif //UNTITLED_OBTENER_DATOS_DE_ARCHIVO_H
