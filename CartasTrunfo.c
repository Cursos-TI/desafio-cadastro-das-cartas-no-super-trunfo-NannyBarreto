#include <stdio.h>

int main() {
    int carta1 = 1;
    int codigo1 = 10;
    char nomedoEstado1[30] = "Mato Grosso";
    char sigla1[5] = "MT";
    char nomedaCidade1[20] = "Cuiabá";
    int populacao1 = 3836399;
    float area1 = 903.357;
    float pib1 =  29700000000.00;
    int numerosDePontosTuristicos1 = 15;

    int Carta2 = 2;
    int Codigo2 = 11;
    char nomedoestado2[50] = "Mato Grosso do Sul";
    char Sigla2[5] = "MS";
    char NomedaCidade2[20] = "Campo Grande";
    int Populacao2 = 2750000;
    float Area2 = 357.125;
    float Pib2 =  166800000.000;
    int NumerosDePontosTuristicos2 = 10;


// Imprimindo a Carta 1
printf("Carta: %d\n", carta1);
printf("Codigo: %d\n", codigo1);
 printf("Nome do Estado: %s\n", nomedoEstado1);
 printf("Sigla: %s\n", sigla1);
 printf("Nome da Cidade: %s\n", nomedaCidade1);
 printf("População: %d \n", populacao1);
 printf("Área: %.2f km²\n", area1);
 printf("PIB: %.2f Reais\n", pib1);
 printf("Números de Pontos Turísticos: %d\n", numerosDePontosTuristicos1);
 printf("\n");


 // Imprimindo a Carta 2
printf("Carta: %d \n", Carta2);
printf("Codigo: %d\n", Codigo2);
 printf("Nome do Estado: %s\n", nomedoestado2);
 printf("Sigla: %s\n", Sigla2);
 printf("Nome da Cidade: %s\n", NomedaCidade2);
 printf("População: %d \n", Populacao2);
 printf("Área: %.2f km²\n", Area2);
 printf("PIB: %.2f reais\n", Pib2);
 printf("Números de Pontos Turísticos: %d\n", NumerosDePontosTuristicos2);

    return 0;
}