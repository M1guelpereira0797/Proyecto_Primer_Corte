#include <stdio.h>

const double uno = 1;
const double dos = 2;
int main(){
    double epsilon = 1;
    int contador =0;
    while (uno +  epsilon / dos >uno)
    {
        epsilon = epsilon/dos;
        contador += 1;

    }
    printf("%e\n , %d\n", epsilon, contador);
}