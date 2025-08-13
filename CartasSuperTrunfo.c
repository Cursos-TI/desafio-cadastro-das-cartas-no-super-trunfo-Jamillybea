#include <stdio.h>
#include <string.h>

int main() {
    char estado1[100], estado2[100];
    char codigo1[24], codigo2[24];
    char cidade1[27], cidade2[27];
    unsigned long int populacao1, populacao2;
    float pib1, pib2, area1, area2;
    int pontos1, pontos2;
    float dens1, dens2;
    float percap1, percap2;
    float super1, super2;


    printf("=== CARTA 1 ===\n");
    printf("Digite o nome do estado:\n");
    fgets(estado1, sizeof(estado1), stdin);
    estado1[strcspn(estado1, "\n")] = 0;
    // strcspn encontra '\n' e o substitui por '\0' para remover a quebra de linha

    printf("Digite o codigo da carta:\n");
    scanf("%23s", codigo1);
    getchar();
    // %23s ler no máximo 23 caracteres, sendo 1 (24) armazenado para o 0

    printf("Digite o nome da cidade:\n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    // sizeof(cidade1) limita a leitura ao tamanho da variável
    // stdin lê do teclado

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao1);

    printf("Digite a area (km²):\n");
    scanf("%f", &area1);

    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos1);
    getchar();

    dens1 = populacao1 / area1;
    percap1 = pib1 / populacao1;
    super1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + percap1 + (1.0f / dens1);

    
    printf("\n=== Descricao carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", dens1);
    printf("PIB per Capita: %.2f\n", percap1);
    printf("Super Poder: %.2f\n", super1);

    
    printf("\n=== CARTA 2 ===\n");
    printf("Digite o nome do estado:\n");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o codigo da carta:\n");
    scanf("%23s", codigo2);
    getchar();

    printf("Digite o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Digite a populacao:\n");
    scanf("%lu", &populacao2);

    printf("Digite a area (km2):\n");
    scanf("%f", &area2);

    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos2);

    dens2 = populacao2 / area2;
    percap2 = pib2 / populacao2;
    super2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + percap2 + (1.0f / dens2);


    printf("\n=== Descricao carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", dens2);
    printf("PIB per Capita: %.2f\n", percap2);
    printf("Super Poder: %.2f\n", super2);

    printf("\n===Comparação Cartas===\n");
if (populacao1 > populacao2)
    printf("Populacao: Carta 1 venceu (1)\n");
else
    printf("Populacao: Carta 2 venceu (0)\n");

// Area (maior vence)
if (area1 > area2)
    printf("Area: Carta 1 venceu (1)\n");
else
    printf("Area: Carta 2 venceu (0)\n");

// PIB (maior vence)
if (pib1 > pib2)
    printf("PIB: Carta 1 venceu (1)\n");
else
    printf("PIB: Carta 2 venceu (0)\n");

// Pontos Turisticos (maior vence)
if (pontos1 > pontos2)
    printf("Pontos Turisticos: Carta 1 venceu (1)\n");
else
    printf("Pontos Turisticos: Carta 2 venceu (0)\n");

// Densidade populacional (menor vence)
if (dens1 < dens2)
    printf("Densidade Populacional: Carta 1 venceu (1)\n");
else
    printf("Densidade Populacional: Carta 2 venceu (0)\n");

// PIB per Capita (maior vence)
if (percap1 > percap2)
    printf("PIB per Capita: Carta 1 venceu (1)\n");
else
    printf("PIB per Capita: Carta 2 venceu (0)\n");

// Super Poder (maior vence)
if (super1 > super2)
    printf("Super Poder: Carta 1 venceu (1)\n");
else
    printf("Super Poder: Carta 2 venceu (0)\n");

    return 0;
}
