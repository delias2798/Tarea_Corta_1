//
// Created by elias on 20/03/18.
//

#include <clocale>
#include <cstdlib>
#include <cstdio>
#include "Obtener_datos_de_archivo.h"

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_createNewNode(char data) {
    _NODE *newNode = nullptr;
    newNode=(_NODE*)malloc(sizeof(_NODE));
    if(newNode == nullptr) {
        printf("Memory allocation error\n");
        return nullptr;
    }
    newNode->data = data;
    newNode->next = nullptr;
    return reinterpret_cast<Obtener_datos_de_archivo *>(newNode);
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_intcreateNewNode(int data) {
    _INTNODE *newNode = nullptr;
    newNode=(_INTNODE*)malloc(sizeof(_INTNODE));
    if(newNode == nullptr) {
        printf("Memory allocation error\n");
        return nullptr;
    }
    newNode->data = data;
    newNode->next = nullptr;
    return reinterpret_cast<Obtener_datos_de_archivo *>(newNode);
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_insertAtEnd(char data, _NODE **head) {
    _NODE *current = *head;
    if (current == nullptr) {
        *head = reinterpret_cast<_NODE *>(_createNewNode(data));
    }else{
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = reinterpret_cast<__node *>(_createNewNode(data));
    }
    return reinterpret_cast<Obtener_datos_de_archivo *>(*head);
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_intinsertAtEnd(int data, _INTNODE **head) {
    _INTNODE *current = *head;
    if (current == nullptr) {
        *head = reinterpret_cast<_INTNODE *>(_intcreateNewNode(data));
    }else{
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = reinterpret_cast<__intnode *>(_intcreateNewNode(data));
    }
    return reinterpret_cast<Obtener_datos_de_archivo *>(*head);
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_removeExtraSpaces(_NODE **head) {
    _NODE*current = *head;
    while(current->next != nullptr){
        if(current->data == ' '){
            if((current->next)->data == ' '){
                _NODE*temp = (current->next)->next;
                free(current->next);
                current->next = temp;
            }
        }
        current = current->next;
    }
    return reinterpret_cast<Obtener_datos_de_archivo *>(*head);
}

int Obtener_datos_de_archivo::_countINTNodes(_INTNODE *head) {
    int count=0;
    while(head != nullptr){
        count++;
        head=head->next;
    }
    return count;
}

void Obtener_datos_de_archivo::_deleteCharList(_NODE **head) {
    _NODE *current = *head;
    while(current->next != nullptr){
        *head = current->next;
        free(current);
        current=*head;
    }
}

void Obtener_datos_de_archivo::_deleteINTList(_INTNODE **inthead) {
    _INTNODE *current = *inthead;
    while(current != nullptr){
        *inthead = current->next;
        free(current);
        current=*inthead;
    }
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_deleteINTFront(_INTNODE **inthead) {
    _INTNODE *current = *inthead;
    if(current == nullptr) {
        printf("\nList is empty\n");
        return nullptr;
    }else{
        *inthead = current->next;
        free(current);
    }
    current = current->next;
    return reinterpret_cast<Obtener_datos_de_archivo *>(*inthead);
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_deleteINTEnd(_INTNODE **inthead) {
    _INTNODE *current = *inthead;

    if(_countINTNodes(current) >= 2){
        while((current->next)->next != nullptr){
            current=current->next;
        }
        free(current->next);
        current->next=nullptr;
    }else{
        return _deleteINTFront(&(*inthead));
    }

    return reinterpret_cast<Obtener_datos_de_archivo *>(*inthead);
}

Obtener_datos_de_archivo *Obtener_datos_de_archivo::_deleteINT_FromSecondNode(_INTNODE **inthead) {
    _INTNODE *headTemp = *inthead;
    if(_countINTNodes(*inthead) > 1){
        _INTNODE*current = (*inthead)->next;

        while(current != nullptr){
            if(current->data == 0){
                headTemp->next = current->next;
                free(current);
                current = headTemp->next;
            }else{
                break;
            }
        }
    }
    return reinterpret_cast<Obtener_datos_de_archivo *>(headTemp);
}

void Obtener_datos_de_archivo::_separateNumbDatas(_NODE *head, _INTNODE **inthead) {
    head = reinterpret_cast<_NODE *>(_insertAtEnd(' ', &head));
    _NODE*current = head;
    char holdStr[50];
    int index = 0;

    while(current != nullptr){
        if(current->data == ' '){
            holdStr[index] = '\0';
            _intinsertAtEnd(atoi(holdStr),&(*inthead));
            index = 0;
            holdStr[index] = '\0';
            current = current->next;
        }else{
            holdStr[index] = current->data;
            index++;
            current = current->next;
        }
    }
}

Obtener_datos_de_archivo * Obtener_datos_de_archivo::getProcessData(const char *filename) {
    _NODE* head = nullptr;
    _INTNODE *inthead = nullptr;
    FILE *fp;
    char readData;
    bool flag = false;

    fp=fopen(filename,"r");
    if(fp == nullptr) {
        printf("File openning error\n");
        exit(0);
    }

    //read each character from file
    do{
        readData = getc(fp);
        if(readData == ' '&& !flag){
            flag = false;
        }
        else{
            flag=true;
        }

        if(readData=='\t'){
            readData=' ';
        }
        /* check # character and EOF character occurs or not
        when # sign occurs keep reading data from file without adding it to list */
        if(readData == '#'){
            readData = ' ';
            char ch;
            while((ch=getc(fp)) != '\n' && ch != EOF){
            }
            readData = '\n';
        }

        //inserting each char value to linked list
        if(flag){
            head = reinterpret_cast<_NODE *>(_insertAtEnd(readData, &head));
        }

    } while(readData != EOF);

    fclose(fp);

    //remove extra spaces from char type linked list
    for(int i=0;i<5;i++){
        head = reinterpret_cast<_NODE *>(_removeExtraSpaces(&head));
    }

    //separate integer data values & store them into new linked list(inthead)
    _separateNumbDatas(head,&inthead);

    //delete unnecessary character(0),which is head
    _deleteINTFront(&inthead);

    //once intger list is created,then delete the character type list
    _deleteCharList(&head);
    free(head);


    return reinterpret_cast<Obtener_datos_de_archivo *>(inthead);

}
