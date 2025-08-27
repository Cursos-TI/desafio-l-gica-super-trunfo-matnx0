#include <stdio.h>
#include <string.h>

/*----------------------- Lógica Super Trunfo - Nível Novato -----------------------
Objetivo: Cadastro e Comparação de Cartas*/


int main() {
    // Definindo as variáveis para a primeira carta.
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Definindo as variáveis para a segunda carta.
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Variável para armazenar a escolha do atributo de comparação.
    int atributo_escolhido;

    // Cadastro da Primeira Carta
    printf("--- Cadastro da Primeira Carta ---\n");
    printf("Digite uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade1); 

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cadastro da Segunda Carta
    printf("\n--- Cadastro da Segunda Carta ---\n");
    printf("Digite uma letra para representar o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: 01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Escolha do Atributo para Comparacao
    printf("\n--- Escolha do Atributo para Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("Escolha o atributo (1-4): ");
    scanf("%d", &atributo_escolhido);

    // Comparacao das Cartas com base na escolha
    
    // Compara a populacao se a escolha for 1.
    if (atributo_escolhido == 1) { 
        printf("\nComparando por População...\n");
        if (populacao1 > populacao2) { 
            printf("A carta de %s (%c%s) venceu!\n", nome_cidade1, estado1, codigo1);
        } else {
            // Se nao for maior, verifica se a segunda e maior ou se e um empate.
            if (populacao2 > populacao1) {
                printf("A carta de %s (%c%s) venceu!\n", nome_cidade2, estado2, codigo2);
            } else {
                printf("As cartas empataram!\n");
            }
        }
    }

    // Compara a area se a escolha for 2.
    if (atributo_escolhido == 2) { 
        printf("\nComparando por Área...\n");
        if (area1 > area2) { 
            printf("A carta de %s (%c%s) venceu!\n", nome_cidade1, estado1, codigo1);
        } else {
            if (area2 > area1) {
                printf("A carta de %s (%c%s) venceu!\n", nome_cidade2, estado2, codigo2);
            } else {
                printf("As cartas empataram!\n");
            }
        }
    }

    // Compara o PIB se a escolha for 3.
    if (atributo_escolhido == 3) { 
        printf("\nComparando por PIB...\n");
        if (pib1 > pib2) { 
            printf("A carta de %s (%c%s) venceu!\n", nome_cidade1, estado1, codigo1);
        } else {
            if (pib2 > pib1) {
                printf("A carta de %s (%c%s) venceu!\n", nome_cidade2, estado2, codigo2);
            } else {
                printf("As cartas empataram!\n");
            }
        }
    }

    // Compara os pontos turisticos se a escolha for 4.
    if (atributo_escolhido == 4) { 
        printf("\nComparando por Pontos Turísticos...\n");
        if (pontos_turisticos1 > pontos_turisticos2) { 
            printf("A carta de %s (%c%s) venceu!\n", nome_cidade1, estado1, codigo1);
        } else {
            if (pontos_turisticos2 > pontos_turisticos1) {
                printf("A carta de %s (%c%s) venceu!\n", nome_cidade2, estado2, codigo2);
            } else {
                printf("As cartas empataram!\n");
            }
        }
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}





