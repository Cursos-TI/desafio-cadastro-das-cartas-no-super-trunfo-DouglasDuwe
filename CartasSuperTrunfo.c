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
    //Densidade Populacional
    float densidade;
    // PIB per capita
    double pib_percapita;
    // Campo para o super poder
    float super_poder;
};

int main() 
{
    struct Carta carta1, carta2;

    //Cadastro Carta 1
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
    //Calculo Carta 1

    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pib_percapita = carta1.pib / carta1.populacao;
    carta1.super_poder = (float)carta1.populacao +
                         carta1.area +
                         (float)carta1.pib +
                         (float)carta1.pontos_turisticos +
                         (float)carta1.pib_percapita +
                         (1.0f / carta1.densidade);

    //Cadastro Carta 2
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
    
    //Calculo carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pib_percapita = carta2.pib / carta2.populacao;
    carta2.super_poder = (float)carta2.populacao +
                         carta2.area +
                         (float)carta2.pib +
                         (float)carta2.pontos_turisticos +
                         (float)carta2.pib_percapita +
                         (1.0f / carta2.densidade);

    // Comparações
    printf("\n=== Comparação de cartas ===\n");

    printf("População: Carta %d venceu (%d)\n",
           (carta1.populacao > carta2.populacao ? 1 : 2),
           (carta1.populacao > carta2.populacao ? 1 : 0));

    printf("Área: Carta %d venceu (%d)\n",
           (carta1.area > carta2.area ? 1 : 2),
           (carta1.area > carta2.area ? 1 : 0));

    printf("PIB: Carta %d venceu (%d)\n",
           (carta1.pib > carta2.pib ? 1 : 2),
           (carta1.pib > carta2.pib ? 1 : 0));

    printf("Pontos turísticos: Carta %d venceu (%d)\n",
           (carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 2),
           (carta1.pontos_turisticos > carta2.pontos_turisticos ? 1 : 0));

    //Regra especial para densidade (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (carta1.densidade < carta2.densidade ? 1 : 2),
           (carta1.densidade < carta2.densidade ? 1 : 0));

    printf("PIB per capita: Carta %d venceu (%d)\n",
           (carta1.pib_percapita > carta2.pib_percapita ? 1 : 2),
           (carta1.pib_percapita > carta2.pib_percapita ? 1 : 0));

    //Comparação do Super Poder
    printf("Super poder: Carta %d venceu (%d)\n",
           (carta1.super_poder > carta2.super_poder ? 1 : 2),
           (carta1.super_poder > carta2.super_poder ? 1 : 0));

    return 0;
}
