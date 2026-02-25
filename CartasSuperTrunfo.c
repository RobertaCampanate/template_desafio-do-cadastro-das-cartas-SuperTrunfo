#include <stdio.h>
#include <string.h> //Usar o strcspn para remover o \n do fgets
#include <locale.h> // configurar a acentuação


int main() {

  setlocale(LC_ALL, "Portuguese"); // Para acentuação das palavras em portugues funcionar
  char estado [3];
  char codigo [50];
  char nomeDaCidade [50];
  int populacao; 
  float area;
  float pib;
  int pontosTuristicos;

 // Leitura de dados da primeira carta

  printf ("Digite código do Estado: (ex. A até H): ");
  scanf ("%s", estado);

  printf ("Digite o Codigo da Carta (ex. A01, B02, C03): "); 
  scanf (" %s", codigo); 

  printf ("Digite o Nome da Cidade: ");
  getchar (); // para limpar o enter da digitação
  fgets (nomeDaCidade, sizeof(nomeDaCidade), stdin); // Lê a palavra com os espaços, digitado pelo usuário
  nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0'; // Remove o enter no final da string, que é adicionado pelo fgets

  printf ("Digite a quantidade da população: ");
  scanf ("%d", &populacao);

  printf ("Digite a area da cidade em quilometros quadrados: ");
  scanf (" %f", &area);

  printf ("Digite o PIB da cidade: ");
  scanf ("%f", &pib);

  printf ("Digite o numero de pontos turisticos na cidade: ");
  scanf ("%d", &pontosTuristicos);

  // PAra exibir os dados da primeira carta
   printf ("\nDados da Carta 1: \n");

   printf ("Estado: %s\n", estado);
   printf ("Codigo: %s\n", codigo);
   printf ("Nome da Cidade: %s\n", nomeDaCidade);
   printf ("População: %d\n", populacao);
   printf ("Área: %.2f km²\n", area); //2.f - Para mostrar 2 casas decimais
   printf ("PIB: R$ %.2f\n", pib);
   printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos);
   
  printf ("Cadastro da Carta 2:\n");
  
  printf ("Digite a sigla de seu Estado (ex. A, B, C): ");
  scanf ("%s", estado);

  printf ("Digite o Codigo da Carta (ex. A01, B02, C03): "); 
  scanf (" %s", codigo); 

  printf ("Digite o Nome da Cidade: ");
  getchar (); // para limpar o enter da digitação
  fgets (nomeDaCidade, sizeof(nomeDaCidade), stdin); // Lê a palavra com os espaços, digitado pelo usuário
  nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0'; // Remove o enter no final da string, que é adicionado pelo fgets

  printf ("Digite a quantidade da população: ");
  scanf ("%d", &populacao);

  printf ("Digite a area da cidade em quilometros quadrados: ");
  scanf (" %f", &area);

  printf ("Digite o PIB da cidade: ");
  scanf ("%f", &pib);

  printf ("Digite o numero de pontos turisticos na cidade: ");
  scanf ("%d\n", &pontosTuristicos);

  printf ("\nCadastro da Carta 2:\n");

   printf ("Estado: %s\n", estado);
   printf ("Codigo: %s\n", codigo);
   printf ("Nome da Cidade: %s\n", nomeDaCidade);
   printf ("População: %d\n", populacao);
   printf ("Área: %.2f km²\n", area); //2.f - Para mostrar 2 casas decimais
   printf ("PIB: R$ %.2f\n", pib);
   printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos);

   printf ("Fim do cadastro\n");

   return 0;

}
