#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis da carta 1
    char estado;
    char codigo[10], nome[50];
    int populacao, ponto;
    float area, pib, densidade, percapta;
   

    // Variáveis da carta 2
    char estado2;
    char codigo2[10], nome2[50];
    int populacao2, ponto2;
    float area2, pib2, densidade2, percapta2;


    // Atributos escolhidos
    int opcao1 = 0, opcao2 = 0;
    float resultado1 = 0.0f, resultado2 = 0.0f; // 1.0 vitória no atributo, 0.0 derrota
    float soma1 = 0.0f, soma2 = 0.0f;           // soma dos valores dos atributos escolhidos (por carta)

    // Valores dos atributos escolhidos (para somatória e exibição)
    float c1valor1 = 0.0f, c2valor1 = 0.0f;
    float c1valor2 = 0.0f, c2valor2 = 0.0f;

    const char *nomeatributo1 = "", *nomeatributo2 = "";

    // Apresentação
    printf("Olá, seja bem-vindo ao jogo Super Trunfo!\n\n");

    // Cadastramento carta1
    printf("Carta 1\n");
    printf("Digite uma letra de A à H para representar o estado: ");
    scanf(" %c", &estado);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nome);

    printf("Digite o número populacional dessa cidade: ");
    scanf("%d", &populacao);

    printf("Determine o tamanho da área em km²: ");
    scanf("%f", &area);

    printf("Agora determine o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem essa cidade?: ");
    scanf("%d", &ponto);

    densidade = (float)populacao / area;        // população / área
    percapta  = (pib * 1000000000.0f) / (float)populacao; // PIB (R$) / população

    // Cadastramento carta2
    printf("\nCarta 2\n");
    printf("Digite uma letra de A à H para representar o estado: ");
    scanf(" %c", &estado2);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite o número populacional dessa cidade: ");
    scanf("%d", &populacao2);

    printf("Determine o tamanho da área em km²: ");
    scanf("%f", &area2);

    printf("Agora determine o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos tem essa cidade?: ");
    scanf("%d", &ponto2);

    densidade2 = (float)populacao2 / area2;
    percapta2  = (pib2 * 1000000000.0f) / (float)populacao2;

    // Escolha do primeiro atributo 
    printf("Escolha o primeiro atributo a ser comparado\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &opcao1);

    //Caso jogador escolha um numero abaixo de 1 ou acima de 5
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida. Encerrando.\n");
        return 0;
    }

    switch (opcao1) {
        case 1:
            printf("Você escolheu População\n"); // Regra geral: maior vence
            nomeatributo1 = "População";
            c1valor1 = (float)populacao;
            c2valor1 = (float)populacao2;
            resultado1 = (populacao > populacao2) ? 1.0f : ((populacao < populacao2) ? 0.0f : 0.5f);
            break;
        case 2:
            printf("Você escolheu Área\n");
            nomeatributo1 = "Área (km²)";
            c1valor1 = area;
            c2valor1 = area2;
            resultado1 = (area > area2) ? 1.0f : ((area < area2) ? 0.0f : 0.5f);
            break;
        case 3:
            printf("Você escolheu PIB (bilhões R$)\n");
            nomeatributo1 = "PIB (bilhões R$)";
            c1valor1 = pib;
            c2valor1 = pib2;
            resultado1 = (pib > pib2) ? 1.0f : ((pib < pib2) ? 0.0f : 0.5f);
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos\n");
            nomeatributo1 = "Pontos Turísticos";
            c1valor1 = (float)ponto;
            c2valor1 = (float)ponto2;
            resultado1 = (ponto > ponto2) ? 1.0f : ((ponto < ponto2) ? 0.0f : 0.5f);
            break;
        case 5:
            printf("Você escolheu Densidade Demográfica\n");// Exceção: menor vence
            nomeatributo1 = "Densidade (hab/km²)";
            c1valor1 = densidade;
            c2valor1 = densidade2;
            resultado1 = (densidade < densidade2) ? 1.0f : ((densidade > densidade2) ? 0.0f : 0.5f);
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    //Escolha do segundo atributo
        printf("\nEscolha o segundo atributo a ser comparado (diferente do primeiro)\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        scanf("%d", &opcao2);
        

        // Caso o jogador escolha o mesmo atributo na segunda opção
        if(opcao1 == opcao2){
            printf("Você escolheu o mesmo atributo! Recomece!");
        }

    switch (opcao2) {
        case 1:
            printf("Você escolheu População\n");
            nomeatributo2 = "População";
            c1valor2 = (float)populacao;
            c2valor2 = (float)populacao2;
            resultado2 = (populacao > populacao2) ? 1.0f : ((populacao < populacao2) ? 0.0f : 0.5f);
            break;
        case 2:
            printf("Você escolheu Área\n");
            nomeatributo2 = "Área (km²)";
            c1valor2 = area;
            c2valor2 = area2;
            resultado2 = (area > area2) ? 1.0f : ((area < area2) ? 0.0f : 0.5f);
            break;
        case 3:
            printf("Você escolheu PIB (bilhões R$)\n");
            nomeatributo2 = "PIB (bilhões R$)";
            c1valor2 = pib;
            c2valor2 = pib2;
            resultado2 = (pib > pib2) ? 1.0f : ((pib < pib2) ? 0.0f : 0.5f);
            break;
        case 4:
            printf("Você escolheu Pontos Turísticos\n");
            nomeatributo2 = "Pontos Turísticos";
            c1valor2 = (float)ponto;
            c2valor2 = (float)ponto2;
            resultado2 = (ponto > ponto2) ? 1.0f : ((ponto < ponto2) ? 0.0f : 0.5f);
            break;
        case 5:
            printf("Você escolheu Densidade Demográfica\n");// Exceção: menor vence
            nomeatributo2 = "Densidade (hab/km²)";
            c1valor2 = densidade;
            c2valor2 = densidade2;
            resultado2 = (densidade < densidade2) ? 1.0f : ((densidade > densidade2) ? 0.0f : 0.5f);
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
        }

    // Somando os atributos
    soma1 = c1valor1 + c1valor2;
    soma2 = c2valor1 + c2valor2;

    // Resultado do jogo
    printf("\nRESULTADO\n");
    printf("Carta 1: %s\n", nome);
    printf("Carta 2: %s\n\n", nome2);

    printf("Atributos usados na comparação:\n");
    printf("1- %s\n", nomeatributo1);
    printf("2- %s\n\n", nomeatributo2);

    // Valores por atributo
    printf("Valores do atributo 1 (%s):\n", nomeatributo1);
    printf("  %s: %.2f\n", nome, c1valor1);
    printf("  %s: %.2f\n\n", nome2, c2valor1);

    printf("Valores do atributo 2 (%s):\n", nomeatributo2);
    printf("  %s: %.2f\n", nome, c1valor2);
    printf("  %s: %.2f\n\n", nome2, c2valor2);

    // Somas finais
    printf("Soma dos atributos:\n");
    printf("  %s: %.2f\n", nome, soma1);
    printf("  %s: %.2f\n\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("Vencedor da rodada: Carta 1 (%s)\n", nome);//Carta 1 vence
    } else if (soma2 > soma1) {
        printf("Vencedor da rodada: Carta 2 (%s)\n", nome2);//Carta 2 vence
    } else {
        printf("Empate!\n");//Se caso empate
    }
    printf("Obrigado Por Jogar\n");

    return 0;
}
