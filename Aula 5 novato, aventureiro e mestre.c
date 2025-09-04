#include <stdio.h>

int main(void) {
    // =========================
    // 1. Criar Tabuleiro
    // =========================
    int tabuleiro[10][10] = {0}; // 10x10 inicializado com 0 (água)

    // =========================
    // 2. Definir navios
    // =========================
    int navio_horizontal[3] = {3, 3, 3}; // navio horizontal tamanho 3
    int navio_vertical[3] = {3, 3, 3};   // navio vertical tamanho 3

    // Coordenadas iniciais definidas no código
    int linha_h = 2;   // linha inicial do navio horizontal
    int coluna_h = 4;  // coluna inicial do navio horizontal

    int linha_v = 5;   // linha inicial do navio vertical
    int coluna_v = 7;  // coluna inicial do navio vertical

    // =========================
    // 3. Posicionar navios
    // =========================

    // Posicionar navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
    }

    // Posicionar navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
    }

    // =========================
    // 4. Exibir tabuleiro
    // =========================
    printf("=== Tabuleiro Batalha Naval ===\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define TAM_TAB 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3

// Função para verificar se a posição está livre
int posicao_valida(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    if (linha < 0 || linha >= TAM_TAB || coluna < 0 || coluna >= TAM_TAB)
        return 0; // fora dos limites
    if (tab[linha][coluna] != AGUA)
        return 0; // posição ocupada
    return 1;
}

// Função para posicionar navio horizontal
void posiciona_horizontal(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (!posicao_valida(tab, linha, coluna + i)) return;
        tab[linha][coluna + i] = NAVIO;
    }
}

// Função para posicionar navio vertical
void posiciona_vertical(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (!posicao_valida(tab, linha + i, coluna)) return;
        tab[linha + i][coluna] = NAVIO;
    }
}

// Função para posicionar navio diagonal (descendente)
void posiciona_diagonal_desc(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (!posicao_valida(tab, linha + i, coluna + i)) return;
        tab[linha + i][coluna + i] = NAVIO;
    }
}

// Função para posicionar navio diagonal (ascendente)
void posiciona_diagonal_asc(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (!posicao_valida(tab, linha - i, coluna + i)) return;
        tab[linha - i][coluna + i] = NAVIO;
    }
}

int main(void) {
    int tabuleiro[TAM_TAB][TAM_TAB] = {0}; // inicializa com 0 (água)

    // =========================
    // Posicionamento dos navios
    // =========================
    // Dois navios padrão
    posiciona_horizontal(tabuleiro, 1, 1);
    posiciona_vertical(tabuleiro, 4, 5);

    // Dois navios diagonais
    posiciona_diagonal_desc(tabuleiro, 0, 7);  // diagonal descendente
    posiciona_diagonal_asc(tabuleiro, 9, 2);   // diagonal ascendente

    // =========================
    // Exibição do tabuleiro
    // =========================
    printf("=== Tabuleiro Batalha Naval ===\n");
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

#define TAM_TAB 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3
#define HABILIDADE 5

// Função para imprimir o tabuleiro com símbolos visuais
void imprime_tabuleiro(int tab[TAM_TAB][TAM_TAB]) {
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            if (tab[i][j] == AGUA) printf("~ ");        // Água
            else if (tab[i][j] == NAVIO) printf("N "); // Navio
            else if (tab[i][j] == HABILIDADE) printf("X "); // Área de habilidade
            else printf("? "); // Caso inesperado
        }
        printf("\n");
    }
}

// Função para posicionar navio horizontal
void posiciona_horizontal(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linha >= 0 && linha < TAM_TAB && coluna + i >= 0 && coluna + i < TAM_TAB)
            tab[linha][coluna + i] = NAVIO;
    }
}

// Função para posicionar navio vertical
void posiciona_vertical(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linha + i >= 0 && linha + i < TAM_TAB && coluna >= 0 && coluna < TAM_TAB)
            tab[linha + i][coluna] = NAVIO;
    }
}

// Função para posicionar navio diagonal descendente
void posiciona_diagonal_desc(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linha + i >= 0 && linha + i < TAM_TAB && coluna + i >= 0 && coluna + i < TAM_TAB)
            tab[linha + i][coluna + i] = NAVIO;
    }
}

// Função para posicionar navio diagonal ascendente
void posiciona_diagonal_asc(int tab[TAM_TAB][TAM_TAB], int linha, int coluna) {
    for (int i = 0; i < TAM_NAVIO; i++) {
        if (linha - i >= 0 && linha - i < TAM_TAB && coluna + i >= 0 && coluna + i < TAM_TAB)
            tab[linha - i][coluna + i] = NAVIO;
    }
}

// Função para aplicar matriz de habilidade no tabuleiro
void aplica_habilidade(int tab[TAM_TAB][TAM_TAB], int origem_linha, int origem_coluna, int matriz[][5], int tam) {
    int centro = tam / 2;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            int linha_tab = origem_linha + (i - centro);
            int col_tab = origem_coluna + (j - centro);
            if (linha_tab >= 0 && linha_tab < TAM_TAB && col_tab >= 0 && col_tab < TAM_TAB) {
                if (matriz[i][j] == 1 && tab[linha_tab][col_tab] == AGUA)
                    tab[linha_tab][col_tab] = HABILIDADE;
            }
        }
    }
}

int main(void) {
    int tabuleiro[TAM_TAB][TAM_TAB] = {0}; // inicializa com água

    // =========================
    // 1. Posicionamento de navios
    // =========================
    posiciona_horizontal(tabuleiro, 1, 1);
    posiciona_vertical(tabuleiro, 4, 5);
    posiciona_diagonal_desc(tabuleiro, 0, 7);
    posiciona_diagonal_asc(tabuleiro, 9, 2);

    // =========================
    // 2. Matrizes de habilidades (5x5)
    // =========================
    int cone[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,0,0,0,0},
        {0,0,0,0,0}
    };

    int cruz[5][5] = {
        {0,0,1,0,0},
        {0,0,1,0,0},
        {1,1,1,1,1},
        {0,0,1,0,0},
        {0,0,1,0,0}
    };

    int octaedro[5][5] = {
        {0,0,1,0,0},
        {0,1,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {0,0,1,0,0}
    };

    // =========================
    // 3. Aplicar habilidades no tabuleiro
    // =========================
    aplica_habilidade(tabuleiro, 2, 2, cone, 5);      // topo do cone em (2,2)
    aplica_habilidade(tabuleiro, 7, 7, cruz, 5);      // centro da cruz em (7,7)
    aplica_habilidade(tabuleiro, 5, 4, octaedro, 5);  // centro do octaedro em (5,4)

    // =========================
    // 4. Exibir tabuleiro final
    // =========================
    printf("=== Tabuleiro com Habilidades ===\n");
    imprime_tabuleiro(tabuleiro);

    return 0;
}