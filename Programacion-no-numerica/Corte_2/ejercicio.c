#include <stdio.h> 

void impirmir(int arreglo[], int n);

int main (){
    int datos[5] = {10 , 20, 30, 40 , 50};

    imprimir(datos,5);
    return 0;

}

void imprimir (int arreglo[], int n){
    for(int i = 0; i<n; i++){
        printf("%d\n", arreglo[i]);
    }
    printf("\n");
}