#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1 = 'A', estado2 = 'B', estado3 = 'C';
    char codigo1[4] = "A01", codigo2[4] = "B02", codigo3[4] = "C03";
    char cidade1[20] = "São Paulo", cidade2[20] = "Seul", cidade3[20] = "Paris";
    int populacao1 = 12325000, populacao2 = 9734000, populacao3 = 2148000;
    float area1 = 1521.11, area2 = 605.21, area3 = 105.40;
    float pib1 = 699280000000.0, pib2 = 459000000000.0, pib3 = 845000000000.0;
    int pontos_turisticos1 = 50, pontos_turisticos2 = 40, pontos_turisticos3 = 35;

    // Exibição dos dados das cartas
    printf("\nCarta 1\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           estado1, codigo1, cidade1, populacao1, area1, pib1, pontos_turisticos1);
    
    printf("\nCarta 2\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           estado2, codigo2, cidade2, populacao2, area2, pib2, pontos_turisticos2);
    
    printf("\nCarta 3\nEstado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nPontos turísticos: %d\n",
           estado3, codigo3, cidade3, populacao3, area3, pib3, pontos_turisticos3);

    return 0;
}
