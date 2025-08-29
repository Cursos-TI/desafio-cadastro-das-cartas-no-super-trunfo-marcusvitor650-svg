#include <stdio.h>

int main() {
    printf("=======Desafio Cartas Super Trunfo=========\n");

    char cidade1[30], estado1[30], codigo1[10];
    char cidade2[30], estado2[30], codigo2[10];
    int nptturisticos1, nptturisticos2;
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

    printf("PIB: ");
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

    printf("PIB: ");
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
 
    printf("======================================\n");

    printf("Comaparação de Cartas:se resultado for 1 Carta 1 Venceu/ se resultado for 0 Carta 2 Venceu\n");
    printf("População: %d\n",populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", nptturisticos1 > nptturisticos2);
    printf("Densidade Populacional: %d\n", densidadep1 < densidadep2);
    printf("PIB per Capita: %d\n", pibpercapita1 > pibpercapita2);
    printf("Super Poder: %d\n", superpoder1 > superpoder2);

    return 0;
}


    