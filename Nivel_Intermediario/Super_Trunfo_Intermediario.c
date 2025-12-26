#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1;
    int pontos1;

    // Variáveis da Carta 2
    char estado2, codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2;
    int pontos2;

    int opcao;

    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões): "); scanf("%f", &pib1);
    printf("Pontos Turísticos: "); scanf("%d", &pontos1);
    densidade1 = (float)populacao1 / area1;

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões): "); scanf("%f", &pib2);
    printf("Pontos Turísticos: "); scanf("%d", &pontos2);
    densidade2 = (float)populacao2 / area2;

    // Menu Interativo
    printf("\n--- Escolha o Atributo para Comparação ---\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n--- Resultado ---\n");
    printf("Cidades: %s vs %s\n", cidade1, cidade2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Valores: %lu vs %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("Valores: %.2f vs %.2f\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (area1 < area2) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("Valores: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pib1 < pib2) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Valores: %d vs %d\n", pontos1, pontos2);
            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (pontos1 < pontos2) {
                printf("Vencedor: %s\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("Valores: %.2f vs %.2f\n", densidade1, densidade2);
            // Regra especial: Menor valor vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            } else if (densidade1 > densidade2) {
                printf("Vencedor: %s\n", cidade2);
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