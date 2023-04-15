#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int contarStr(char str[TAM]){
    int i = 0,contador = 0;
    for(i = 0; i < TAM; i++){
        if(str[i] != '\0'){
            contador++;
        }else{
            return contador;
        }
    }

    return contador;
}

int main(int argc, char *argv[]){
    char palavra[TAM];

    printf("Digite uma palavra: ");
    scanf("%s",palavra);

    printf("Qtd. de caracteres da String fornecida: %d\n",contarStr(palavra));

    system("PAUSE");
    return 0;
}