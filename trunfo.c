#include <stdio.h>

int main(){
   printf("Desafio trunfo\n");
    
    char codigo[4] = "rj1";
    char nome[30] = "Rio de Janeiro";
    int populacao = 16.60000 ;
    float  km = 43.78;
    int PIB = 753.83  ;
    int pontos_turisticos = 20;
    
    printf("cidade: %s\n", nome);
    printf("codigo: %s \n", codigo);
    printf("km: %f kilometros quadrados \n", km);
    printf("pupulação: %d milhões\n", populacao);
    printf("PIB: %d bilhões reais \n", PIB);
    printf("pontos_turisticos: %d\n", pontos_turisticos);
    
    return 0;


}