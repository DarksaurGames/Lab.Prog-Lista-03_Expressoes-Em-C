#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void){
    char str1[TAM];
    char str2[TAM];
    int resp;

    printf("Digite uma palavra: ");
    scanf("%s",str1);
    printf("Digite outra palavra: ");
   scanf("%s",str2);

   /*for(int i = 0; i < TAM; i++){
    for(int a = 0; a < TAM; a++){
        if(str1[i] == str2[a]){
            resp += 0;
        }
    }
   }*/
   
   if(strlen(str1) == strlen(str2) && str1 == str2){
        printf("Strings IGUAIS!");
    }else{
        printf("Strings DIFERENTES!");
    }
}