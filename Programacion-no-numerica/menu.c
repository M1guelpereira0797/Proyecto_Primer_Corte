#include<stdio.h>

int main(){
    int opcion;
    while(opcion != 3) {
        printf("Saludar\n");
        printf("Sumar 2 numeros\n");
        printf("Salir\n");
        printf("Escoge una opcion: ");
        scanf("%i", &opcion); 
        switch (opcion)
        {
        case 1:
            printf("HOLA");
            break;
         case 2:{
            int a , b;
            printf("\nIngrese dos numeros: ");
            scanf("%d %d", &a, &b);
            printf("\nTotal de suma: %d ", a+b);
            break;
        }
        case 3: 
            printf("Fin de programa");
            break;
        default:
            printf("Opcion invalida");
        }
    } 
    return 0;
}