#include <stdio.h>

int main() {
    printf("=======Desafio Cartas Super Trunfo=========\n");

    char cidade1[30], estado1[30], codigo1[10];
    char cidade2[30], estado2[30], codigo2[10];
    int populacao1, nptturisticos1, populacao2, nptturisticos2;
    float area1, area2, pib1, pib2;
    float densidadep1, pibpercapita1, densidadep2, pibpercapita2;

    printf("Primeira Carta(Obs: Não digitar cidades/estados com nomes separados ex: Rio de Janeiro)\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);  

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("População: ");
    scanf("%d", &populacao1);

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
    scanf("%d", &populacao2);

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

    printf("\nCarta 01:\n");
    printf("Estado: %s\n", estado1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d de Habitantes\n", populacao1);
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", nptturisticos1);
    printf("Densidade populacional: %.1f hab/km²\n", densidadep1);
    printf("PIB Per capita: %.1f\n", pibpercapita1);

    printf("\nCarta 02:\n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d de Habitantes\n", populacao2);
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", nptturisticos2);
    printf("Densidade populacional: %.1f hab/km²\n", densidadep2);
    printf("PIB Per capita: %.1f\n", pibpercapita2);

    return 0;
}


    