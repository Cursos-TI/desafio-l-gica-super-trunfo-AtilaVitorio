#include <stdio.h>
int main (){    
            
           
            float area, area2,  pib,pib2;
            int npturistico, npturistico2, populacao, populacao2, opcao;
            char estado[20], estado2[20];
            char cidade[20], cidade2[20];
            char codcarta[20], codcarta2[20];

            printf("------- CARTA 01 -------\n");
            
            printf(" Qual estado? \n");
            scanf("%s", estado);
            printf(" Qual cidade ? \n ");
            scanf("%s", cidade);
            printf(" Qual a população? \n");
            scanf("%d", &populacao);
            printf(" Qual a área? \n");
            scanf("%f", &area);
            printf("Qual o PIB ? \n");
            scanf("%f", &pib);
            printf(" Quantos pontos turisticos? \n");
            scanf("%d", &npturistico);
            
            
            printf("------- CARTA 02 -------\n");
            
            printf(" Qual estado? \n");
            scanf("%s", estado2);
            printf(" Qual cidade ? \n ");
            scanf("%s", cidade2);
            printf(" Qual a população? \n");
            scanf("%d", &populacao2);
            printf(" Qual a área? \n");
            scanf("%f", &area2);
            printf("Qual o PIB ? \n");
            scanf("%f", &pib2);
            printf(" Quantos pontos turisticos? \n");
            scanf("%d", &npturistico2);
           
           printf(" *******  ESCOLHA O ATRIBUTO DE COMPARAÇÃO******\n");
           printf(" *******  01. POPULAÇÃO ******\n");
           printf(" *******  02. ÁREA      ******\n");
           printf(" *******  03. PIP       ******\n");
           scanf("%d", &opcao);
           
           switch(opcao) {
               
               case 1:
               printf(" Atributo escolhido: POPULAÇÃO \n");
               printf("%s, %d :habitantes\n", estado, populacao);
               printf("%s, %d :habitantes\n", estado2, populacao2);
                if (populacao > populacao2) {
                    printf("Vencedor: %s\n",cidade);
                 }else if (populacao2 > populacao){
                    printf("Vencedor: %s\n", cidade2);
                } else {
                    printf(" Empatado\n");
                }
                break;
                
                case 2:
               printf(" Atributo escolhido: ÁREA \n");
               printf("%s, %f :KM2\n", estado, area);
               printf("%s, %f :KM2\n", estado2, area2);
                if (area > area2) {
                    printf("Vencedor: %s\n",estado);
                 }else if (area2 > area){
                    printf("Vencedor: %s", estado2);
                }else {
                    printf(" Empatado\n");
                }
                break;
                
                case 3:
               printf(" Atributo escolhido: PIB \n");
               printf("%s, R$: %f \n", estado, pib);
               printf("%s, R$: %f \n", estado2, pib2);
                if (pib > pib2) {
                    printf("Vencedor: %s\n",estado);
                } else if (pib2 > pib){
                    printf("Vencedor: %s\n", estado2);
                } else {
                    printf(" Empatado\n");
                }
                break;
                
                default:
               printf(" OPÇÃO INVALIDA \n");
                break;
                 }
           
           
            
            return 0;


    }
