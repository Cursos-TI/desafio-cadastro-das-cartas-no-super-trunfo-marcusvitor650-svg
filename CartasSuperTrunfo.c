#include <stdio.h>

int main() {
    printf("=========Desafio Cartas Super Trunfo=========\n");

    char cidade1[30], estado1[30], codigo1[10];
    char cidade2[30], estado2[30], codigo2[10];
    int nptturisticos1, nptturisticos2;
    int opcao;
    float area1, area2, pib1, pib2;
    float densidadep1, pibpercapita1, densidadep2, pibpercapita2, superpoder1, superpoder2;
    unsigned long int populacao1, populacao2;

    printf("Primeira Carta(Obs: Não digitar cidades/estados com nomes separados ex: Rio de Janeiro)\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);  

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("População: ");
    scanf("%u", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB (Obs: Não coloque pontos, ex: 2.000.000 ): ");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nptturisticos1);

    printf("\nSegunda Carta\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("População: ");
    scanf("%u", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB (Obs: Não coloque pontos, ex: 2.000.000 ): ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nptturisticos2);

    densidadep1 = (float) populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;
    densidadep2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
    superpoder1 = (float) populacao1 + area1 + pib1 + nptturisticos1 + pibpercapita1 + densidadep1;
    superpoder2 = (float) populacao2 + area2 + pib2 + nptturisticos2 + pibpercapita2 + densidadep2;

    printf("======================================\n");

    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %u de Habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", nptturisticos1);
    printf("Densidade populacional: %.1f hab/km²\n", densidadep1);
    printf("PIB Per capita: %.1f\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %u de Habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", nptturisticos2);
    printf("Densidade populacional: %.1f hab/km²\n", densidadep2);
    printf("PIB Per capita: %.1f\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);
 
    printf("===========Comaparação de Cartas============\n");

    printf("Escolha qual atributo você quer comparar: \n");
    printf("1. Nomes das cidades\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos turistícos\n");
    printf("6. Densidade populacional\n");
    printf("7. PIB per capita\n");
    printf("8. Super Poder\n");
    printf("Escolha: \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Carta 01: %s e Carta 02: %s", cidade1, cidade2);
        break;
    case 2:
        printf("Carta 01: %u VS Carta 02: %u ",populacao1, populacao2);
        if (populacao1 > populacao2){
        printf("População: Carta 01 Venceu\n");
        }else if(populacao2 > populacao1){
        printf("População: Carta 02 Venceu\n");
        }else if (populacao1 == populacao2){
        printf("Houve um empate!");
        }
        break;
    case 3:
        printf("Carta 01: %.2f VS Carta 02: %.2f ",area1, area2);
        if (area1 > area2){
        printf("Área: Carta 01 Venceu\n");
        }else if(area2 > area1){
        printf("Área: Carta 02 Venceu\n");
        }else if (area1 == area2){
        printf("Houve um empate!");
        } 
        break;
    case 4:
        printf("Carta 01: %f VS Carta 02: %f ",pib1, pib2);
        if (pib1 > pib2){
        printf("PIB: Carta 01 Venceu\n");
    }else if(pib2 > pib1){
        printf("PIB: Carta 02 Venceu\n");
    }else if (pib1 == pib2){
        printf("Houve um empate!");
    }  
        break;
    case 5:
        printf("Carta 01: %d VS Carta 02: %d ",nptturisticos1, nptturisticos2);
        if (nptturisticos1 > nptturisticos2){
        printf("Pontos turistícos: Carta 01 Venceu\n");
    }else if(nptturisticos2 > nptturisticos1){
        printf("Pontos turistícos: Carta 02 Venceu\n");
    }else if (nptturisticos1 == nptturisticos2){
        printf("Houve um empate!");
    }    
        break;
    case 6:
        printf("Carta 01: %.1f VS Carta 02: %.1f ",densidadep1, densidadep2);
        if (densidadep1 > densidadep2){
        printf("Densidade populacional: Carta 01 Venceu\n");
    }else if(densidadep1 > densidadep2){
        printf("Densidade populacional: Carta 02 Venceu\n");
    }else if (densidadep1 == densidadep2){
        printf("Houve um empate!");
    }    
        break;
    case 7:
        printf("Carta 01: %f VS Carta 02: %f ",pibpercapita1, pibpercapita2);
        if (pibpercapita1 > pibpercapita2){
        printf("PIB per capita: Carta 01 Venceu\n");
    }else if(pibpercapita2 > pibpercapita1){
        printf("PIB per capita: Carta 02 Venceu\n");
    }else if (pibpercapita1 == pibpercapita2){
        printf("Houve um empate!");
    }   
        break;
    case 8:
        printf("Carta 01: %.2f VS Carta 02:%.2f ",superpoder1, superpoder2);
        if (superpoder1 > superpoder2){
        printf("PIB: Carta 01 Venceu\n");
    }else if(superpoder2 > superpoder1){
        printf("PIB: Carta 02 Venceu\n");
    }else if(superpoder1 == superpoder2){
        printf("Houve um empate!");
    }
        break;    
    default:
            printf("Opção inválida!");
        break;
    }

    return 0;
}
