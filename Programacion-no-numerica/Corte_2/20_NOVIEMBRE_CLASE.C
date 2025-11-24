/*#include <stdio.h>

int sucesor(int x);
int sumar_1(int x,6);



int main(){
    int variable = 0;
    int suc = sucesor(variable);
    printf("valor de original: %d, %d \n", variable, suc);
}

int sucesor(int x){
    return ++x;
}

    */

#include <stdio.h>

int sucesor(int x);
int sumar_uno(int vector[],int n);



int main(){
    int variable = 0;
    int suc = sucesor(variable);
    printf("valor de original: %d, %d \n", variable, suc);

    int arregle_original[] = {0,0,0,0,0,0};
    for(int i = 0; i < 6; i++){
     printf ("Vector %d", arreglo_original[i]);
    }
    sumar_uno(arreglo_original,6);
    for(int i = 0; i<6; i++){
            printf("%d", arreglo_original[i]);
        }
    }



}
int sucesor(int x){
    return ++x;
    }

void sumar_uno( int vector[],int n){
    ++vector[0];
    for(int i = 0; i < n; i++){
        printf ("Vector %d",vector[i]);
    }
    
}