#include <stdio.h>

// Desafio Super Trunfo - Países



int main() {
  
int main() {
    // Variáveis Carta 1
    char estado1[50], nomeCidade1[50];
    int codigo1, pontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1;
    float densidade1, pibPerCapita1;

    // Variáveis Carta 2
    char estado2[50], nomeCidade2[50];
    int codigo2, pontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2;
    float densidade2, pibPerCapita2;

    // ===== Entrada de dados Carta 1 =====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o código da carta: ");
    scanf("%d", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ===== Entrada de dados Carta 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o código da carta: ");
    scanf("%d", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== Cálculos =====
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float) populacao1; // PIB em bilhões convertido

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float) populacao2;

    // ===== Saída de dados Carta 1 =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);

    // ===== Saída de dados Carta 2 =====
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
return 0;
} 
