#include <stdio.h>

int main() {
    int matriz[5][5][5][5];

    // Inicializamos con un valor único para cada elemento
    int valor = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                for (int l = 0; l < 5; l++) {
                    matriz[i][j][k][l] = valor++;
                }
            }
        }
    }

    // Imprimimos los 625 elementos uno por uno
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            for (int k = 0; k < 5; k++) {
                for (int l = 0; l < 5; l++) {
                    printf("matriz[%d][%d][%d][%d] = %d\n",
                           i, j, k, l, matriz[i][j][k][l]);
                }
            }
        }
    }

    return 0;
}
