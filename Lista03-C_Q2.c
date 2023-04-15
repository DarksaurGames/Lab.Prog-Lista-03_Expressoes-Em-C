#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

int main(void){
    char caractere;
    char palavra[TAM];

    srand(time(NULL));

    caractere = rand() % 100;

    printf("Caractere de Acesso do Usuario: %c\n",caractere);

    printf("Para acessar o sistema, digite um termo onde o primeiro caractere seja o de acesso do usuario.\n");

    printf("Digite o termo: ");

    for(int i = 0; i < TAM; i++){
        scanf("%c",&palavra[i]);
    }

    for(int i = 0; i < TAM; i++){
        if(palavra[i] == caractere){
            printf("Acesso Permitido! String de Entrada CONTEM o caractere de acesso do usuario como primeiro elemento.");
            break;
        }else{
            printf("Acesso Bloqueado! String de Entrada NAO CONTEM o caractere de acesso do usuario como primeiro elemento.");
            break;
        }
    }

}