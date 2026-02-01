#include <stdio.h>

int main() {
    char *p = "hola";

    while (*p != '\0') {
        printf("%c\n", *p);
        p++;
    }

    return 0;
}