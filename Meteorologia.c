#include<stdio.h>
#include<stdlib.h>
#include<time.h>

long tiemp1, tiemp2;
float dist;
unsigned char estado_bit= 0;


int main(){
    int numero;
    register unsigned int h;
    unsigned long j;
    float tiempo_seg;

    srand(time(NULL));
    
    printf("\033[2J\033[H"); 
   

    
    do{
        numero = rand() % 20001;
    }while (numero != 1000);


     estado_bit |= (1 << 7 );
     if(estado_bit & (1<< 7)){
        tiemp1 = clock();
        printf("Relampago detectado\n ");

    }
    j= rand() % 30001;

    for ( ; j >0 ; j--){
        for(h= 0; h< 5000; h++);

    }
    estado_bit |= (1<<6);
        if(estado_bit & (1<<6)){
            tiemp2= clock();
            printf("Trueno detectado\n ");
    }


    tiempo_seg = (tiemp2 - tiemp1)/18.2;
    dist = tiempo_seg * 330;

    printf("\nRESULTADOS \n");
    printf("El tiempo del relampago fue: %ld\n", tiemp1);
    printf("El tiempo del trueno  fue:   %ld\n", tiemp2);
    printf("Distancia del rayo fue: %.2f metros\n", dist);

    return 0;
}


