#include <stdio.h>  //Fiz esse algoritmo no VS Code, antes de ver a aula, espero que esteja tudo certo :)

int main() {
            char Estado[20], codigoCarta[4], nomeCidade[20];
            int  Populacao, Numeropontosturisticos;
            float Areakm2, PIB;

            printf("Insira os dados da primeira carta:\n");

            printf("Nome da Cidade: ");
            scanf("%s", nomeCidade);

            printf("Estado: ");
            scanf("%s", Estado);

            printf("Insira, conforme os dados o codigo da carta: ");
            scanf("%s", codigoCarta);

            printf("Populacao: ");
            scanf("%d", &Populacao);

            printf("Numero de pontos turisticos: ");
            scanf("%d", &Numeropontosturisticos);

            printf("Area (em km2): ");
            scanf("%f", &Areakm2);

            printf("PIB: ");
            scanf("%f", &PIB);

            printf("Dados da primeira carta:\n");
            printf("Nome da Cidade: %s\n", nomeCidade);
            printf("Estado: %s\n", Estado);
            printf("Codigo da Carta: %s\n", codigoCarta);
            printf("Populacao: %d\n", Populacao);
            printf("Numero de pontos turisticos: %d\n", Numeropontosturisticos);
            printf("Area (em km2): %.2f\n", Areakm2);
            printf("PIB: %.2f\n", PIB);

            printf("Insira os dados da segunda carta:\n");

            printf("Nome da Cidade: ");
            scanf("%s", nomeCidade);

            printf("Estado: ");
            scanf("%s", Estado);

            printf("Insira, conforme os dados o codigo da carta: ");
            scanf("%s", codigoCarta);

            printf("Populacao: ");
            scanf("%d", &Populacao);    

            printf("Numero de pontos turisticos: ");
            scanf("%d", &Numeropontosturisticos);

            printf("Area (em km2): ");
            scanf("%f", &Areakm2);

            printf("PIB: ");
            scanf("%f", &PIB);

            printf("Dados da segunda carta:\n");
            printf("Nome da Cidade: %s\n", nomeCidade);
            printf("Estado: %s\n", Estado);
            printf("Codigo da Carta: %s\n", codigoCarta);
            printf("Populacao: %d\n", Populacao);
            printf("Numero de pontos turisticos: %d\n", Numeropontosturisticos);
            printf("Area (em km2): %.2f\n", Areakm2);
            printf("PIB: %.2f\n", PIB);

            return 0;
/*#include <stdio.h>

Desafio Super Trunfo - Países
Tema 1 - Cadastro das cartas
Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   Área para definição das variáveis para armazenar as propriedades das cidades

   Área para entrada de dados

  Área para exibição dos dados da cidade

return 0;
*/
