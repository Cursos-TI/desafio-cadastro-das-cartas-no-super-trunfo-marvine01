#include <stdio.h>

int main(void) {
    // Variáveis da Carta 1
    char carta1_estado;
    char carta1_codigo[4];
    char carta1_cidade[50];
    int carta1_populacao;
    float carta1_area;
    float carta1_pib;
    int carta1_pontosTuristicos;

    // Variáveis da Carta 2
    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[50];
    int carta2_populacao;
    float carta2_area;
    float carta2_pib;
    int carta2_pontosTuristicos;

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", carta1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1_cidade);

    printf("Populacao: ");
    scanf("%d", &carta1_populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1_area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1_pontosTuristicos);

    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", carta2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2_cidade);

    printf("Populacao: ");
    scanf("%d", &carta2_populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2_area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2_pontosTuristicos);

    // Exibição
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Codigo: %s\n", carta1_codigo);
    printf("Cidade: %s\n", carta1_cidade);
    printf("Populacao: %d\n", carta1_populacao);
    printf("Area: %.2f km2\n", carta1_area);
    printf("PIB: %.2f bilhoes\n", carta1_pib);
    printf("Pontos Turisticos: %d\n", carta1_pontosTuristicos);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Codigo: %s\n", carta2_codigo);
    printf("Cidade: %s\n", carta2_cidade);
    printf("Populacao: %d\n", carta2_populacao);
    printf("Area: %.2f km2\n", carta2_area);
    printf("PIB: %.2f bilhoes\n", carta2_pib);
    printf("Pontos Turisticos: %d\n", carta2_pontosTuristicos);

    return 0;
}
#include <stdio.h>

int main(void) {
    // Variáveis da Carta 1
    char carta1_estado;
    char carta1_codigo[4];
    char carta1_cidade[50];
    int carta1_populacao;
    float carta1_area;
    float carta1_pib; // em bilhões
    int carta1_pontosTuristicos;
    float carta1_densidade;
    float carta1_pibPerCapita;

    // Variáveis da Carta 2
    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[50];
    int carta2_populacao;
    float carta2_area;
    float carta2_pib; // em bilhões
    int carta2_pontosTuristicos;
    float carta2_densidade;
    float carta2_pibPerCapita;

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", carta1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1_cidade);

    printf("Populacao: ");
    scanf("%d", &carta1_populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1_area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1_pontosTuristicos);

    // Cálculos da Carta 1
    carta1_densidade = carta1_populacao / carta1_area;
    carta1_pibPerCapita = (carta1_pib * 1e9) / carta1_populacao; // converte PIB de bilhões p/ reais

    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", carta2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2_cidade);

    printf("Populacao: ");
    scanf("%d", &carta2_populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2_area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2_pontosTuristicos);

    // Cálculos da Carta 2
    carta2_densidade = carta2_populacao / carta2_area;
    carta2_pibPerCapita = (carta2_pib * 1e9) / carta2_populacao;

    // Exibição Carta 1
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Codigo: %s\n", carta1_codigo);
    printf("Cidade: %s\n", carta1_cidade);
    printf("Populacao: %d\n", carta1_populacao);
    printf("Area: %.2f km2\n", carta1_area);
    printf("PIB: %.2f bilhoes de reais\n", carta1_pib);
    printf("Pontos Turisticos: %d\n", carta1_pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1_densidade);
    printf("PIB per Capita: %.2f reais\n", carta1_pibPerCapita);

    // Exibição Carta 2
    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Codigo: %s\n", carta2_codigo);
    printf("Cidade: %s\n", carta2_cidade);
    printf("Populacao: %d\n", carta2_populacao);
    printf("Area: %.2f km2\n", carta2_area);
    printf("PIB: %.2f bilhoes de reais\n", carta2_pib);
    printf("Pontos Turisticos: %d\n", carta2_pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2_densidade);
    printf("PIB per Capita: %.2f reais\n", carta2_pibPerCapita);

    return 0;
}
#include <stdio.h>

int main(void) {
    // Variáveis da Carta 1
    char carta1_estado;
    char carta1_codigo[4];
    char carta1_cidade[50];
    unsigned long int carta1_populacao;
    float carta1_area;
    float carta1_pib; // em bilhões
    int carta1_pontosTuristicos;
    float carta1_densidade;
    float carta1_pibPerCapita;
    float carta1_superPoder;

    // Variáveis da Carta 2
    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[50];
    unsigned long int carta2_populacao;
    float carta2_area;
    float carta2_pib; // em bilhões
    int carta2_pontosTuristicos;
    float carta2_densidade;
    float carta2_pibPerCapita;
    float carta2_superPoder;

    // Entrada de dados - Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1_estado);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", carta1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta1_cidade);

    printf("Populacao: ");
    scanf("%lu", &carta1_populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta1_area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1_pontosTuristicos);

    // Cálculos da Carta 1
    carta1_densidade = carta1_populacao / carta1_area;
    carta1_pibPerCapita = (carta1_pib * 1e9) / carta1_populacao;
    carta1_superPoder = (float)carta1_populacao + carta1_area + carta1_pib +
                        carta1_pontosTuristicos + carta1_pibPerCapita + (1 / carta1_densidade);

    // Entrada de dados - Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2_estado);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", carta2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", carta2_cidade);

    printf("Populacao: ");
    scanf("%lu", &carta2_populacao);

    printf("Area (em km2): ");
    scanf("%f", &carta2_area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2_pontosTuristicos);

    // Cálculos da Carta 2
    carta2_densidade = carta2_populacao / carta2_area;
    carta2_pibPerCapita = (carta2_pib * 1e9) / carta2_populacao;
    carta2_superPoder = (float)carta2_populacao + carta2_area + carta2_pib +
                        carta2_pontosTuristicos + carta2_pibPerCapita + (1 / carta2_densidade);

    // Comparação
    printf("\n===== Comparacao de Cartas =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", (carta1_populacao > carta2_populacao));
    printf("Area: Carta 1 venceu (%d)\n", (carta1_area > carta2_area));
    printf("PIB: Carta 1 venceu (%d)\n", (carta1_pib > carta2_pib));
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", (carta1_pontosTuristicos > carta2_pontosTuristicos));
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", (carta1_densidade < carta2_densidade));
    printf("PIB per Capita: Carta 1 venceu (%d)\n", (carta1_pibPerCapita > carta2_pibPerCapita));
    printf("Super Poder: Carta 1 venceu (%d)\n", (carta1_superPoder > carta2_superPoder));

    return 0;
}
