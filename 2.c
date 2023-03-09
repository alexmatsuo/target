#include <stdio.h>

int main(){
    int ent,aux;
    int pertence = 0;
    int v1=0,v2=1;
    scanf("%d",&ent);
    
    //verifica se o numero esta na sequencia
    while (v2 <= ent) {
        if (v2 == ent) {
            pertence = 1;
        }
        //proximo numero
        aux = v1 + v2;
        v1 = v2;
        v2 = aux;
    }

    if(pertence)
        printf("Pertence a sequencia\n");
    else
        printf("NAO Pertence a sequencia\n");
    return 0;
}