#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1;
    char codigo1[4];  // Ex: A01 + '\0'
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Dados da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada da primeira carta
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada da segunda carta
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Saída formatada
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

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

    // === Entrada de dados da Carta 1 ===
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

    // === Entrada de dados da Carta 2 ===
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

    // ==========================
    // Comparação (atributo fixo)
    // ==========================
    // Escolhendo o atributo: População
    printf("\n===== Comparacao de Cartas (Atributo: Populacao) =====\n");
    printf("Carta 1 - %s (%c): %lu habitantes\n", carta1_cidade, carta1_estado, carta1_populacao);
    printf("Carta 2 - %s (%c): %lu habitantes\n", carta2_cidade, carta2_estado, carta2_populacao);

    if (carta1_populacao > carta2_populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1_cidade);
    } else if (carta2_populacao > carta1_populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2_cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

int main(void) {
    // Carta 1
    char nome1[50] = "São Paulo";
    unsigned long populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 699.28; // em bilhões
    int pontosTuristicos1 = 15;
    float densidade1 = populacao1 / area1;

    // Carta 2
    char nome2[50] = "Rio de Janeiro";
    unsigned long populacao2 = 6748000;
    float area2 = 1200.0;
    float pib2 = 400.12; // em bilhões
    int pontosTuristicos2 = 10;
    float densidade2 = populacao2 / area2;

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO =====\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", nome1, nome2);

    switch (opcao) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("%s: %lu habitantes\n", nome1, populacao1);
            printf("%s: %lu habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (regra invertida!)
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

// Função para mostrar o menu (recebe um atributo já escolhido para ocultá-lo)
void mostrarMenu(int atributoJaEscolhido) {
    printf("\nEscolha um atributo para comparar:\n");
    if (atributoJaEscolhido != 1) printf("1 - Populacao\n");
    if (atributoJaEscolhido != 2) printf("2 - Area\n");
    if (atributoJaEscolhido != 3) printf("3 - PIB\n");
    if (atributoJaEscolhido != 4) printf("4 - Pontos Turisticos\n");
    if (atributoJaEscolhido != 5) printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
}

// Função para retornar o valor do atributo
float obterValor(int atributo, unsigned long populacao, float area, float pib, int pontos, float densidade) {
    switch (atributo) {
        case 1: return (float) populacao;
        case 2: return area;
        case 3: return pib;
        case 4: return (float) pontos;
        case 5: return densidade;
        default: return 0.0;
    }
}

// Função para exibir o nome do atributo
const char* nomeAtributo(int atributo) {
    switch (atributo) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Demografica";
        default: return "Desconhecido";
    }
}

int main(void) {
    // ====== Cartas pré-definidas ======
    char nome1[50] = "São Paulo";
    unsigned long populacao1 = 12300000;
    float area1 = 1521.0;
    float pib1 = 699.28; // bilhões
    int pontosTuristicos1 = 15;
    float densidade1 = populacao1 / area1;

    char nome2[50] = "Rio de Janeiro";
    unsigned long populacao2 = 6748000;
    float area2 = 1200.0;
    float pib2 = 400.12;
    int pontosTuristicos2 = 10;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;

    printf("===== SUPER TRUNFO - Comparacao Avancada =====\n");

    // Escolha do primeiro atributo
    mostrarMenu(0);
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (sem repetir o primeiro)
    mostrarMenu(atributo1);
    scanf("%d", &atributo2);

    // Obter valores dos atributos
    float valor1_carta1 = obterValor(atributo1, populacao1, area1, pib1, pontosTuristicos1, densidade1);
    float valor1_carta2 = obterValor(atributo1, populacao2, area2, pib2, pontosTuristicos2, densidade2);

    float valor2_carta1 = obterValor(atributo2, populacao1, area1, pib1, pontosTuristicos1, densidade1);
    float valor2_carta2 = obterValor(atributo2, populacao2, area2, pib2, pontosTuristicos2, densidade2);

    // Regras de comparação (usa operador ternário)
    int resultado1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2 ? 1 : (valor1_carta1 > valor1_carta2 ? 2 : 0))
                                     : (valor1_carta1 > valor1_carta2 ? 1 : (valor1_carta2 > valor1_carta1 ? 2 : 0));

    int resultado2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2 ? 1 : (valor2_carta1 > valor2_carta2 ? 2 : 0))
                                     : (valor2_carta1 > valor2_carta2 ? 1 : (valor2_carta2 > valor2_carta1 ? 2 : 0));

    // Soma dos valores (independente de quem venceu em cada atributo)
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // ===== Exibição =====
    printf("\nComparacao entre %s e %s\n", nome1, nome2);
    printf("\nAtributo 1: %s\n", nomeAtributo(atributo1));
    printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);

    printf("\nAtributo 2: %s\n", nomeAtributo(atributo2));
    printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", nome1, soma1, nome2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado final: %s venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nResultado final: %s venceu!\n", nome2);
    } else {
        printf("\nResultado final: Empate!\n");
    }

    return 0;
}