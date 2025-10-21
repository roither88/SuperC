#include <stdio.h>
    int main() {

    //variáveis para armazenar os dados
    char pais1[40], pais2[40];
    int populacao1, populacao2, pturisticos1, pturisticos2, escolha;
    float area1, area2, pib1, pib2, densidade1, densidade2;


    //campos para o usuário digitar as informações do primeiro estado
    printf("Digite o nome do pais 1 abaixo: \n");
    scanf("%s", pais1);
    printf("Digite a população do pais abaixo: \n");
    scanf("%d", &populacao1);
    printf("Digite a área do pais em Km² abaixo: \n");
    scanf("%f", &area1);
    printf("Digite o PIB do pais abaixo: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos desse pais abaixo: \n");
    scanf("%d", &pturisticos1);

    //variaveis com calculos de densidade da primeira carta
    densidade1 = (float)populacao1 / area1;

  

    //campos para o usuário digitar as informações do segundo estado
    printf("Digite o nome do pais 2 abaixo: \n");
    scanf("%s", pais2);
    printf("Digite a população desse pais abaixo: \n");
    scanf("%d", &populacao2);
    printf("Digite a área do pais em Km² abaixo: \n");
    scanf("%f", &area2);
    printf("Digite o PIB do pais abaixo: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos desse pais abaixo: \n");
    scanf("%d", &pturisticos2);

    //variaveis com calculos de densidade e renda percapita da segunda carta
    densidade2 = (float)populacao2 / area2;

    
    printf("\nSelecione um dos atributos para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparações de população entre as cartas
    switch (escolha)
    {
    case 1:
        if (populacao1 > populacao2) {
            printf("%s população: %d - %s população: %d = %s venceu\n", pais1, populacao1, pais2, populacao2, pais1);
        } else if (populacao1 < populacao2) {
            printf("%s população: %d - %s população: %d = %s vence\n", pais2, populacao2, pais1, populacao1, pais2);
        } else {
            printf("####### EMPATE ######\n");
        }
        break;
    case 2:
        if (area1 > area2) {
           printf("%s área: %.2f - %s área: %.2f = %s venceu\n", pais1, area1, pais2, area2, pais1);
        } else if (area2 > area1) {
            printf("%s área: %.2f - %s área: %.2f = %s venceu\n", pais2, area2, pais1, area1, pais2);
        } else {
            printf("####### EMPATE ######\n");
        }
        break;
        case 3:
        if (pib1 > pib2) {
            printf("%s PIB: %.2f - %s PIB: %.2f = %s venceu\n", pais1, pib1, pais2, pib2, pais1);
        } else if (pib2 > pib1) {
            printf("%s PIB: %.2f - %s PIB: %.2f = %s venceu\n", pais2, pib2, pais1, pib1, pais2);
        } else {
            printf("####### EMPATE ######\n");
        }
        break;
        case 4:
        if (pturisticos1 > pturisticos2) {
            printf("%s pontos turísticos: %d - %s pontos turísticos: %d = %s venceu\n", pais1, pturisticos1, pais2, pturisticos2, pais1);
        } else if (pturisticos2 > pturisticos1) {
            printf("%s pontos turísticos: %d - %s pontos turísticos: %d = %s venceu\n", pais2, pturisticos2, pais1, pturisticos1, pais2);
        } else {
            printf("####### EMPATE ######\n");
        }
        break;
        case 5:
        if (densidade1 < densidade2) {
            printf("%s densidade: %.2f - %s densidade: %.2f = %s venceu\n", pais1, densidade1, pais2, densidade2, pais1);
        } else if (densidade2 < densidade1) {
            printf("%s densidade: %.2f - %s densidade: %.2f = %s venceu\n", pais2, densidade2, pais1, densidade1, pais2);
        } else {
            printf("####### EMPATE ######\n");
        }
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }

    return 0;
}
