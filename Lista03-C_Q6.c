#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 100

/*int main(void){
    char str[TAM];

    printf("Digite uma palavra: ");
    scanf("%s",str);

   do{
    printf("%s",str[a]);
    a--;
   }while(str[a] > 0);
    
    for(int i = TAM; i > str[0]; i--){
        printf("%s",str[i]);
    }
}*/
int main(void){

char str[TAM];
int tamanho;

    printf("Digite uma palavra: ");
    scanf("%s",str);
   //scanf("%254[^\n]", nome);

   tamanho = strlen(str);

    for(int i = tamanho - 1; i >= 0; i--){

    printf("%c",str[i]);

    }
}

/*Explicação: você deve utilizar o #define TAM para delimitar a quantidade de memória que se deseja usar com
o vetor. Após escrever uma string nesse mesmo vetor, através do "scanf( )", você deve utilizar uma
variável criada somente para coletar o tamanho da string escrita e já delimitada. Assim, na hora de
declarar um laço de repetição "for", torne o ponto de partida "i = tamanho - 1" (para desconsiderar
o último espaço:'\0'), a condição de funcionamento sendo "i >= 0" (para o laço ir do caractere mais à direita,
ou mais "alto", até o "menor", o inicial e de posição 0, à esquerda, assim passando por toda a string) e
o ponto de progressão sendo "i--" (para que o i vá do caractere mais à direita pro mais à esquerda, escrevendo
a string de trás pra frente).*/
