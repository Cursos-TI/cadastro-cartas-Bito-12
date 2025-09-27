#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
char  pilar1, ponto1;
char  poder1[10], nome1[21];
int   vida1, mec1, san1;
int   for1, agi1, pre1, vig1, int1;
float espaco1;

// apresentação

printf("Vamos Montar Uma Ficha De Personagem?\n");
printf("(Sistema Anumanos)");
printf("\n");
printf("\n");
printf("\n");
printf("\n");

// montando a ficha
printf("Escolha um Pilar - digite a primeira letra dele \n");
printf("(Deslocadores, Pensadores, Suportadores, Morfadores, Cosmoadores): ");
scanf("%c", &pilar1);

printf("Escolha Um Poder Relacionado Ao Seu Pilar: ");
scanf("%s", poder1);

printf("Escolha Um Nome Para Seu Personagem: ");
scanf("%s", nome1);


printf("Escolha Um Valor De Vida: ");
scanf("%d", &vida1);

printf("Escolha Um Valor De Sanidade: ");
scanf("%d", &san1);

printf("Escolha Um Valor De Matéria Escura Celular(MEC): ");
scanf("%d", &mec1);

printf("Digite O Valor De Espaço De Inventario(pode usar vírgula): ");
scanf("%f", &espaco1);

printf("\n");
printf("\n");


printf("Você Tem 9 Pontos, Distribua Entre Os Atributos: Força, Vigor, Agilidade, Intelecto E Presença");

printf("\n");

printf("Força: ");
scanf(" %d", &for1);

printf("Vigor: ");
scanf(" %d", &vig1);

printf("Agilidade: ");
scanf(" %d", &agi1);

printf("Intelecto: ");
scanf(" %d", &int1);

printf("Presença: ");
scanf(" %d", &pre1);

printf("\n");
printf("\n");

printf("Exibir Ficha: ");
scanf(" %c", &ponto1);


printf("Ficha De %s\n", nome1);

printf("\n");

printf("Vida: %d/%d", vida1, vida1);
printf(" - Sanidade: %d/%d", san1, san1);
printf(" - MEC: %d/%d", mec1, mec1);
printf(" - Inventario: %.1f/%.1f", espaco1, espaco1);

printf("\n");

printf("%s É Do Pilar %c\n", nome1, pilar1);
printf("Super Poder: %s\n", poder1);

printf("\n");

printf("Força: %d\n", for1);
printf("Vigor: %d\n", vig1);
printf("Agilidade: %d\n", agi1);
printf("Intelecto: %d\n", int1);
printf("Presença: %d\n", pre1);


printf("\n");
printf("\n");
printf("\n");
printf("\n");

printf("Novo comit\n");

return 0;

} 
