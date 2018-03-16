#include <iostream>
#include "Lista_Simple.h"
#include "Nodo_simple_punteros.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    int i, n, x;
    int *p_escogidos, *p_totales;

    Lista_Simple<int>* productos = (Lista_Simple<int>*)malloc(sizeof(Lista_Simple<int>));
    //scanf("%d",&n);

    std::cout << sizeof(productos) << std::endl;
    //Lista_Simple<int> productos;
    productos->insertar_inicio(1);
    productos->insertar_inicio(2);
    productos->insertar_inicio(3);
    productos->insertar_inicio(4);
    productos->insertar_inicio(5);
    productos->insertar_inicio(6);
    productos->insertar_inicio(7);
    productos->insertar_inicio(8);
    productos->insertar_inicio(9);
    productos->insertar_inicio(10);
    productos->imprimir();

    //Lista Con Punteros
    BLOQUE_NODO* Bloque_memoria = NULL;
    asignar_sig_bloque(10,&Bloque_memoria);
    asignar_sig_bloque(32,&Bloque_memoria);
    asignar_sig_bloque(62,&Bloque_memoria);
    asignar_sig_bloque(800,&Bloque_memoria);
    asignar_sig_bloque(1,&Bloque_memoria);
    asignar_sig_bloque(1,&Bloque_memoria);

    imprimir_bloques(Bloque_memoria);

    printf("\nAfter freeing second node\n");
    liberar_bloque_mem(&(Bloque_memoria->siguiente));
    imprimir_bloques(Bloque_memoria);
    /*
    Bloque_de_memoria->asignar_sig_bloque(34, Bloque_de_memoria);
    Bloque_de_memoria->asignar_sig_bloque(34, Bloque_de_memoria);*/

    //Guarda espacio en la memoria para todos los productos.
    p_totales = (int*)calloc(11, sizeof(int));
    printf("Escoja entre los siguientes productos:\n 1-Spaghetti \n 2-Tomates \n 3-Arroz \n 4-Frijoles"
                   "\n 5-Bananos \n 6-Aguacate \n 7-Papas \n 8-Jamón \n 9-Pepinillo \n 10-Cebolla \n",n);

    //Guarda espacio en la memoria para los productos del mostrador.
    for( x=0 ; x < 10 ; x++ ) {
        scanf("1-10",&p_totales[x]);
    }
    p_escogidos = (int*)calloc(3, sizeof(int));

    for( i=0 ; i < 3 ; i++ ) {
        scanf("%d",&p_escogidos[i]);
    }

    printf("The numbers entered are: ");
    for( i=0 ; i < 3 ; i++ ) {
        printf("%d ",p_escogidos[i]);
    }

    productos->imprimir();

    productos->insertar_inicio(20);
    productos->imprimir();
    std::cout << p_totales << std::endl;
    std::cout << sizeof(productos) << std::endl;

    free( p_escogidos );
    free( p_totales );
    free(productos);

    return(0);
}