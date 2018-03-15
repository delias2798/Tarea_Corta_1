#include <iostream>
#include "Lista_Simple.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    int i, n, x;
    int *p_escogidos, *p_totales;

    //scanf("%d",&n);

    Lista_Simple<int> productos;
    productos.insertar_inicio(1);
    productos.insertar_inicio(2);
    productos.insertar_inicio(3);
    productos.insertar_inicio(4);
    productos.insertar_inicio(5);
    productos.insertar_inicio(6);
    productos.insertar_inicio(7);
    productos.insertar_inicio(8);
    productos.insertar_inicio(9);
    productos.insertar_inicio(10);
    productos.imprimir();
    //Guarda espacio en la memoria para todos los productos.
    p_totales = (int*)calloc(10, sizeof(int));
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

    productos.imprimir();

    std::cout << p_totales << std::endl;
    free( p_escogidos );
    free( p_totales );


    return(0);
}