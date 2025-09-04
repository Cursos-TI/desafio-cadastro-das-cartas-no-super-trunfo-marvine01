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
    float carta1_pib;
    int carta1_pontosTuristicos;
    float carta1_densidade;
    float carta1_pibPerCapita;

    // Variáveis da Carta 2
    char carta2_estado;
    char carta2_codigo[4];
    char carta2_cidade[50];
    int carta2_populacao;
    float carta2_area;
    float carta2_pib;
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

    // Cálculos adicionais
    carta1_densidade = carta1_populacao / carta1_area;
    carta1_pibPerCapita = (carta1_pib * 1000000000) / carta1_populacao; // PIB em bilhões -> reais

    carta2_densidade = carta2_populacao / carta2_area;
    carta2_pibPerCapita = (carta2_pib * 1000000000) / carta2_populacao;

    // Exibição das cartas
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", carta1_estado);
    printf("Codigo: %s\n", carta1_codigo);
    printf("Cidade: %s\n", carta1_cidade);
    printf("Populacao: %d\n", carta1_populacao);
    printf("Area: %.2f km2\n", carta1_area);
    printf("PIB: %.2f bilhoes\n", carta1_pib);
    printf("Pontos Turisticos: %d\n", carta1_pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta1_densidade);
    printf("PIB per Capita: %.2f R$\n", carta1_pibPerCapita);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", carta2_estado);
    printf("Codigo: %s\n", carta2_codigo);
    printf("Cidade: %s\n", carta2_cidade);
    printf("Populacao: %d\n", carta2_populacao);
    printf("Area: %.2f km2\n", carta2_area);
    printf("PIB: %.2f bilhoes\n", carta2_pib);
    printf("Pontos Turisticos: %d\n", carta2_pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km2\n", carta2_densidade);
    printf("PIB per Capita: %.2f R$\n", carta2_pibPerCapita);

    // Comparação de atributo fixo -> População
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s: %d habitantes\n", carta1_cidade, carta1_populacao);
    printf("Carta 2 - %s: %d habitantes\n", carta2_cidade, carta2_populacao);

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

int main(void) {
    // Carta 1
    char carta1_pais[50] = "Brasil";
    int carta1_populacao = 214000000;
    float carta1_area = 8516000.0;
    float carta1_pib = 2200.0; // em bilhões
    int carta1_pontosTuristicos = 50;
    float carta1_densidade = carta1_populacao / carta1_area;

    // Carta 2
    char carta2_pais[50] = "Argentina";
    int carta2_populacao = 46000000;
    float carta2_area = 2780000.0;
    float carta2_pib = 500.0; // em bilhões
    int carta2_pontosTuristicos = 30;
    float carta2_densidade = carta2_populacao / carta2_area;

    int opcao;

    // Menu interativo
    printf("===== SUPER TRUNFO - COMPARACAO DE CARTAS =====\n");
    printf("Carta 1: %s\n", carta1_pais);
    printf("Carta 2: %s\n\n", carta2_pais);

    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    switch (opcao) {
        case 1: // População
            printf("Comparacao por Populacao:\n");
            printf("%s: %d habitantes\n", carta1_pais, carta1_populacao);
            printf("%s: %d habitantes\n", carta2_pais, carta2_populacao);

            if (carta1_populacao > carta2_populacao) {
                printf("Vencedor: %s\n", carta1_pais);
            } else if (carta2_populacao > carta1_populacao) {
                printf("Vencedor: %s\n", carta2_pais);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Comparacao por Area:\n");
            printf("%s: %.2f km2\n", carta1_pais, carta1_area);
            printf("%s: %.2f km2\n", carta2_pais, carta2_area);

            if (carta1_area > carta2_area) {
                printf("Vencedor: %s\n", carta1_pais);
            } else if (carta2_area > carta1_area) {
                printf("Vencedor: %s\n", carta2_pais);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparacao por PIB:\n");
            printf("%s: %.2f bilhoes\n", carta1_pais, carta1_pib);
            printf("%s: %.2f bilhoes\n", carta2_pais, carta2_pib);

            if (carta1_pib > carta2_pib) {
                printf("Vencedor: %s\n", carta1_pais);
            } else if (carta2_pib > carta1_pib) {
                printf("Vencedor: %s\n", carta2_pais);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Comparacao por Pontos Turisticos:\n");
            printf("%s: %d pontos\n", carta1_pais, carta1_pontosTuristicos);
            printf("%s: %d pontos\n", carta2_pais, carta2_pontosTuristicos);

            if (carta1_pontosTuristicos > carta2_pontosTuristicos) {
                printf("Vencedor: %s\n", carta1_pais);
            } else if (carta2_pontosTuristicos > carta1_pontosTuristicos) {
                printf("Vencedor: %s\n", carta2_pais);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade (regra invertida: vence o menor valor)
            printf("Comparacao por Densidade Demografica:\n");
            printf("%s: %.2f hab/km2\n", carta1_pais, carta1_densidade);
            printf("%s: %.2f hab/km2\n", carta2_pais, carta2_densidade);

            if (carta1_densidade < carta2_densidade) {
                printf("Vencedor: %s\n", carta1_pais);
            } else if (carta2_densidade < carta1_densidade) {
                printf("Vencedor: %s\n", carta2_pais);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 5.\n");
    }

    return 0;
}
#include <stdio.h>

int main(void) {
    // Carta 1
    char carta1_pais[50] = "Brasil";
    int carta1_populacao = 214000000;
    float carta1_area = 8516000.0;
    float carta1_pib = 2200.0; // em bilhões
    int carta1_pontosTuristicos = 50;
    float carta1_densidade = carta1_populacao / carta1_area;

    // Carta 2
    char carta2_pais[50] = "Argentina";
    int carta2_populacao = 46000000;
    float carta2_area = 2780000.0;
    float carta2_pib = 500.0; // em bilhões
    int carta2_pontosTuristicos = 30;
    float carta2_densidade = carta2_populacao / carta2_area;

    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    float soma1, soma2;

    // Menu principal
    printf("===== SUPER TRUNFO - COMPARACAO AVANCADA =====\n");
    printf("Carta 1: %s\n", carta1_pais);
    printf("Carta 2: %s\n\n", carta2_pais);

    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Menu dinâmico para o segundo atributo
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue; // não mostra o já escolhido
        switch (i) {
            case 1: printf("1 - Populacao\n"); break;
            case 2: printf("2 - Area\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turisticos\n"); break;
            case 5: printf("5 - Densidade Demografica\n"); break;
        }
    }
    printf("Opcao: ");
    scanf("%d", &opcao2);

    printf("\n=== RESULTADO DA COMPARACAO ===\n");

    // ----- Primeiro atributo -----
    switch (opcao1) {
        case 1: // População
            valor1_carta1 = carta1_populacao;
            valor1_carta2 = carta2_populacao;
            printf("Atributo 1 - Populacao: %s = %d | %s = %d\n",
                   carta1_pais, carta1_populacao, carta2_pais, carta2_populacao);
            break;
        case 2: // Área
            valor1_carta1 = carta1_area;
            valor1_carta2 = carta2_area;
            printf("Atributo 1 - Area: %s = %.2f | %s = %.2f\n",
                   carta1_pais, carta1_area, carta2_pais, carta2_area);
            break;
        case 3: // PIB
            valor1_carta1 = carta1_pib;
            valor1_carta2 = carta2_pib;
            printf("Atributo 1 - PIB: %s = %.2f | %s = %.2f\n",
                   carta1_pais, carta1_pib, carta2_pais, carta2_pib);
            break;
        case 4: // Pontos turísticos
            valor1_carta1 = carta1_pontosTuristicos;
            valor1_carta2 = carta2_pontosTuristicos;
            printf("Atributo 1 - Pontos Turisticos: %s = %d | %s = %d\n",
                   carta1_pais, carta1_pontosTuristicos, carta2_pais, carta2_pontosTuristicos);
            break;
        case 5: // Densidade (vence o menor)
            valor1_carta1 = carta1_densidade;
            valor1_carta2 = carta2_densidade;
            printf("Atributo 1 - Densidade Demografica: %s = %.2f | %s = %.2f\n",
                   carta1_pais, carta1_densidade, carta2_pais, carta2_densidade);
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ----- Segundo atributo -----
    switch (opcao2) {
        case 1:
            valor2_carta1 = carta1_populacao;
            valor2_carta2 = carta2_populacao;
            printf("Atributo 2 - Populacao: %s = %d | %s = %d\n",
                   carta1_pais, carta1_populacao, carta2_pais, carta2_populacao);
            break;
        case 2:
            valor2_carta1 = carta1_area;
            valor2_carta2 = carta2_area;
            printf("Atributo 2 - Area: %s = %.2f | %s = %.2f\n",
                   carta1_pais, carta1_area, carta2_pais, carta2_area);
            break;
        case 3:
            valor2_carta1 = carta1_pib;
            valor2_carta2 = carta2_pib;
            printf("Atributo 2 - PIB: %s = %.2f | %s = %.2f\n",
                   carta1_pais, carta1_pib, carta2_pais, carta2_pib);
            break;
        case 4:
            valor2_carta1 = carta1_pontosTuristicos;
            valor2_carta2 = carta2_pontosTuristicos;
            printf("Atributo 2 - Pontos Turisticos: %s = %d | %s = %d\n",
                   carta1_pais, carta1_pontosTuristicos, carta2_pais, carta2_pontosTuristicos);
            break;
        case 5:
            valor2_carta1 = carta1_densidade;
            valor2_carta2 = carta2_densidade;
            printf("Atributo 2 - Densidade Demografica: %s = %.2f | %s = %.2f\n",
                   carta1_pais, carta1_densidade, carta2_pais, carta2_densidade);
            break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ---- Soma dos atributos ----
    // Regra: todos vencem pelo maior, exceto densidade (vence o menor).
    // Vamos somar valores ajustados com ternário para inverter regra da densidade.
    float adj1_carta1 = (opcao1 == 5) ? (1 / valor1_carta1) : valor1_carta1;
    float adj1_carta2 = (opcao1 == 5) ? (1 / valor1_carta2) : valor1_carta2;

    float adj2_carta1 = (opcao2 == 5) ? (1 / valor2_carta1) : valor2_carta1;
    float adj2_carta2 = (opcao2 == 5) ? (1 / valor2_carta2) : valor2_carta2;

    soma1 = adj1_carta1 + adj2_carta1;
    soma2 = adj1_carta2 + adj2_carta2;

    printf("\nSoma dos atributos (ajustada para regra da densidade):\n");
    printf("%s = %.2f | %s = %.2f\n", carta1_pais, soma1, carta2_pais, soma2);

    // Resultado final
    if (soma1 > soma2) {
        printf("\nVencedor: %s\n", carta1_pais);
    } else if (soma2 > soma1) {
        printf("\nVencedor: %s\n", carta2_pais);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}