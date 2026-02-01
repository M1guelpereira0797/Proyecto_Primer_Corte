#include<stdio.h>
#include<stdlib.h>


int main(){

    int arreglo[5]= {10, 20, 30, 40, 50};
    int *puntero_arreglo = arreglo; 

    for( int i = 0; i < 5 ; i++){
        printf(" %d, " , *puntero_arreglo);
        puntero_arreglo = puntero_arreglo + 1;
        
    }
    printf("\n %d, ", puntero_arreglo-arreglo);

}
