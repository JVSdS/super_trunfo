#include    <stdio.h>
#include    <string.h>

int main(){

    char estado, codcarta[4], cidade1[20], cidade2[20]; // Variáveis sendo atribuidas para suas respectivas áreas
    int turismo1, turismo2;
    unsigned long int popula1, popula2;
    float area1, area2, pib1, pib2;
    

    printf("Escreva o Estado da Carta 1: ");
    scanf(" %c", &estado);

    printf("Escreva o código da Carta 1: "); // Funções usadas para escrever exatamente qual Estado e o código da carta
    scanf("%s", codcarta);

    getchar(); // Usado para zerar o buffer e fazer com que o fgets não pule de linha

    printf("Escreva o Nome da Cidade da Cara 1: ");
    fgets(cidade1, 20, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Escreva a população da Carta 1: ");
    scanf("%lu", &popula1);

    printf("Escreva a área da Carta 1: ");
    scanf("%f", &area1);

    printf("Escreva o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Escreva o número de pontos turísticos da Carta 1: ");
    scanf("%d", &turismo1);

    float densidade1 = (float) popula1 / area1; // Casting de float para declaramento explicito e evitar erros inesperados
    float per1 = (pib1 * 1000000000) / (float) popula1; //pib multiplicado em um bilhão para o calculo de PIB per Capita ir corretamente.
    unsigned long int poder1 = popula1 + area1 + pib1 + turismo1 + per1 - densidade1;

    printf("Escreva o Estado da Carta 2: ");
    scanf(" %c", &estado);

    printf("Escreva o código da Carta 2: ");
    scanf("%s", codcarta);

    getchar();

    printf("Escreva o Nome da Cidade da Cara 2: ");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Escreva a população da Carta 2: ");
    scanf("%lu", &popula2);

    printf("Escreva a área da Carta 2: ");
    scanf("%f", &area2);

    printf("Escreva o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Escreva o número de pontos turísticos da Carta 2: ");
    scanf("%d", &turismo2);

    float densidade2 = (float) popula2 / area2;
    float per2 = (pib2 * 1000000000) / (float) popula2;
    unsigned long int poder2 = popula2 + area2 + pib2 + turismo2 + per2 - densidade2;

    if(poder1 > poder2){//if com o resultado da comparação de poder
        printf("Carta 1 - %s: %d de Super Poder\n", cidade1, poder1); 
        printf("Carta 2 - %s: %d de Super Poder\n", cidade2, poder2);
        printf("Carta 1: %s venceu!!!", cidade1);
    }else{
        printf("Carta 1 - %s: %d de Super Poder\n", cidade1, poder1);
        printf("Carta 2 - %s: %d de Super Poder\n", cidade2, poder2);
        printf("Carta 1: %s venceu!!!", cidade2);
    }

    return 0;

}
