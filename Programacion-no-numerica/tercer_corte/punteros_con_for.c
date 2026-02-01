#include <stdio.h>

int main() {
    char *p = "hola";

    for (int i = 0; p[i] != '\0'; i++) {
        printf("%c\n", p[i]);
    }

    return 0;
}