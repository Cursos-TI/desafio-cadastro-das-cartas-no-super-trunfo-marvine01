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
}

#include <stdio.h>

// Estrutura para armazenar os dados de cada carta
typedef struct {
    char estado[3];             // Ex: "SP"
    char codigo[4];             // Ex: "A01"
    char cidade[50];            // Nome da cidade
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB da cidade em bilhões
    int pontosTuristicos;       // Quantidade de pontos turísticos
    float densidade;            // Densidade populacional
    float pibPerCapita;         // PIB per capita
} Carta;

int main(void) {
    Carta carta1, carta2;

    // ==== Cadastro da Carta 1 ====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (ex: SP): ");
    scanf("%s", carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.cidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculos da carta 1
    carta1.densidade = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0) / carta1.populacao;

    // ==== Cadastro da Carta 2 ====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", carta2.estado);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.cidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculos da carta 2
    carta2.densidade = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0) / carta2.populacao;

    // ==== Comparação de cartas ====
    // Escolha do atributo de comparação: POPULAÇÃO
    printf("\n=== Comparação de Cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

#include <stdio.h>

/* Carta de pais */
typedef struct {
    char nome[50];         /* Nome do pais */
    char codigo[4];        /* Codigo da carta, ex: A01 */
    int populacao;         /* Habitantes */
    float area;            /* km2 */
    float pib;             /* bilhoes de reais */
    int pontosTuristicos;  /* quantidade */

    /* Derivados */
    float densidade;       /* populacao / area */
    float pibPerCapita;    /* (pib * 1e9) / populacao */
} Carta;

int main(void) {
    Carta c1, c2;
    int opcao;

    /* -------- Cadastro Carta 1 -------- */
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do pais: ");
    scanf(" %49[^\n]", c1.nome);
    printf("Codigo da carta (ex: A01): ");
    scanf(" %3s", c1.codigo);
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    printf("Area (km2): ");
    scanf("%f", &c1.area);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    /* Derivados c1 (protege divisao por zero) */
    c1.densidade   = (c1.area > 0.0f) && (c1.populacao > 0)
                     ? (float)c1.populacao / c1.area : 0.0f;
    c1.pibPerCapita = (c1.populacao > 0)
                     ? (c1.pib * 1000000000.0f) / (float)c1.populacao : 0.0f;

    /* -------- Cadastro Carta 2 -------- */
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do pais: ");
    scanf(" %49[^\n]", c2.nome);
    printf("Codigo da carta (ex: B02): ");
    scanf(" %3s", c2.codigo);
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    printf("Area (km2): ");
    scanf("%f", &c2.area);
    printf("PIB (bilhoes de reais): ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    /* Derivados c2 */
    c2.densidade   = (c2.area > 0.0f) && (c2.populacao > 0)
                     ? (float)c2.populacao / c2.area : 0.0f;
    c2.pibPerCapita = (c2.populacao > 0)
                     ? (c2.pib * 1000000000.0f) / (float)c2.populacao : 0.0f;

    /* -------- Menu -------- */
    printf("\n=== Escolha o atributo para comparacao ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB (bilhoes)\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("6 - PIB per Capita\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparacao ===\n");

    switch (opcao) {
        case 1: /* Populacao: maior vence */
            printf("Atributo: Populacao\n");
            printf("Carta 1 - %s (%s): %d\n", c1.nome, c1.codigo, c1.populacao);
            printf("Carta 2 - %s (%s): %d\n", c2.nome, c2.codigo, c2.populacao);
            if (c1.populacao > c2.populacao) {
                printf("Vencedor: Carta 1 (%s)\n", c1.nome);
            } else if (c2.populacao > c1.populacao) {
                printf("Vencedor: Carta 2 (%s)\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: /* Area: maior vence */
            printf("Atributo: Area (km2)\n");
            printf("Carta 1 - %s (%s): %.2f km2\n", c1.nome, c1.codigo, c1.area);
            printf("Carta 2 - %s (%s): %.2f km2\n", c2.nome, c2.codigo, c2.area);
            if (c1.area > c2.area) {
                printf("Vencedor: Carta 1 (%s)\n", c1.nome);
            } else if (c2.area > c1.area) {
                printf("Vencedor: Carta 2 (%s)\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: /* PIB: maior vence */
            printf("Atributo: PIB (bilhoes de reais)\n");
            printf("Carta 1 - %s (%s): %.2f\n", c1.nome, c1.codigo, c1.pib);
            printf("Carta 2 - %s (%s): %.2f\n", c2.nome, c2.codigo, c2.pib);
            if (c1.pib > c2.pib) {
                printf("Vencedor: Carta 1 (%s)\n", c1.nome);
            } else if (c2.pib > c1.pib) {
                printf("Vencedor: Carta 2 (%s)\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: /* Pontos Turisticos: maior vence */
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 - %s (%s): %d\n", c1.nome, c1.codigo, c1.pontosTuristicos);
            printf("Carta 2 - %s (%s): %d\n", c2.nome, c2.codigo, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos) {
                printf("Vencedor: Carta 1 (%s)\n", c1.nome);
            } else if (c2.pontosTuristicos > c1.pontosTuristicos) {
                printf("Vencedor: Carta 2 (%s)\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: /* Densidade: MENOR vence */
            printf("Atributo: Densidade Demografica (hab/km2) - menor vence\n");
            printf("Carta 1 - %s (%s): %.2f hab/km2\n", c1.nome, c1.codigo, c1.densidade);
            printf("Carta 2 - %s (%s): %.2f hab/km2\n", c2.nome, c2.codigo, c2.densidade);
            if (c1.densidade < c2.densidade) {
                printf("Vencedor: Carta 1 (%s)\n", c1.nome);
            } else if (c2.densidade < c1.densidade) {
                printf("Vencedor: Carta 2 (%s)\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 6: /* PIB per Capita: maior vence */
            printf("Atributo: PIB per Capita (reais)\n");
            printf("Carta 1 - %s (%s): %.2f\n", c1.nome, c1.codigo, c1.pibPerCapita);
            printf("Carta 2 - %s (%s): %.2f\n", c2.nome, c2.codigo, c2.pibPerCapita);
            if (c1.pibPerCapita > c2.pibPerCapita) {
                printf("Vencedor: Carta 1 (%s)\n", c1.nome);
            } else if (c2.pibPerCapita > c1.pibPerCapita) {
                printf("Vencedor: Carta 2 (%s)\n", c2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}