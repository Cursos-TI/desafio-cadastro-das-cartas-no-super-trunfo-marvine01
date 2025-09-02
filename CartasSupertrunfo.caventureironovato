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

// Estrutura da carta (país)
typedef struct {
    char nome[50];              // Nome do país
    char codigo[4];             // Código da carta
    int populacao;              // Número de habitantes
    float area;                 // Área em km²
    float pib;                  // PIB em bilhões
    int pontosTuristicos;       // Quantidade de pontos turísticos
    float densidade;            // População / Área
} Carta;

int main(void) {
    Carta carta1, carta2;
    int opcao;

    // ==== Cadastro da Carta 1 ====
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", carta1.nome);
    printf("Código da Carta: ");
    scanf("%s", carta1.codigo);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    carta1.densidade = carta1.populacao / carta1.area;

    // ==== Cadastro da Carta 2 ====
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do País: ");
    scanf(" %[^\n]", carta2.nome);
    printf("Código da Carta: ");
    scanf("%s", carta2.codigo);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (em km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    carta2.densidade = carta2.populacao / carta2.area;

    // ==== Menu de Comparação ====
    printf("\n=== Escolha o atributo para comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n=== Resultado da Comparação ===\n");

    switch (opcao) {
        case 1: // População
            printf("Comparação: População\n");
            printf("%s: %d habitantes\n", carta1.nome, carta1.populacao);
            printf("%s: %d habitantes\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.populacao > carta1.populacao) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparação: Área\n");
            printf("%s: %.2f km²\n", carta1.nome, carta1.area);
            printf("%s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.area > carta1.area) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparação: PIB\n");
            printf("%s: %.2f bilhões\n", carta1.nome, carta1.pib);
            printf("%s: %.2f bilhões\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.pib > carta1.pib) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Comparação: Pontos Turísticos\n");
            printf("%s: %d pontos\n", carta1.nome, carta1.pontosTuristicos);
            printf("%s: %d pontos\n", carta2.nome, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor vence)
            printf("Comparação: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", carta1.nome, carta1.densidade);
            printf("%s: %.2f hab/km²\n", carta2.nome, carta2.densidade);
            if (carta1.densidade < carta2.densidade) {
                printf("Vencedor: %s\n", carta1.nome);
            } else if (carta2.densidade < carta1.densidade) {
                printf("Vencedor: %s\n", carta2.nome);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Carta {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
};

int main() {
    struct Carta c1, c2;
    int escolha1, escolha2;

    // ===== Cadastro das cartas =====
    printf("Cadastro da Carta 1:\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", c1.nome);
    printf("Populacao: ");
    scanf("%d", &c1.populacao);
    printf("Area: ");
    scanf("%f", &c1.area);
    printf("PIB: ");
    scanf("%f", &c1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    printf("\nCadastro da Carta 2:\n");
    printf("Nome do pais: ");
    scanf(" %[^\n]", c2.nome);
    printf("Populacao: ");
    scanf("%d", &c2.populacao);
    printf("Area: ");
    scanf("%f", &c2.area);
    printf("PIB: ");
    scanf("%f", &c2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    // ===== Cálculos extras =====
    c1.densidade = c1.populacao / c1.area;
    c2.densidade = c2.populacao / c2.area;
    c1.pibPerCapita = c1.pib / c1.populacao;
    c2.pibPerCapita = c2.pib / c2.populacao;

    // ===== Menu de escolha =====
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i != escolha1) {
            switch (i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
                case 6: printf("6 - PIB per Capita\n"); break;
            }
        }
    }
    scanf("%d", &escolha2);

    // ===== Comparação =====
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma_c1, soma_c2;

    // Primeiro atributo
    switch (escolha1) {
        case 1: valor1_c1 = c1.populacao; valor1_c2 = c2.populacao; break;
        case 2: valor1_c1 = c1.area; valor1_c2 = c2.area; break;
        case 3: valor1_c1 = c1.pib; valor1_c2 = c2.pib; break;
        case 4: valor1_c1 = c1.pontosTuristicos; valor1_c2 = c2.pontosTuristicos; break;
        case 5: valor1_c1 = c1.densidade; valor1_c2 = c2.densidade; break;
        case 6: valor1_c1 = c1.pibPerCapita; valor1_c2 = c2.pibPerCapita; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // Segundo atributo
    switch (escolha2) {
        case 1: valor2_c1 = c1.populacao; valor2_c2 = c2.populacao; break;
        case 2: valor2_c1 = c1.area; valor2_c2 = c2.area; break;
        case 3: valor2_c1 = c1.pib; valor2_c2 = c2.pib; break;
        case 4: valor2_c1 = c1.pontosTuristicos; valor2_c2 = c2.pontosTuristicos; break;
        case 5: valor2_c1 = c1.densidade; valor2_c2 = c2.densidade; break;
        case 6: valor2_c1 = c1.pibPerCapita; valor2_c2 = c2.pibPerCapita; break;
        default: printf("Opcao invalida!\n"); return 0;
    }

    // Ajustando regras (densidade vence o menor)
    float ponto1_c1 = (escolha1 == 5) ? (valor1_c1 < valor1_c2) : (valor1_c1 > valor1_c2);
    float ponto1_c2 = (escolha1 == 5) ? (valor1_c2 < valor1_c1) : (valor1_c2 > valor1_c1);

    float ponto2_c1 = (escolha2 == 5) ? (valor2_c1 < valor2_c2) : (valor2_c1 > valor2_c2);
    float ponto2_c2 = (escolha2 == 5) ? (valor2_c2 < valor2_c1) : (valor2_c2 > valor2_c1);

    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    // ===== Exibição dos resultados =====
    printf("\nComparacao entre %s e %s:\n", c1.nome, c2.nome);

    printf("\nPrimeiro atributo: ");
    switch (escolha1) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", c1.nome, valor1_c1, c2.nome, valor1_c2);
    printf("Resultado: %s\n", ponto1_c1 ? c1.nome : (ponto1_c2 ? c2.nome : "Empate"));

    printf("\nSegundo atributo: ");
    switch (escolha2) {
        case 1: printf("Populacao\n"); break;
        case 2: printf("Area\n"); break;
        case 3: printf("PIB\n"); break;
        case 4: printf("Pontos Turisticos\n"); break;
        case 5: printf("Densidade Demografica\n"); break;
        case 6: printf("PIB per Capita\n"); break;
    }
    printf("%s: %.2f | %s: %.2f\n", c1.nome, valor2_c1, c2.nome, valor2_c2);
    printf("Resultado: %s\n", ponto2_c1 ? c1.nome : (ponto2_c2 ? c2.nome : "Empate"));

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", c1.nome, soma_c1, c2.nome, soma_c2);
    printf("Resultado final: %s\n", (soma_c1 > soma_c2) ? c1.nome : (soma_c2 > soma_c1 ? c2.nome : "Empate!"));

    return 0;
}