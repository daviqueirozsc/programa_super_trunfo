#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;

    printf("Digite o Estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da Cidade da primeira carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da primeira carta: \n");
    scanf("%s", cidade1);

    printf("Digite a População da primeira carta: \n");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²) da primeira carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos da primeira carta: \n");
    scanf("%d", &pontos_turisticos1);

    
    
    printf("Digite o Estado da segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Cidade da segunda carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da segunda carta: \n");
    scanf("%s", cidade2);

    printf("Digite a População da segunda carta: \n");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²) da segunda carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos da segunda carta: \n");
    scanf("%d", &pontos_turisticos2);


    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}