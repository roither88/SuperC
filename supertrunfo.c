#include <stdio.h>
    int main() {

    //variáveis para armazenar os dados
    char estado1[40], estado2[40], codigo1[20], codigo2[20], cidade1[40], cidade2[40];
    int populacao1, populacao2, pturisticos1, pturisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;


    //campos para o usuário digitar as informações do primeiro estado
    printf("Digite o Estado 1 abaixo: \n");
    scanf("%s", estado1);
    printf("Digite o código da carta abaixo: \n");
    scanf("%s", codigo1);
    printf("Digite a cidade desse estado abaixo: \n");
    scanf("%s", cidade1);
    printf("Digite a população da cidade abaixo: \n");
    scanf("%d", &populacao1);
    printf("Digite a área da cidade em Km² abaixo: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade abaixo: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos dessa cidade abaixo: \n");
    scanf("%d", &pturisticos1);

    //variaveis com calculos da primeira carta
    densidade1 = (float)populacao1 / area1;
    percapita1 = (float)(pib1 / populacao1);

  

    //Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f  de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pturisticos1);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidade1);
    printf("Renda Per Capita: R$ %.2f\n", percapita1);


    //campos para o usuário digitar as informações do segundo estado
    printf("Digite o Estado 2 abaixo: \n");
    scanf("%s", estado2);
    printf("Digite o código da carta abaixo: \n");
    scanf("%s", codigo2);
    printf("Digite a cidade desse estado abaixo: \n");
    scanf("%s", cidade2);
    printf("Digite a população dessa cidade abaixo: \n");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade em Km² abaixo: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade abaixo: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos dessa cidade abaixo: \n");
    scanf("%d", &pturisticos2);

    //variaveis com calculos da segunda carta
    densidade2 = (float)populacao2 / area2;
    percapita2 = (float)(pib2 / populacao2);

    //Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pturisticos2);
    printf("Densidade Populacional: %.2f habitantes por Km²\n", densidade2);
    printf("Renda Per Capita: R$ %.2f\n", percapita2);

    return 0;
    }
