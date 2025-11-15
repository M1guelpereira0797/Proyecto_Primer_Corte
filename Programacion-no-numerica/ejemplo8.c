#include <stdio.h>

int global = 10;
static int es_global = 5; 

void f(void);

int main(){
for(int i = 0; i<3 ; i++);
f();
return 0;
}

void f (void){
    int local = 1;
    static int es_local = 2;
    local++;
    es_local++;
    printf("local = %d, es_local= %d, global= %d", local, es_local, global);
}