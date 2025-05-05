#include <stdio.h>

int main (){    
    int area, area2;
    float populacao, pib, populacao2, pib2;
    int npturistico, npturistico2;
    char estado[20], estado2[20];
    char cidade[20], cidade2[20];
    char codcarta[20], codcarta2[20];
    float dpop1, dpop2;
    float pibc1, pibc2;

    printf("------- CARTA 01 -------\n");
    printf("Qual o Cod da carta 1?\n");
    scanf("%s", codcarta);
    printf("Qual estado?\n");
    scanf("%s", estado);
    printf("Qual cidade?\n");
    scanf("%s", cidade);
    printf("Qual o PIB?\n");
    scanf("%f", &pib);
    printf("Qual a população?\n");
    scanf("%f", &populacao);
    printf("Qual a área?\n");
    scanf("%d", &area);
    printf("Quantos pontos turísticos?\n");
    scanf("%d", &npturistico);
    
    printf("------- CARTA 02 -------\n");
    printf("Qual o Cod da carta 2?\n");
    scanf("%s", codcarta2);
    printf("Qual estado?\n");
    scanf("%s", estado2);
    printf("Qual cidade?\n");
    scanf("%s", cidade2);
    printf("Qual o PIB?\n");
    scanf("%f", &pib2);
    printf("Qual a população?\n");
    scanf("%f", &populacao2);
    printf("Qual a área?\n");
    scanf("%d", &area2);
    printf("Quantos pontos turísticos?\n");
    scanf("%d", &npturistico2);

    dpop1 = populacao / area;
    dpop2 = populacao2 / area2;

    pibc1 = pib / populacao;
    pibc2 = pib2 / populacao2;

    printf("------- CARTA 01 -------\n");
    printf("Cidade: %s\nEstado: %s\nPopulação: %.2f\nÁrea: %d\nPIB: %.2f\nPontos turísticos: %d\n", cidade, estado, populacao, area, pib, npturistico);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.2f\n", dpop1, pibc1);

    printf("------- CARTA 02 -------\n");
    printf("Cidade: %s\nEstado: %s\nPopulação: %.2f\nÁrea: %d\nPIB: %.2f\nPontos turísticos: %d\n", cidade2, estado2, populacao2, area2, pib2, npturistico2);
    printf("Densidade Populacional: %.2f | PIB per Capita: %.2f\n", dpop2, pibc2);

    return 0;
}
