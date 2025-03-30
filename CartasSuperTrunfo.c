#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estadocarta1[50];
    char estado2[50];
    char codcarta1[5];
    char cod2[5];
    char cidade1[50];
    char cidade2[50];
    int populacao1, populacao2, turistico1, turistico2;
    float area_km1, area_km2, pib1, pib2;

    // Pega informações da CARTA 1:
    printf("Digite o estado da sua primeira carta:\n");
    scanf("%s", estadocarta1);
    printf("Digite o código da primeira carta (letra do estado + número de 01 a 04):\n");
    scanf("%s", codcarta1);
    printf("Digite o nome da cidade da sua primeira carta:\n");
    scanf("%s", cidade1);
    printf("Digite o número de habitantes da sua primeira carta:\n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em quilômetros quadrados da sua primeira carta:\n");
    scanf("%f", &area_km1);
    printf("Digite o Produto Interno Bruto da cidade, da sua primeira carta:\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos na cidade da sua primeira carta:\n");
    scanf("%d", &turistico1);

    // Pega informações da CARTA 2:
    printf("Digite o estado da sua segunda carta:\n");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta (letra do estado + número de 01 a 04):\n");
    scanf("%s", cod2);
    printf("Digite o nome da cidade da sua segunda carta:\n");
    scanf("%s", cidade2);
    printf("Digite o número de habitantes da sua segunda carta:\n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em quilômetros quadrados da sua segunda carta:\n");
    scanf("%f", &area_km2);
    printf("Digite o Produto Interno Bruto da cidade, da sua segunda carta:\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos na cidade da sua segunda carta:\n");
    scanf("%d", &turistico2);

    // Bloco de impressão das informações:
    printf("\nCARTA 1:\n");
    printf("Estado: %s\n", estadocarta1);
    printf("Código: %s\n", codcarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area_km1); // Exibe 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turistico1);

    printf("\nCARTA 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", cod2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area_km2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turistico2);

    return 0;
}