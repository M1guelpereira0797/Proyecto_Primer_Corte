#include<stdio.h>
#include<stdlib.h>
#include<time.h>

    int capital_jugador= 1000;
    int capital_casino = 10000;

int main(){

    int  cantidad_jugador, numero_casino, numero_jugador, total_ganado;
    char opcion, salir;

   
    printf (" \033[2 J \033[ H" );
   
    printf("Desea jugar con un numero impar, ingrese i\n");
    printf("Desea jugar con un numero par, ingrese p \n");
    printf("Si desea salir del juego, ingrese s o S\n");
    printf("Seleccione una opcion para jugar: \n");
    scanf("%c", &opcion);
       
    (opcion == 's' || opcion == 'S') 
        ? (printf("Has salido del juego, muchas gracias\n"), exit(0)) 
        : (opcion != 'i' && opcion != 'p') 
            ? (printf("Opción invalida\n"), exit(0)) 
            : printf("Comienza el juego\n");
             
            
            
    while (1)
    {
        (capital_jugador <= 0)  ? (printf("Tu capital a llegado a %d, tienes que recargar\n", capital_jugador), exit(0)): printf("Tu capital a llegado a : %d\n", capital_jugador);
        
        (capital_casino <= 0 )? (printf("El capital del banco a llegado a %d \n", capital_casino), exit(0)) : printf("El capital del casino es: %d\n", capital_casino);

        
    
       printf("Su capital es de: %d\n", capital_jugador);
       printf("Ingrese la cantidad que desee apostar: \n"); 
       scanf("%d", &cantidad_jugador);

       srand(time(NULL));

       (cantidad_jugador > capital_jugador || cantidad_jugador > capital_casino) ? (printf("La cantidad ingresada es superar a tu capital\n "), exit(0)): printf("  Ingreso la cantidad correcta\n ");  

       printf("Ingrese el numero que desea jugar: \n"); 
       scanf("%d", &numero_jugador);
       getchar(); 

       (numero_jugador < 0  || numero_jugador >  37 ) ? (printf(" Ingrese un numero en el rango de los valores de 0  y 36"), exit(0)): (void)0;

       numero_casino = rand() %37;
       printf("El casino seleccione el numero %d \n", numero_casino );
       
       ((numero_jugador %2  ) != (numero_casino %2 ))? printf("Los 2 numeros seleccionados fueron impares: %d %d\n", numero_jugador, numero_casino) : printf("Los 2 numeros seleccionados fueron pares: %d %d\n", numero_jugador, numero_casino);

        total_ganado = ((numero_jugador %2 )) == (numero_casino %2) ? cantidad_jugador * 1 : -cantidad_jugador;

        capital_jugador += total_ganado;
        capital_casino -= total_ganado;

        (total_ganado > 0 ) ? printf("Has ganado, tu capital es de: %d \n", capital_jugador) : printf("Has perdido de tu capital es de: %d\n ", cantidad_jugador);
        (total_ganado > 0 ) ? printf("La perdida del casino es de: %d \n", capital_casino) : printf("La ganacancia del casino es de: %d\n ", capital_casino);

       

        printf("Desea seguir jugando? (s para salir, cualquier otra para continuar): ");
        scanf(" %c", &salir);

        (salir == 's' || salir == 'S') ? (printf("Gracias por jugar. ¡Hasta la proxima!\n"), exit(0)): printf("Continuamos...\n");
        getchar(); 

      
    }




}