/**
 * Simulação Avançada de Xadrez em C
 * Implementa recursividade e loops complexos
 *
 * Autor: [Seu Nome]
 * Data: [Data Atual]
 * Versão: Final
 */

#include <stdio.h>

// Constantes para controle dos movimentos
#define MOV_TORRE 5
#define MOV_BISPO 5
#define MOV_RAINHA 8
#define MOV_CAVALO_CIMA 2
#define MOV_CAVALO_DIREITA 1

// Protótipos das funções
void moverTorreRecursivo(int passo);
void moverBispoRecursivo(int passo);
void moverRainhaRecursivo(int passo);
void moverBispoLoopsAninhados();
void moverCavaloLoopsComplexos();

int main()
{
    printf("===== SIMULAÇÃO DE XADREZ AVANÇADA =====\n\n");

    // 1. Torre com recursividade
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorreRecursivo(1);

    // 2. Bispo com recursividade
    printf("\n--- Movimento do Bispo (Recursivo) ---\n");
    moverBispoRecursivo(1);

    // 3. Bispo com loops aninhados
    printf("\n--- Movimento do Bispo (Loops Aninhados) ---\n");
    moverBispoLoopsAninhados();

    // 4. Rainha com recursividade
    printf("\n--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(1);

    // 5. Cavalo com loops complexos
    printf("\n--- Movimento do Cavalo (Loops Complexos) ---\n");
    moverCavaloLoopsComplexos();

    printf("\n===== SIMULAÇÃO CONCLUÍDA =====\n");
    return 0;
}

/**
 * Função recursiva para movimento da Torre
 * @param passo Número do movimento atual
 */
void moverTorreRecursivo(int passo)
{
    if (passo > MOV_TORRE)
        return; // Caso base

    printf("Passo %d: Direita\n", passo);
    moverTorreRecursivo(passo + 1); // Chamada recursiva
}

/**
 * Função recursiva para movimento do Bispo
 * @param passo Número do movimento atual
 */
void moverBispoRecursivo(int passo)
{
    if (passo > MOV_BISPO)
        return; // Caso base

    printf("Passo %d: Cima, Direita\n", passo);
    moverBispoRecursivo(passo + 1); // Chamada recursiva
}

/**
 * Implementação do Bispo com loops aninhados
 * Loop externo: controle vertical
 * Loop interno: controle horizontal (executa 1x por iteração)
 */
void moverBispoLoopsAninhados()
{
    for (int vertical = 1; vertical <= MOV_BISPO; vertical++)
    {
        for (int horizontal = 1; horizontal <= 1; horizontal++)
        {
            printf("Passo %d: Cima, Direita\n", vertical);
        }
    }
}

/**
 * Função recursiva para movimento da Rainha
 * @param passo Número do movimento atual
 */
void moverRainhaRecursivo(int passo)
{
    if (passo > MOV_RAINHA)
        return; // Caso base

    printf("Passo %d: Esquerda\n", passo);
    moverRainhaRecursivo(passo + 1); // Chamada recursiva
}

/**
 * Implementação do Cavalo com loops complexos
 * Utiliza break, continue e múltiplas variáveis de controle
 */
void moverCavaloLoopsComplexos()
{
    int passo = 1;
    int completouVertical = 0;

    // Loop principal
    while (passo <= MOV_CAVALO_CIMA + MOV_CAVALO_DIREITA)
    {
        // Parte vertical do L (2 casas para cima)
        if (!completouVertical)
        {
            for (int i = 1; i <= MOV_CAVALO_CIMA; i++)
            {
                printf("Passo %d: Cima\n", passo++);
            }
            completouVertical = 1;
            continue;
        }

        // Parte horizontal do L (1 casa para direita)
        if (passo <= MOV_CAVALO_CIMA + MOV_CAVALO_DIREITA)
        {
            printf("Passo %d: Direita\n", passo++);
            break; // Sai do loop após completar o movimento
        }
    }
}