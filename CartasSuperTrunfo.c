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
    float carta1_pib; // em bilhões de reais
    int carta1_pontosTuristicos;
    float carta1_densidade;
    float carta1_pibPerCapita;

    // Variáveis da Carta 2
    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[50];
    int carta2_populacao;
    float carta2_area;
    float carta2_pib; // em bilhões de reais
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

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta1_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1_pontosTuristicos);

    // Cálculos - Carta 1
    carta1_densidade = carta1_populacao / carta1_area;
    carta1_pibPerCapita = (carta1_pib * 1000000000) / carta1_populacao;

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

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta2_pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2_pontosTuristicos);

    // Cálculos - Carta 2
    carta2_densidade = carta2_populacao / carta2_area;
    carta2_pibPerCapita = (carta2_pib * 1000000000) / carta2_populacao;

    // Exibição - Carta 1
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

    // Exibição - Carta 2
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

// Estrutura para armazenar os dados de cada carta
struct Carta {
    char estado;                  // Letra de 'A' a 'H'
    char codigo[4];               // Código da carta (ex: A01, B03)
    char cidade[50];              // Nome da cidade
    unsigned long int populacao;  // População (número maior)
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões
    int pontosTuristicos;         // Número de pontos turísticos

    // Atributos calculados
    float densidade;
    float pibPerCapita;
    float superPoder;
};

int main(void) {
    struct Carta carta1, carta2;

    // === Leitura da Carta 1 ===
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%lu", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // === Leitura da Carta 2 ===
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%lu", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // === Cálculos para Carta 1 ===
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0f) / carta1.populacao; 
    carta1.superPoder = (float)carta1.populacao +
                        carta1.area +
                        (carta1.pib * 1000000000.0f) +
                        carta1.pontosTuristicos +
                        carta1.pibPerCapita +
                        (1.0f / carta1.densidade);

    // === Cálculos para Carta 2 ===
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0f) / carta2.populacao;
    carta2.superPoder = (float)carta2.populacao +
                        carta2.area +
                        (carta2.pib * 1000000000.0f) +
                        carta2.pontosTuristicos +
                        carta2.pibPerCapita +
                        (1.0f / carta2.densidade);

    // === Comparação ===
    printf("\n===== Comparação de Cartas =====\n");

    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", carta1.densidade < carta2.densidade); 
    printf("PIB per Capita: Carta 1 venceu (%d)\n", carta1.pibPerCapita > carta2.pibPerCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", carta1.superPoder > carta2.superPoder);

    return 0;