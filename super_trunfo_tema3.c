#include <stdio.h>
    int main() {

    //variáveis para armazenar os dados
    char estado1[40], estado2[40], codigo1[20], codigo2[20], cidade1[40], cidade2[40];
    int populacao1, populacao2, pturisticos1, pturisticos2, escolha;
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, superpoder1, superpoder2;
    


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

    //variaveis com calculos de densidade e renda percapita da primeira carta
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

    //variaveis com calculos de densidade e renda percapita da segunda carta
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

    
    //cálculo dos superpoderes das cartas 
    superpoder1 = (populacao1 + area1 + pib1 + pturisticos1 + percapita1) - (densidade1);
    superpoder2 = (populacao2 + area2 + pib2 + pturisticos2 + percapita2) - (densidade2);
   
    //comparação das cartas
    //printf("Comparação entre as cartas:\n");
    //printf("Comparando a população: (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).: %d\n", (populacao1 > populacao2));
    //printf("Comparando a área: (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).: %d\n", (area1 > area2));
    //printf("Comparando o PIB: (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).: %d\n", (pib1 > pib2));
    //printf("Comparando os pontos turisticos: (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).: %d\n", (pturisticos1 > pturisticos2));
    //printf("Comparando a densidade populacional: (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).: %d\n", (densidade1 < densidade2));
    //printf("Comparando os superpoderes: (1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence).: %d\n", (superpoder1 > superpoder2));
    
    printf("\nSelecione um dos atributos para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - Densidade demográfica\n");
    printf("4 - PIB\n");
    printf("5 - Renda per capita\n");
    printf("6 - Pontos turísticos\n");
    printf("7 - Superpoder\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparações de população entre as cartas
    if (escolha == 1){
        if (populacao1 > populacao2) {
        printf("Carta 1 vence na população com: %d habitantes\n", populacao1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 vence na população com: %d habitantes\n", populacao2);
    } else {
        printf("Empate na população! Ambas têm: %d habitantes\n", populacao1);
    }
    }

     //Escolha da area
    if (escolha == 2){
     if (area1 > area2) {
        printf("Carta 1 vence na área com: %.2f Km²\n", area1);
    } else if (area2 > area1) {
        printf("Carta 2 vence na área com: %.2f Km²\n", area2);
    } else {
        printf("Empate na área! Ambas têm: %.2f Km²\n", area1);
    }
    }

    //Densidade demográfica
    if (escolha == 3){
        if (densidade1 < densidade2) {
        printf("Carta 1 vence na densidade demográfica com: %.2f habitantes por Km²\n", densidade1);
    } else if (densidade2 < densidade1) {
        printf("Carta 2 vence na densidade demográfica com: %.2f habitantes por Km²\n", densidade2);
    } else {
        printf("Empate na densidade demográfica! Ambas têm: %.2f habitantes por Km²\n", densidade1);
    }
    }

    //escolha de PIB
    if (escolha == 4){
        if (pib1 > pib2) {
        printf("Carta 1 vence no PIB com: %.2f de reais\n", pib1);
    } else if (pib2 > pib1) {
        printf("Carta 2 vence no PIB com: %.2f de reais\n", pib2);
    } else {
        printf("Empate no PIB! Ambas têm: %.2f de reais\n", pib1);
    }
    }

    //Escolha de renda percapita
    if (escolha == 5){
        if (percapita1 > percapita2) {
        printf("Carta 1 vence na renda percapita com: %d\n", percapita1);
    } else if (percapita2 > percapita1) {
        printf("Carta 2 vence na renda percapita com: %d\n", percapita2);
    } else {
        printf("Empate na renda percapita! Ambas têm: %d\n", percapita1);
    }
    }

    //Escolha de pontos turisticos
    if (escolha == 6){
        if (pturisticos1 > pturisticos2) {
        printf("Carta 1 vence nos pontos turisticos com: %d\n", pturisticos1);
    } else if (pturisticos2 > pturisticos1) {
        printf("Carta 2 vence nos pontos turisticos com: %d\n", pturisticos2);
    } else {
        printf("Empate nos pontos turisticos! Ambas têm: %d\n", pturisticos1);
    }
    }

    //Escolha de superpoder
    if (escolha == 7) {
        //comparação de super poderes de cartas
    if (superpoder1 > superpoder2) {
        printf("Carta 1 vence com superpoder de: %.2f\n", superpoder1);
    } else if (superpoder2 > superpoder1) {
        printf("Carta 2 vence com superpoder de: %.2f\n", superpoder2);
    } else {
        printf("Empate! Ambos os superpoderes são iguais: %.2f\n", superpoder1);
    }
    }

    return 0;
    }
