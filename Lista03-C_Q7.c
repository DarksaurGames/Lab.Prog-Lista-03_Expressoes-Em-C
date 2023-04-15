#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define TAM 3

int main(void){
    int numeros[TAM],soma = 0,contador = 0,multiplic = 1;
    float mediarit = 0,mediageom = 0;

    srand(time(NULL));
    for(int i = 0; i < TAM; i++){
        numeros[i] = rand() % 19;
    }

    for(int i = 0; i < TAM; i++){
        printf("numeros[%d] = %d\n",i,numeros[i]);
    }  

    for(int i = 0; i < TAM; i++){
        soma += numeros[i];
        contador++;
    }

    mediarit = soma/contador;

    printf("Soma = %d\n",soma);
    printf("Quantidade = %d\n",contador);
    printf("MEDIA ARITMETICA = %.1f\n",mediarit);

    contador = 0;

    for(int i = 0; i < TAM; i++){
        multiplic *= numeros[i];
        contador++;
    }

    mediageom = pow(multiplic,1.0/contador);

    printf("Multiplicacao = %d\n",multiplic);
    printf("Quantidade = %d\n",contador);
    printf("MEDIA GEOMETRICA = %.1f\n",mediageom);
    
    }