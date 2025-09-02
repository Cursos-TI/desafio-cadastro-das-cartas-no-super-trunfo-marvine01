#include <stdio.h>

int main() {
    // -----------------------------
    // Simulação do movimento da Torre
    // -----------------------------
    int movimentoTorre = 5; // número de casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // Simulação do movimento do Bispo
    // -----------------------------
    int movimentoBispo = 5; // número de casas na diagonal
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // -----------------------------
    // Simulação do movimento da Rainha
    // -----------------------------
    int movimentoRainha = 8; // número de casas para a esquerda
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    return 0;
}
#include <stdio.h>

int main() {
    // -----------------------------
    // Simulação do movimento da Torre
    // -----------------------------
    int movimentoTorre = 5; // número de casas para a direita
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // -----------------------------
    // Simulação do movimento do Bispo
    // -----------------------------
    int movimentoBispo = 5; // número de casas na diagonal
    int contadorBispo = 1;
    printf("\nMovimento do Bispo:\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // -----------------------------
    // Simulação do movimento da Rainha
    // -----------------------------
    int movimentoRainha = 8; // número de casas para a esquerda
    int contadorRainha = 1;
    printf("\nMovimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // -----------------------------
    // Simulação do movimento do Cavalo
    // -----------------------------
    int movimentoBaixo = 2;   // duas casas para baixo
    int movimentoEsquerda = 1; // uma casa para a esquerda

    printf("\nMovimento do Cavalo:\n");

    // Loop externo: movimento para baixo (obrigatoriamente um for)
    for (int i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo\n");

        // Loop interno (while): só executa no último passo do "Baixo"
        if (i == movimentoBaixo) {
            int j = 1;
            while (j <= movimentoEsquerda) {
                printf("Esquerda\n");
                j++;
            }
        }
    }

    return 0;
}
#include <stdio.h>

// ---------------------------------------
// Função recursiva para o movimento da Torre
// A Torre anda em linha reta (horizontal/vertical)
// Aqui vamos simular 5 casas para a direita.
// ---------------------------------------
void moverTorre(int casas) {
    if (casas == 0) {
        return; // condição de parada
    }
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// ---------------------------------------
// Função recursiva para o movimento da Rainha
// A Rainha pode andar em todas as direções.
// Aqui vamos simular 8 casas para a esquerda.
// ---------------------------------------
void moverRainha(int casas) {
    if (casas == 0) {
        return; // condição de parada
    }
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// ---------------------------------------
// Função recursiva + loops aninhados para o Bispo
// O Bispo anda na diagonal.
// Aqui vamos simular 5 casas para cima e à direita.
// Recursividade controla a profundidade (casas),
// enquanto loops aninhados imprimem os dois movimentos.
// ---------------------------------------
void moverBispo(int casas) {
    if (casas == 0) {
        return; // condição de parada
    }

    // Loop externo para o movimento vertical (Cima)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");

        // Loop interno para o movimento horizontal (Direita)
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1); // chamada recursiva
}

// ---------------------------------------
// Movimento do Cavalo com loops aninhados
// O Cavalo anda em "L": 2 casas em uma direção + 1 perpendicular.
// Aqui vamos simular 2 casas para cima e 1 para a direita.
// Usamos loops aninhados com múltiplas variáveis e controle de fluxo.
// ---------------------------------------
void moverCavalo() {
    int movimentoCima = 2;
    int movimentoDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo para o movimento vertical
    for (int i = 1; i <= movimentoCima; i++) {
        printf("Cima\n");

        // Quando terminar o movimento vertical, faz o horizontal
        if (i == movimentoCima) {
            int j = 1;
            while (j <= movimentoDireita) {
                if (j == 0) {
                    j++;
                    continue; // nunca vai acontecer, mas exemplo de controle
                }

                printf("Direita\n");

                if (j == movimentoDireita) {
                    break; // encerra quando concluir a última casa
                }
                j++;
            }
        }
    }
}

// ---------------------------------------
// Função principal
// ---------------------------------------
int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
