#include <stdio.h>
#include <stdlib.h>
#define TAM 15

int main(void){
    int i,contador;
    float vetor[TAM],aux,min,max;

    printf("Digite 15 valores para o Vetor: \n");

    for(i = 0; i < TAM; i++){
        scanf("%f",&vetor[i]);
    }
    
    printf("A sequencia do Vetor e: ");

    for(i = 0; i < TAM; i++){
        printf("\n%.1f",vetor[i]);
    }

    for(contador = 1; contador < TAM; contador++){
        for(i = 0; i < TAM - 1; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }

    printf("\nA ordem correta e: ");
    for(i = 0; i < TAM; i++){
        printf("\n%.1f",vetor[i]);
    }

    min = vetor[0];
    max = vetor[14];

    printf("\nMenor Vetor + Maior Vetor = %.1f",min + max);
}