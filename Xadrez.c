/**
 * Simulação de movimentos de peças de xadrez em C
 *
 * Este programa demonstra o movimento de quatro peças de xadrez:
 * - Torre: usando estrutura for
 * - Bispo: usando estrutura while
 * - Rainha: usando estrutura do-while
 * - Cavalo: usando loops aninhados (for e while)
 * Versão: 2.0
 */

#include <stdio.h>

int main()
{
    // Constantes com o número de movimentos para cada peça
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    const int PARTE_VERTICAL_CAVALO = 2;   // 2 casas para baixo (parte vertical do L)
    const int PARTE_HORIZONTAL_CAVALO = 1; // 1 casa para esquerda (parte horizontal do L)

    // 1. Movimento da Torre (horizontal para direita) usando for
    printf("=== Movimento da Torre ===\n");
    printf("Movendo %d casas para a direita:\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++)
    {
        printf("%d: Direita\n", i + 1);
    }
    printf("\n");

    // 2. Movimento do Bispo (diagonal superior direita) usando while
    printf("=== Movimento do Bispo ===\n");
    printf("Movendo %d casas na diagonal superior direita:\n", MOVIMENTOS_BISPO);
    int contadorBispo = 0;
    while (contadorBispo < MOVIMENTOS_BISPO)
    {
        printf("%d: Cima, Direita\n", contadorBispo + 1);
        contadorBispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha (horizontal para esquerda) usando do-while
    printf("=== Movimento da Rainha ===\n");
    printf("Movendo %d casas para a esquerda:\n", MOVIMENTOS_RAINHA);
    int contadorRainha = 0;
    do
    {
        printf("%d: Esquerda\n", contadorRainha + 1);
        contadorRainha++;
    } while (contadorRainha < MOVIMENTOS_RAINHA);

    printf("\n");

    // 4. Movimento do Cavalo (em L) usando loops aninhados
    printf("=== Movimento do Cavalo ===\n");
    printf("Movendo em L (%d para baixo, %d para esquerda):\n",
           PARTE_VERTICAL_CAVALO, PARTE_HORIZONTAL_CAVALO);

    int passoTotal = 1;

    // Loop for para a parte vertical do L (2 casas para baixo)
    for (int vertical = 0; vertical < PARTE_VERTICAL_CAVALO; vertical++)
    {
        printf("%d: Baixo\n", passoTotal++);
    }

    // Loop while para a parte horizontal do L (1 casa para esquerda)
    int horizontal = 0;
    while (horizontal < PARTE_HORIZONTAL_CAVALO)
    {
        printf("%d: Esquerda\n", passoTotal++);
        horizontal++;
    }

    return 0;
}