#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Estrutura para armazenar os dados das cartas
struct Carta {
    // Vai ser uma letra de A a H
    char estado;
    //Código da carta
    char codigo[10];
    //Nome da Cidade
    char cidade[60];
    //Número da população
    unsigned long int populacao;
    //Área em km2
    float area;
    double pib;
    //Quantidade de pontos turísticos
    int pontos_turisticos;
};

int main() 
{
    struct Carta carta1, carta2;

    printf("Cadastro da 1° Carta\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta: ");
    scanf("%s", carta1.codigo);

    printf("Nome da cidade: ");
    //Lê string com espaços
    scanf(" %[^\n]", carta1.cidade); 

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%lf", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta: ");
    scanf("%s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%lf", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Exibindo os dados cadastrados
    printf("\n=== Dados das Cartas Cadastradas ===\n");
    printf("Carta 1 -> Estado: %c | Código: %s | Cidade: %s | População: %lu | Área: %.2f km² | PIB: %.2lf | Pontos turísticos: %d\n",
           carta1.estado, carta1.codigo, carta1.cidade, carta1.populacao, carta1.area, carta1.pib, carta1.pontos_turisticos);

    printf("Carta 2 -> Estado: %c | Código: %s | Cidade: %s | População: %lu | Área: %.2f km² | PIB: %.2lf | Pontos turísticos: %d\n",
           carta2.estado, carta2.codigo, carta2.cidade, carta2.populacao, carta2.area, carta2.pib, carta2.pontos_turisticos);

    return 0;

    
    return 0;
}
