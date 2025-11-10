#include <stdio.h>

int main() {
    char estado1[2], estado2[2];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    int opcao;
    int atributo;
    
    printf("Seja bem-vindo ao super-trunfo!\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1 - Começar jogo\n");
    printf("2 - Regras\n");
    printf("3 - Sair do jogo\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("Primeiro, vamos registrar as nossas cartas:\n");
        
        printf("Digite o Estado da primeira carta (UF): \n");
        scanf("%s", &estado1);

        printf("Digite o Nome da Cidade da primeira carta: \n");
        scanf("%s", &cidade1);

        printf("Digite a População da primeira carta: \n");
        scanf("%d", &populacao1);

        printf("Digite a Área (em km²) da primeira carta: \n");
        scanf("%f", &area1);

        printf("Digite o PIB da primeira carta: \n");
        scanf("%f", &pib1);

        printf("Digite o Número de Pontos Turísticos da primeira carta: \n");
        scanf("%d", &pontos_turisticos1);


        printf("Digite o Estado da segunda carta: \n");
        scanf("%s", &estado2);


        printf("Digite o Nome da Cidade da segunda carta: \n");
        scanf("%s", &cidade2);

        printf("Digite a População da segunda carta: \n");
        scanf("%d", &populacao2);

        printf("Digite a Área (em km²) da segunda carta: \n");
        scanf("%f", &area2);

        printf("Digite o PIB da segunda carta: \n");
        scanf("%f", &pib2);

        printf("Digite o Número de Pontos Turísticos da segunda carta: \n");
        scanf("%d", &pontos_turisticos2);

        printf("\n");

        printf("Carta 1:\n");
        printf("Estado: %s\n", estado1);
        printf("Cidade: %s\n", cidade1);
        printf("População: %d\n", populacao1);
        printf("Área: %f km²\n", area1);
        printf("PIB: %f bilhões de reais\n", pib1);
        printf("Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", (float) populacao1 / area1);
        printf("PIB per Capita: %.2f reais\n", (float) pib1 / populacao1);

        printf("\n");

        printf("Carta 2:\n");
        printf("Estado: %s\n", estado2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d\n", populacao2);
        printf("Área: %f km²\n", area2);
        printf("PIB: %f bilhões de reais\n", pib2);
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", (float) populacao2 / area2);
        printf("PIB per Capita: %.2f reais\n", (float) pib2 / populacao2);

        printf("Agora escolha qual atributo você deseja batalhar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        scanf("%d", &atributo);

        if (atributo == 1)
        {
            if (populacao1 > populacao2)
            {
                printf("População da primeira carta maior!\n");
                printf("Jogador 1 venceu!\n");
            } else if (populacao2 > populacao1)
            {
                printf("População da segunda carta maior!\n");
                printf("Jogador 2 venceu!\n");
            } else if (populacao1 == populacao2)
            {
                printf("Populações iguais!\n");
                printf("É um empate!\n");
            }
        }else if (atributo == 2)
        {
            if (area1 > area2)
            {
                printf("Área da primeira carta maior!\n");
                printf("Jogador 1 venceu!\n");
            } else if (area2 > area1)
            {
                printf("Área da segunda carta maior!\n");
                printf("Jogador 2 venceu!\n");
            } else if (area1 == area2)
            {
                printf("Áreas iguais!\n");
                printf("É um empate!\n");
            }
        } else if (atributo == 3)
            {
            if (pib1 > pib2)
            {
                printf("PIB da primeira carta maior!\n");
                printf("Jogador 1 venceu!\n");
            } else if (pib2 > pib1)
            {
                printf("PIB da segunda carta maior!\n");
                printf("Jogador 2 venceu!\n");
            } else if (pib1 == pib2)
            {
                printf("PIB's iguais!\n");
                printf("É um empate!\n");
            }
        } else if (atributo == 4)
        {
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("Pontos turísticos da primeira carta maior!\n");
                printf("Jogador 1 venceu!\n");
            } else if (pontos_turisticos2 > pontos_turisticos1)
            {
                printf("Pontos turísticos da segunda carta maior!\n");
                printf("Jogador 2 venceu!\n");
            } else if (pontos_turisticos1 == pontos_turisticos2)
            {
                printf("Pontos turísticos iguais!\n");
                printf("É um empate!\n");
            }
        } else
        {
            printf("Opção inválida!\n");
        }
        break;
    case 2:
        printf("Regras do jogo:\n");
        break;
    case 3:
        printf("Saindo do jogo...\n");
        break;
    default:
        printf("Opção inválida!\n");
        break;
    }
    return 0;
}