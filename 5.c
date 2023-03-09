#include <stdio.h>
#include <string.h>
#define TAM 10
int main(){
    char reverse[TAM] = "Ola Mundo";
    printf("Antes: %s\n",reverse);
    char aux;
    for(int i=0;i<strlen(reverse)/2;i++){
        aux=reverse[i];
        reverse[i]=reverse[strlen(reverse)-i-1];
        reverse[strlen(reverse)-i-1]=aux;
    }
    printf("Depois: %s\n",reverse);

    return 0;
}