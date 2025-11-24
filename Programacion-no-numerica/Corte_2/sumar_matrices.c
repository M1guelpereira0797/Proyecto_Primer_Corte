#include <stdio.h>

int sumamatriz(int matriz[][3], int filas);

int main(){
 
    int datos[3][3]= {{0,1,2}, {3,4,5}, {6,7,8}};
    int resultado = sumamatriz(datos, 3);
    printf("%d", resultado);
    return 0; 
}

int sumamatriz(int matriz[][3], int filas){
       int s = 0; 
    for(int i = 0; i < filas ; i++){
        for(int j=0; j < 3 ; j++){
            s+= matriz[i][j];
        }
    }
    return s;
        


}