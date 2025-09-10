#include <stdio.h>

int main(void) {
    // ==============================
    // Simulação da Torre (usando for)
    // ==============================
    int casasTorre = 5; // quantidade de casas que a Torre vai andar para a direita
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    // ===============================
    // Simulação do Bispo (usando while)
    // ===============================
    int casasBispo = 5; // quantidade de casas que o Bispo vai andar na diagonal
    int contador = 1;
    printf("\n=== Movimento do Bispo ===\n");
    while (contador <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", contador);
        contador++;
    }

    // ==================================
    // Simulação da Rainha (usando do-while)
    // ==================================
    int casasRainha = 8; // quantidade de casas que a Rainha vai andar para a esquerda
    int contadorRainha = 1;
    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d casa)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
#include <stdio.h>

int main(void) {
    // ==============================
    // Simulação da Torre (usando for)
    // ==============================
    int casasTorre = 5; // quantidade de casas que a Torre vai andar para a direita
    printf("=== Movimento da Torre ===\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    // ===============================
    // Simulação do Bispo (usando while)
    // ===============================
    int casasBispo = 5; // quantidade de casas que o Bispo vai andar na diagonal
    int contadorBispo = 1;
    printf("\n=== Movimento do Bispo ===\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima, Direita (%d casa)\n", contadorBispo);
        contadorBispo++;
    }

    // ==================================
    // Simulação da Rainha (usando do-while)
    // ==================================
    int casasRainha = 8; // quantidade de casas que a Rainha vai andar para a esquerda
    int contadorRainha = 1;
    printf("\n=== Movimento da Rainha ===\n");
    do {
        printf("Esquerda (%d casa)\n", contadorRainha);
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    // ================================
    // Simulação do Cavalo (loops aninhados)
    // ================================
    int movimentosVerticais = 2; // duas casas para baixo
    int movimentosHorizontais = 1; // uma casa para a esquerda
    printf("\n=== Movimento do Cavalo ===\n");

    for (int v = 1; v <= movimentosVerticais; v++) {
        printf("Baixo (%d)\n", v);
    }

    int h = 1;
    while (h <= movimentosHorizontais) {
        printf("Esquerda (%d)\n", h);
        h++;
    }

    return 0;
}
#include <stdio.h>

// ==============================
// Funções Recursivas
// ==============================

// Torre: Move-se horizontalmente para a direita
void moverTorre(int casas, int atual) {
    if (atual > casas) return; // caso base: acabou o movimento
    printf("Direita (%d casa)\n", atual);
    moverTorre(casas, atual + 1); // chamada recursiva para a próxima casa
}

// Bispo: Move-se diagonalmente para cima e direita usando recursão
void moverBispoRecursivo(int casas, int atual) {
    if (atual > casas) return;
    printf("Cima, Direita (%d casa)\n", atual);
    moverBispoRecursivo(casas, atual + 1);
}

// Rainha: Move-se horizontalmente para a esquerda usando recursão
void moverRainha(int casas, int atual) {
    if (atual > casas) return;
    printf("Esquerda (%d casa)\n", atual);
    moverRainha(casas, atual + 1);
}

// ==============================
// Função principal
// ==============================
int main(void) {
    // ==============================
    // Torre
    // ==============================
    int casasTorre = 5;
    printf("=== Movimento da Torre ===\n");
    moverTorre(casasTorre, 1);

    // ==============================
    // Bispo com loops aninhados e recursão
    // ==============================
    int casasBispo = 5;
    printf("\n=== Movimento do Bispo ===\n");
    for (int i = 1; i <= casasBispo; i++) {          // loop vertical (Cima)
        for (int j = 1; j <= 1; j++) {               // loop horizontal (Direita) - pode ser ajustado
            printf("Cima, Direita (%d casa)\n", i);
        }
    }

    // também podemos chamar a versão recursiva
    // moverBispoRecursivo(casasBispo, 1);

    // ==============================
    // Rainha
    // ==============================
    int casasRainha = 8;
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(casasRainha, 1);

    // ==============================
    // Cavalo com loops complexos aninhados
    // ==============================
    int movimentosVerticais = 2; // duas casas para cima
    int movimentosHorizontais = 1; // uma casa para a direita
    printf("\n=== Movimento do Cavalo ===\n");

    for (int v = 1; v <= movimentosVerticais; v++) {
        printf("Cima (%d)\n", v);
        for (int h = 1; h <= movimentosHorizontais; h++) {
            // se quisermos controlar fluxo de forma avançada:
            if (v == 2 && h > 1) break; // exemplo de controle: sair do loop horizontal se condição for atendida
            printf("Direita (%d)\n", h);
        }
    }

    return 0;
}
