#include <stdio.h>

int main(){

char Estado1[3], Estado2[3];
char Codigo1[20], Codigo2[20];
char Nome_da_cidade1[20], Nome_da_cidade2[20];
int Populacao1, Populacao2;
float Area1, Area2;
float PIB1, PIB2;
int Pontos_turisticos1, Pontos_turisticos2;

printf("PREENCHA DADOS PARA AS CARTAS\n");
printf("\n");
printf("DADOS DA CARTA 1:\n");

printf("Digite uma letra de estado entre A e H: ");
scanf("%s", Estado1);

printf("Digite um codigo ex:A01: ");
scanf("%s", Codigo1);

printf("Digite nome da cidade: ");
scanf("%s", Nome_da_cidade1);

printf("Digite a populacao da cidade em milhares: ");
scanf("%d", &Populacao1);

printf("Digite a area da cidade em km²: ");
scanf("%f", &Area1);

printf("Digite o PIB da cidade em bilhoes: ");
scanf("%f", &PIB1);

printf("Digite o numero de pontos turisticos da cidade: ");
scanf("%d", &Pontos_turisticos1);

printf("\n");

printf("DADOS DA CARTA 2:\n");
printf("Digite uma letra de estado entre A e H: ");
scanf("%s", Estado2);

printf("Digite um codigo ex:A01: ");
scanf("%s", Codigo2);

printf("Digite nome da cidade: ");
scanf("%s", Nome_da_cidade2);

printf("Digite a populacao da cidade em milhares: ");
scanf("%d", &Populacao2);

printf("Digite a area da cidade em km²: ");
scanf("%f", &Area2);

printf("Digite o PIB da cidade em bilhoes: ");
scanf("%f", &PIB2);

printf("Digite o numero de pontos turisticos da cidade: ");
scanf("%d", &Pontos_turisticos2);

printf("\n");
//IMPRIMIR CARTAS

printf("CARTA 1:\n");
printf("Estado: %s\n", Estado1);
printf("Codigo: %s\n", Codigo1);
printf("Cidade: %s\n", Nome_da_cidade1);
printf("Populacao: %d mil habitantes\n", Populacao1);
printf("Area: %.0f km²\n", Area1);
printf("PIB: %.1f bilhoes\n", PIB1);
printf("Numero de pontos turisticos: %d\n", Pontos_turisticos1);

printf("\n");

printf("CARTA 2:\n");
printf("Estado: %s\n", Estado2);
printf("Codigo: %s\n", Codigo2);
printf("Cidade: %s\n", Nome_da_cidade2);
printf("Populacao: %d mil habitantes\n", Populacao2);
printf("Area: %.0f km²\n", Area2);
printf("PIB: %.1f bilhoes\n", PIB2);
printf("Numero de pontos turisticos: %d\n", Pontos_turisticos2);

printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("digite f,ENTER para finalizar: ");
scanf("%s");


}
