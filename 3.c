#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"
#define TAM 30

int main(){
    FILE* fp = fopen("dados.json", "r");
    char buffer[10000];
    fread(buffer, 1, 10000, fp);
    cJSON* root = cJSON_Parse(buffer);
    cJSON* dayvalue;
    double menor,maior,vetor[TAM],media;
    int i=0;
    //percorre arquivo para pegar valores
    cJSON_ArrayForEach(dayvalue, root){
        cJSON* dia = cJSON_GetObjectItem(dayvalue, "dia");
        cJSON* valor = cJSON_GetObjectItem(dayvalue, "valor");
        //armazena no vetor os valores
        vetor[i] = valor->valuedouble;
        i++;
    }
    menor = vetor[0];
    maior = vetor[0];
    //acha o menor faturamento
    for(i=1;i<TAM;i++){
        if(vetor[i] != 0 && vetor[i] < menor)
            menor = vetor[i];
    }
    //acha o maior faturamento
    for(i=1;i<TAM;i++){
        if(vetor[i] > maior)
            maior = vetor[i];
    }

    printf("Menor Faturamento: %.4f\n",menor);
    printf("Maior Faturamento: %.4f\n",maior);

    //calcula media
    media=0;
    int j=0;
    for(i=0;i<TAM;i++){
        if(vetor[i] != 0){
            media += vetor[i];
            j++;
        }
    }
    media = media/j;
    
    //calcula n de dias superiorres
    int superior=0;
    for(i=0;i<TAM;i++){
        if(vetor[i] > media)
            superior++;
    }
    
    printf("Numero de dias no mes superior a media mensal: %d\n",superior);

    return 0;
}