#include    <stdio.h>
#include    <string.h>

int main(){

    char estado, codcarta[4], cidade[20]; // Variáveis sendo atribuidas para suas respectivas áreas
    int popula, turismo;
    float area, pib;

    printf("Escreva o Estado da Carta 1: ");
    scanf(" %c", &estado);

    printf("Escreva o código da Carta 1: "); // Funções usadas para escrever exatamente qual Estado e o código da carta
    scanf("%s", codcarta);

    getchar(); // Usado para zerar o buffer e fazer com que o fgets não pule de linha

    printf("Escreva o Nome da Cidade da Cara 1: ");
    fgets(cidade, 20, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Escreva a população da Carta 1: ");
    scanf("%d", &popula);

    printf("Escreva a área da Carta 1: ");
    scanf("%f", &area);

    printf("Escreva o PIB da Carta 1: ");
    scanf("%f", &pib);

    printf("Escreva o número de pontos turísticos da Carta 1: ");
    scanf("%d", &turismo);

    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nNúmero de Pontos: %d", estado, codcarta, cidade, popula, area, pib, turismo);

    printf("Escreva o Estado da Carta 2: ");
    scanf(" %c", &estado);

    printf("Escreva o código da Carta 2: ");
    scanf("%s", codcarta);

    getchar();

    printf("Escreva o Nome da Cidade da Cara 2: ");
    fgets(cidade, 20, stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("Escreva a população da Carta 2: ");
    scanf("%d", &popula);

    printf("Escreva a área da Carta 2: ");
    scanf("%f", &area);

    printf("Escreva o PIB da Carta 2: ");
    scanf("%f", &pib);

    printf("Escreva o número de pontos turísticos da Carta 2: ");
    scanf("%d", &turismo);

    printf("Carta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nNúmero de Pontos: %d", estado, codcarta, cidade, popula, area, pib, turismo);

    return 0;

}