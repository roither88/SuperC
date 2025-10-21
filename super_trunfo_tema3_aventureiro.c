#include <stdio.h>
    int main() {

    //variáveis para armazenar os dados
    char pais1[40], pais2[40], codigo1[20], codigo2[20];
    int populacao1, populacao2, pturisticos1, pturisticos2, escolha;
    float area1, area2, pib1, pib2, densidade1, densidade2;


    //campos para o usuário digitar as informações do primeiro estado
    printf("Digite o pais 1 abaixo: \n");
    scanf("%s", pais1);
    printf("Digite o código da carta abaixo: \n");
    scanf("%s", codigo1);
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
    printf("Digite o pais 2 abaixo: \n");
    scanf("%s", pais2);
    printf("Digite o código da carta abaixo: \n");
    scanf("%s", codigo2);
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
            printf("Carta %s vence na população com: %d habitantes\n", pais1, populacao1);
        } else if (populacao1 < populacao2) {
            printf("Carta %s vence na população com: %d habitantes\n", pais2, populacao2);
        } else {
            printf("####### EMPATE ######");
        }
        break;
    case 2:
        if (area1 > area2) {
        printf("Carta %s vence na área com: %.2f Km²\n", pais1, area1);
    } else if (area2 > area1) {
        printf("Carta %s vence na área com: %.2f Km²\n", pais1, area2);
        break;
    }
    default:
        printf("Opção Inválidade");
        break;

    return 0;
    }
