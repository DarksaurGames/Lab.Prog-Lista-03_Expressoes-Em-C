#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

int main(void){
    char str1[TAM];
    char str2[TAM];
    int resp;

    printf("Digite uma palavra: ");
    scanf("%s",str1);
    printf("Digite outra palavra: ");
   scanf("%s",str2);

    resp = strcmp(str1,str2);

    printf("Valor retornado na comparacao: %d\n",resp);

    if(resp == 0){
        printf("Strings IGUAIS!");
    }else{
        printf("Strings DIFERENTES!");
    }
}