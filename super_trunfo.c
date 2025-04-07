#include    <stdio.h>
#include    <string.h>

int main(){

    char estado, codcarta[4], cidade1[20], cidade2[20]; // Variáveis sendo atribuidas para suas respectivas áreas
    int turismo1, turismo2, opcao;
    unsigned long int popula1, popula2;
    float area1, area2, pib1, pib2;
    

    printf("Escreva o Estado da Carta 1: ");
    scanf(" %c", &estado);

    printf("Escreva o código da Carta 1: "); // Funções usadas para escrever exatamente qual Estado e o código da carta
    scanf("%s", codcarta);

    getchar(); // Usado para zerar o buffer e fazer com que o fgets não pule de linha

    printf("Escreva o Nome da Cidade da Carta 1: ");
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

    printf("Escolha o primeiro atributo para ser comparado!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Escolha o segundo atributo para ser comparado!\n");
        printf("1. Área\n");
        printf("2. PIB\n");
        printf("3. Número de pontos turísticos\n");
        printf("4. Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("***%s vs %s***\n", cidade1, cidade2);
            printf("Atributos para comparação: População e Área\n");
            printf("Atributo População de %s: %d / Atributo Área de %s: %.2f\n", cidade1, popula1, cidade1, area1);
            printf("Atributo População de %s: %d / Atributo Área de %s: %.2f\n", cidade2, popula2, cidade2, area2);
            printf("Soma total de %s: %.2f\n", cidade1, (popula1 + area1));
            printf("Soma total de %s: %.2f\n", cidade2, (popula2 + area2));
                if ((popula1 + area1) > (popula2 + area2))
            {
                printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
            }else if ((popula1 + area1) < (popula2 + area2))
            {
                printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
            } else{
                printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
            }
            break;
        case 2:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: População e PIB\n");
        printf("Atributo População de %s: %d / Atributo PIB de %s: %.2f\n", cidade1, popula1, cidade1, pib1);
        printf("Atributo População de %s: %d / Atributo PIB de %s: %.2f\n", cidade2, popula2, cidade2, pib2);
        printf("Soma total de %s: %.2f\n", cidade1, (popula1 + pib1));
        printf("Soma total de %s: %.2f\n", cidade2, (popula2 + pib2));
            if ((popula1 + pib1) > (popula2 + pib2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 + pib1) < (popula2 + pib2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 3:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: População e Números de Pontos Turísticos\n");
        printf("Atributo População de %s: %d / Atributo Números de Pontos Turísticos de %s: %d\n", cidade1, popula1, cidade1, turismo1);
        printf("Atributo População de %s: %d / Atributo Números de Pontos Turísticos de %s: %d\n", cidade2, popula2, cidade2, turismo2);
        printf("Soma total de %s: %d\n", cidade1, (popula1 + turismo1));
        printf("Soma total de %s: %d\n", cidade2, (popula2 + turismo2));
            if ((popula1 + turismo1) > (popula2 + turismo2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 + turismo1) < (popula2 + turismo2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 4:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: População e Densidade Demográfica\n");
        printf("Atributo População de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade1, popula1, cidade1, densidade1);
        printf("Atributo População de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade2, popula2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (popula1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (popula2 - densidade2));
            if ((popula1 - densidade1) > (popula2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 - densidade1) < (popula2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        default:
            printf("Opção inválida! Escolha um número de 1 a 4!");
            break;
        }
        break;
    case 2:
        printf("Escolha o segundo atributo para ser comparado!\n");
        printf("1. População\n");
        printf("2. PIB\n");
        printf("3. Número de pontos turísticos\n");
        printf("4. Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Área e População\n");
        printf("Atributo Área de %s: %.2f / Atributo População de %s: %d\n", cidade1, area1, cidade1, popula1);
        printf("Atributo Área de %s: %.2f / Atributo População de %s: %d\n", cidade2, area1, cidade2, popula2);
        printf("Soma total de %s: %.2f\n", cidade1, (popula1 + area1));
        printf("Soma total de %s: %.2f\n", cidade2, (popula2 + area2));
            if ((popula1 + area1) > (popula2 + area2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 + area1) < (popula2 + area2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
            break;
        case 2:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Área e PIB\n");
        printf("Atributo Área de %s: %.2f / Atributo PIB de %s: %.2f\n", cidade1, area1, cidade1, pib1);
        printf("Atributo Área de %s: %.2f / Atributo PIB de %s: %.2f\n", cidade2, area1, cidade2, pib2);
        printf("Soma total de %s: %.2f\n", cidade1, (area1 + pib1));
        printf("Soma total de %s: %.2f\n", cidade2, (area2 + pib2));
            if ((area1 + pib1) > (area2 + pib2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 + pib1) < (area2 + pib2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 3:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Área e Números de Pontos Turísticos\n");
        printf("Atributo Área de %s: %.2f / Atributo Números de Pontos Turísticos de %s: %d\n", cidade1, area1, cidade1, turismo1);
        printf("Atributo Área de %s: %.2f / Atributo Números de Pontos Turísticos de %s: %d\n", cidade2, area2, cidade2, turismo2);
        printf("Soma total de %s: %.2f\n", cidade1, (area1 + turismo1));
        printf("Soma total de %s: %.2f\n", cidade2, (area2 + turismo2));
            if ((area1 + turismo2) > (area2 + turismo2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 + turismo2) < (area2 + turismo2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 4:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Área e Densidade Demográfica\n");
        printf("Atributo Área de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade1, area1, cidade1, densidade1);
        printf("Atributo Área de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade2, area2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (area1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (area2 - densidade2));
            if ((area1 - densidade1) > (area2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 - densidade1) < (area2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        default:
            printf("Opção inválida! Escolha um número de 1 a 4!");
            break;
        }
        break;
    case 3:
        printf("Escolha o segundo atributo para ser comparado!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. Número de pontos turísticos\n");
        printf("4. Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: PIB e População\n");
        printf("Atributo PIB de %s: %.2f / Atributo População de %s: %d\n", cidade1, pib1, cidade1, popula1);
        printf("Atributo PIB de %s: %.2f / Atributo População de %s: %d\n", cidade2, pib2, cidade2, popula2);
        printf("Soma total de %s: %.2f\n", cidade1, (popula1 + pib1));
        printf("Soma total de %s: %.2f\n", cidade2, (popula2 + pib2));
            if ((popula1 + pib1) > (popula2 + pib2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 + pib1) < (popula2 + pib2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 2:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: PIB e Área\n");
        printf("Atributo PIB de %s: %.2f / Atributo Área de %s: %.2f\n", cidade1, pib1, cidade1, area1);
        printf("Atributo PIB de %s: %.2f / Atributo Área de %s: %.2f\n", cidade2, pib2, cidade2, area2);
        printf("Soma total de %s: %.2f\n", cidade1, (area1 + pib1));
        printf("Soma total de %s: %.2f\n", cidade2, (area2 + pib2));
            if ((area1 + pib1) > (area2 + pib2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 + pib1) < (area2 + pib2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
            break;
        case 3:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: PIB e Números de Pontos Turísticos\n");
        printf("Atributo PIB de %s: %.2f / Atributo Número de Pontos Turísticos de %s: %d\n", cidade1, pib1, cidade1, turismo1);
        printf("Atributo PIB de %s: %.2f / Atributo Número de Pontos Turísticos de %s: %d\n", cidade2, pib2, cidade2, turismo2);
        printf("Soma total de %s: %.2f\n", cidade1, (area1 + turismo1));
        printf("Soma total de %s: %.2f\n", cidade2, (area2 + turismo2));
            if ((area1 + turismo1) > (area2 + turismo2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 + turismo1) < (area2 + turismo2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 4:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: PIB e Densidade Demográfica\n");
        printf("Atributo PIB de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade1, pib1, cidade1, densidade1);
        printf("Atributo PIB de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade2, pib2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (pib1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (pib2 - densidade2));
            if ((pib1 - densidade1) > (pib2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((pib1 - densidade1) < (pib2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        default:
            printf("Opção inválida! Escolha um número de 1 a 4!");
            break;
        }
    case 4:
        printf("Escolha o segundo atributo para ser comparado!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Densidade demográfica\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Números de Pontos Turísticos e População\n");
        printf("Atributo Número de Pontos Turísticos de %s: %d / Atributo População de %s: %d\n", cidade1, turismo1, cidade1, popula1);
        printf("Atributo Número de Pontos Turísticos de %s: %d / Atributo População de %s: %d\n", cidade2, turismo1, cidade2, popula2);
        printf("Soma total de %s: %d\n", cidade1, (popula1 + turismo1));
        printf("Soma total de %s: %d\n", cidade2, (popula2 + turismo2));
            if ((popula1 + turismo1) > (popula2 + turismo2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 + turismo1) < (popula2 + turismo2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
            break;
        case 2:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Números de Pontos Turísticos e Área\n");
        printf("Atributo Número de Pontos Turísticos de %s: %d / Atributo Área de %s: %.2f\n", cidade1, turismo1, cidade1, area1);
        printf("Atributo Número de Pontos Turísticos de %s: %d / Atributo Área de %s: %.2f\n", cidade2, turismo1, cidade2, area2);
        printf("Soma total de %s: %.2f\n", cidade1, (area1 + turismo1));
        printf("Soma total de %s: %.2f\n", cidade2, (area2 + turismo2));
            if ((area1 + turismo1) > (area2 + turismo2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 + turismo1) < (area2 + turismo2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 3:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Números de Pontos Turísticos e PIB\n");
        printf("Atributo Número de Pontos Turísticos de %s: %d / Atributo PIB de %s: %.2f\n", cidade1, turismo1, cidade1, pib1);
        printf("Atributo Número de Pontos Turísticos de %s: %d / Atributo PIB de %s: %.2f\n", cidade2, turismo1, cidade2, pib2);
        printf("Soma total de %s: %.2f\n", cidade1, (pib1 + turismo1));
        printf("Soma total de %s: %.2f\n", cidade2, (pib2 + turismo2));
            if ((pib1 + turismo1) > (pib2 + turismo2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((pib1 + turismo1) < (pib2 + turismo2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 4:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Números de Pontos Turísticos e Densidade Demográfica\n");
        printf("Atributo Números de Pontos Turísticos de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade1, turismo1, cidade1, densidade1);
        printf("Atributo Números de Pontos Turísticos de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade2, turismo2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (turismo1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (turismo2 - densidade2));
            if ((turismo1 - densidade1) > (turismo2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((turismo1 - densidade1) < (turismo2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        default:
        printf("Opção inválida! Escolha um número de 1 a 4!");
            break;
        }
        break;
    case 5:
        printf("Escolha o segundo atributo para ser comparado!\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de pontos turísticos\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: População e Densidade Demográfica\n");
        printf("Atributo População de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade1, popula1, cidade1, densidade1);
        printf("Atributo População de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade2, popula2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (popula1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (popula2 - densidade2));
            if ((popula1 - densidade1) > (popula2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((popula1 - densidade1) < (popula2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
            break;
        case 2:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Área e Densidade Demográfica\n");
        printf("Atributo Área de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade1, area1, cidade1, densidade1);
        printf("Atributo Área de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade2, area2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (area1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (area2 - densidade2));
            if ((area1 - densidade1) > (area2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((area1 - densidade1) < (area2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 3:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: PIB e Densidade Demográfica\n");
        printf("Atributo PIB de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade1, pib1, cidade1, densidade1);
        printf("Atributo PIB de %s: %.2f / Densidade Demográfica de %s: %.2f\n", cidade2, pib2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (pib1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (pib2 - densidade2));
            if ((pib1 - densidade1) > (pib2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((pib1 - densidade1) < (pib2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        case 4:
        printf("***%s vs %s***\n", cidade1, cidade2);
        printf("Atributos para comparação: Números de Pontos Turísticos e Densidade Demográfica\n");
        printf("Atributo Números de Pontos Turísticos de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade1, turismo1, cidade1, densidade1);
        printf("Atributo Números de Pontos Turísticos de %s: %d / Densidade Demográfica de %s: %.2f\n", cidade2, turismo2, cidade2, densidade2);
        printf("A diferença total de %s: %.2f\n", cidade1, (turismo1 - densidade1));
        printf("A diferença total de %s: %.2f\n", cidade2, (turismo2 - densidade2));
            if ((turismo1 - densidade1) > (turismo2 - densidade2))
        {
            printf("A Carta 1 (%s) VENCEU!!!!!\n", cidade1);
        }else if ((turismo1 - densidade1) < (turismo2 - densidade2))
        {
            printf("A Carte 2 (%s) VENCEU!!!!!\n", cidade2);
        } else{
            printf("Algo raro aconteceu, houve um empate! Tente novamente e selecione outros atributos para desempate!\n");
        }
        break;
        default:
        printf("Opção inválida! Escolha um número de 1 a 4!");
            break;
        }
        break;
    default:
        printf("Opção inválida! Escolha um número de 1 a 5!");
        break;
    }
    return 0;
}
