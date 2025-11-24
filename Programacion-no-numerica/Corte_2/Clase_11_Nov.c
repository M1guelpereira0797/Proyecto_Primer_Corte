#include <stdio.h>
#include <stdlib.h>


int main(){
    int matriz[2][3][2][2] = {  
     {1, 2}, 
    {3, 4 }, 
    {5, 6 },
    {},
    {}};

    for(int i =0; i < 3; i++){
        for (int j = 0; j<2 ; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
    
}