#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void){
    int i, contador, aux,intervalo;
    int vetor[TAM];

    srand(time(NULL));

    printf("Deseja preencher o vetor com valores de qual intervalo? ");
    scanf("%d",&intervalo);

    for(i = 0; i < TAM; i++){
        vetor[i] = rand() % intervalo;
    }
    
    printf("A sequencia do vetor e:\n");
    for(i = 0; i < TAM; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
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

    printf("Agora, a sequencia ordenada do vetor e:\n");
    for(i = 0; i < TAM; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }

}