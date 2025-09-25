#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char nomeCidade[50];
    char estado[50];
    int populacao;
    float area;
  // Área para entrada de dados
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Digite o estado: ");
    scanf(" %[^\n]", estado);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &area);
  // Área para exibição dos dados da cidade
    printf("\n=== Carta Cadastrada ===\n");
    printf("Cidade: %s\n", nomeCidade);
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
return 0;
} 
