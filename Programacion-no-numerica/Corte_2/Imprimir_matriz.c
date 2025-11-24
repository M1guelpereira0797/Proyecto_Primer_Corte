#include <stdio.h>

void imprimirMatriz(int matriz[][3], int filas);

int main(){
    int datos[3][3]= {{0,1,2}, {3,4,5}, {6,7,8}};
    imprimirMatriz(datos, 3);
    return 0; 
}


void imprimirMatriz(int matriz[][3], int filas){
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < 3; j++){
            printf(" %d  ", matriz[i][j]);
        }
        printf("\n");
    }
}