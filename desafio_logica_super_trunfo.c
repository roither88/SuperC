#include <stdio.h>
#include <stdlib.h>

int main() {
    
    //variáveis, já coloquei os valores para não ficar digitando toda hora, já que o objetivo é a lógica de programação

    //dados do primeiro pais
    char nomePais1[] = "Brasil";
    float pop1 = 215.3;  //em Milhões
    float area1 = 8.5;   //em Milhões de km²
    float pib1 = 2.08;   //em Trilhões de USD
    
    //dados do segundo pais
    char nomePais2[] = "Argentina";
    float pop2 = 45.7;   //em milhões
    float area2 = 2.7;   //em milhões de km²)
    float pib2 = 0.63;   //trilhões de dolares)

    //variáveis de densidade demografica sem valor deifinido, já que serão calculadas posteriormente
    float dens1, dens2;

    char primeiroAtributo, segundoAtributo;
    int resultado1, resultado2; 

    // calculo de densidade
    dens1 = pop1 / area1;
    dens2 = pop2 / area2;

    printf("######## SUPER TRUNFO: DESAFIO MESTRE TEMA 3 ########\n");
    printf("Comparando %s vs. %s\n", nomePais1, nomePais2);
    

    //primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("P. Populacao\n");
    printf("A. Area\n");
    printf("B. PIB\n");
    printf("D. Densidade Demografica (Calculada)\n");
    printf("Sua escolha: ");
    scanf(" %c", &primeiroAtributo);

    // lógica de comparação do primeiro atributo
    switch (primeiroAtributo) {
        case 'P':
        case 'p':
            resultado1 = (pop1 > pop2) ? 1 : 0;
            break;
        case 'A':
        case 'a':
            resultado1 = (area1 > area2) ? 1 : 0;
            break;
        case 'B':
        case 'b':
            resultado1 = (pib1 > pib2) ? 1 : 0;
            break;
        case 'D':
        case 'd':
            resultado1 = (dens1 < dens2) ? 1 : 0;
            break;
        default:
            printf("Opcao invalida!\n");
            return 1; 
    }
        
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    printf("P. Populacao\n");
    printf("A. Area\n");
    printf("B. PIB\n");
    printf("D. Densidade Demografica (Calculada)\n");
    printf("Sua escolha: ");
    scanf(" %c", &segundoAtributo);

    

    //lógica para não ocorrer a mesma escolha do primeiro atributo
    
    if (primeiroAtributo == segundoAtributo) {
        printf("\nErro: Voce escolheu o mesmo atributo duas vezes!\n");
        return 1; 
    } else {
        
        switch (segundoAtributo) {
            case 'P':
            case 'p':
                resultado2 = (pop1 > pop2) ? 1 : 0;
                break;
            case 'A':
            case 'a':
                resultado2 = (area1 > area2) ? 1 : 0;
                break;
            case 'B':
            case 'b':
                resultado2 = (pib1 > pib2) ? 1 : 0;
                break;
            case 'D':
            case 'd':
                resultado2 = (dens1 < dens2) ? 1 : 0;
                break;
            default:
                printf("Opcao invalida!\n");
                return 1; 
        }

        // lógica do resultado final
        
        printf("======== RESULTADOS ========\n");


        if (resultado1 == 1 && resultado2 == 1) {
            printf("VITORIA! %s venceu nos dois atributos!\n", nomePais1);
        } else if (resultado1 == 0 && resultado2 == 0) {
            printf("DERROTA! %s venceu nos dois atributos!\n", nomePais2);
        } else {
            printf("EMPATE! Cada pais venceu em um atributo!\n");
        }
    }

    return 0;
}