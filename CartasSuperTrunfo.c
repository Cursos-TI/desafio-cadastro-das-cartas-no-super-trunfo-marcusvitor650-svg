#include <stdio.h>

int main() {
    printf("Desafio Cartas Super Trunfo\n");
    char cidade, estado, codigo[20];
    int populacao,nptturisticos;
    float area,pib;
    printf("Primeira Carta\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade);

    printf("Estado: ");
    scanf("  %s", &estado);

    printf("Código: ");
    scanf("  %s", &codigo);

    printf("População: ");
    scanf("%d", &populacao);
    
    printf("Área: ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &nptturisticos);

    printf("Carta 1:\n");
    printf("Estado: %s", estado);
    printf("Código: %s", codigo);
    printf("Nome da cidade: %s", cidade);
    printf("População: %d", populacao);
    printf("Área: %f", area);
    printf("PIB: %f", pib);
    printf("Número de Pontos Turísticos: %d", nptturisticos);

    return 0;
}
