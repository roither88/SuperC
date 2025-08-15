#include <stdio.h>
    int main() {

    //variáveis para armazenar os dados
    char estado1,estado2, codigo1[20], codigo2[20], cidade1[40], cidade2[40];
    int população1, população2, pturisticos1, pturisticos2;
    float area1, area2, pib1, pib2;


    //campos para o usuário digitar as informações do primeiro estado   
    printf("Digite o Estado 1 abaixo: \n");
    scanf(" %s", estado1);
    printf("Digite o código da carta abaixo: \n");
    scanf(" %s", codigo1);
    printf("Digite a cidade pertencente ao estado abaixo: \n");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade abaixo: \n");
    scanf(" %d", &população1);
    printf("Digite a área da cidade em Km² abaixo: \n");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade abaixo: \n");
    scanf(" %f", &pib1);
    printf("Digite a quantidade de pontos turisticos dessa cidade abaixo: \n");
    scanf(" %d", &pturisticos1);

    //Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado:%s\n", estado1);
    printf("Estado:\n", estado1);

    
    //campos para o usuário digitar as informações do segundo estado   
    printf("Digite o Estado 2 abaixo: \n");
    scanf(" %s", estado2);
    printf("Digite o código da carta abaixo: \n");
    scanf(" %s", codigo2);
    printf("Digite a cidade pertencente ao estado abaixo: \n");
    scanf(" %s", cidade2);
    printf("Digite a população dessa cidade abaixo: \n");
    scanf(" %d", população2);
    printf("Digite a área da cidade em Km² abaixo: \n");
    scanf(" %f", area2);
    printf("Digite o PIB da cidade abaixo: \n");
    scanf(" %f", pib2);
    printf("Digite a quantidade de pontos turisticos dessa cidade abaixo: \n");
    scanf(" %d", pturisticos2);











    }
