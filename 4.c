#include <stdio.h>

int main(){
    double SP=67836.43;
    double RJ=36678.66;
    double MG=29229.88;
    double ES=27165.48;
    double Outros=19849.53;

    double total = SP+RJ+MG+ES+Outros;

    printf("SP: %f\n",SP/total);
    printf("RJ: %f\n",RJ/total);
    printf("MG: %f\n",MG/total);
    printf("ES: %f\n",ES/total);
    printf("Outros: %f\n",Outros/total);

    return 0;
}