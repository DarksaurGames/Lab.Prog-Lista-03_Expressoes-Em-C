#include <stdio.h>
#include <string.h>
#define TAM 100

int main(void){
    char str1[TAM];
    char str2[TAM];

    printf("Digite uma palavra: ");
    scanf("%s",str1);
    printf("Digite outra palavra: ");
    scanf("%s",str2);

    strcat(str1,str2);

    printf("%s",str1);
}