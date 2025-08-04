#include <stdio.h>
int main(){

printf("Desafio de cartas!\n");
int carta1,carta2;
int populacao01,populacao02;
int pontosturisticos01,pontosturisticos02;

char Estado01[20],Estado02[20],Cidade01[20],Cidade02[20],Codigo01[3],Codigo02[3];

float Area01, Area02,PIB01,PIB02;

printf("Escolha a sua carta:");
scanf("%d", &carta1);
printf("Sua carta é:%d\n", carta1);

printf("Digite o estado:");
scanf("%20s", Estado01);
printf("Seu estado é:%s\n", Estado01);

printf("Digite a cidade:");
scanf("%19s", Cidade01);
printf("Sua cidade é:%s\n", Cidade01);

printf("Digite seu codigo:");
scanf("%2s", Codigo01);
printf("Seu codigo é:%s\n", Codigo01);

printf("Digite a populacao da cidade:");
scanf("%d", &populacao01);
printf("Sua populacao é:%d\n", populacao01);

printf("Digite a area da cidade em km2:");
scanf("%f", &Area01);
printf("Sua area é:%2f\n", Area01);

printf("Digite o PIB da cidade:");
scanf("%f", &PIB01);
printf("Seu PIB é:%2f\n", PIB01);

printf("Digite o numero de pontos turisticos:");
scanf("%d", &pontosturisticos01);
printf("Seus pontos turisticos são:%d\n", pontosturisticos01);

printf("Numero da carta:%d - Estado:%s - Codigo:%s - Cidade:%s - Populacao:%d - Area:%2f - PIB:%2f - Pontosturisticos:%d\n", carta1, Estado01, Codigo01, Cidade01, populacao01, Area01, PIB01, pontosturisticos01);

return 0;
}