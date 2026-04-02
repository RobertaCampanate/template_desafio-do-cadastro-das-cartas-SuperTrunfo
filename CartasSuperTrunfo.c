#include <stdio.h>
#include <string.h> //Usar o strcspn para remover o \n do fgets
#include <locale.h> // configurar a acentuação


int main() {

  setlocale(LC_ALL, "Portuguese"); // Para acentuação das palavras em portugues funcionar

  //variáveis da primeira carta 

  char estado1 [3];
  char codigo1 [50];
  char nomeDaCidade1 [50];
  unsigned long int populacao1; // Para maior memória 
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadepopulacional1;
  float percapita1;
  float superPoder1;
  
 // Leitura de dados da primeira carta

  printf ("Digite código do Estado: (ex. A até H): ");
  scanf ("%s", estado1);

  printf ("Digite o Codigo da Carta (ex. A01, B02, C03): "); 
  scanf (" %s", codigo1); 

  printf ("Digite o Nome da Cidade: ");
  getchar (); // para limpar o enter da digitação
  fgets (nomeDaCidade1, sizeof(nomeDaCidade1), stdin); // Lê a palavra com os espaços, digitado pelo usuário
  nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = '\0'; // Remove o enter no final da string, que é adicionado pelo fgets

  printf ("Digite a quantidade da população: ");
  scanf ("%lu", &populacao1);

  printf ("Digite a area da cidade em quilometros quadrados: ");
  scanf (" %f", &area1);

  printf ("Digite o PIB da cidade: ");
  scanf ("%f", &pib1);

  printf ("Digite o numero de pontos turisticos na cidade: ");
  scanf ("%d", &pontosTuristicos1);

  //Calculos da carta 1
  densidadepopulacional1 = populacao1 / area1; 
  percapita1 = pib1 / populacao1;

  printf ("A densidade populacional é: %.2f km²\n", densidadepopulacional1);
  printf ("O Pib Per Capita é: %.2f\n", percapita1);

  //Super Poder = soma de todos os atributos numéricos
  superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + percapita1 + (1.0 / densidadepopulacional1);

  // Para exibir os dados da primeira carta
   printf ("\nDados da Carta 1: \n");

   printf ("Estado: %s\n", estado1);
   printf ("Codigo: %s\n", codigo1);
   printf ("Nome da Cidade: %s\n", nomeDaCidade1);
   printf ("População: %lu\n", populacao1);
   printf ("Área: %.2f km²\n", area1); //2.f - Para mostrar 2 casas decimais
   printf ("PIB: R$ %.2f\n", pib1);
   printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
   printf ("A densidade populacional é: %2.f km²\n", densidadepopulacional1);
   printf ("O Pib Per Capita é: %2.f\n", percapita1);
   printf ("Super Poder: %.2f\n", superPoder1);
   
 //variáveis da segunda carta 

  char estado2 [3];
  char codigo2 [50];
  char nomeDaCidade2 [50];
  unsigned long int populacao2; // Para maior memória 
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadepopulacional2;
  float percapita2;
  float superPoder2;


  printf ("Cadastro da Carta 2:\n");
  
  printf ("Digite a sigla de seu Estado (ex. A, B, C): ");
  scanf ("%s", estado2);

  printf ("Digite o Codigo da Carta (ex. A01, B02, C03): "); 
  scanf (" %s", codigo2); 

  printf ("Digite o Nome da Cidade: ");
  getchar (); // para limpar o enter da digitação
  fgets (nomeDaCidade2, sizeof(nomeDaCidade2), stdin); // Lê a palavra com os espaços, digitado pelo usuário
  nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = '\0'; // Remove o enter no final da string, que é adicionado pelo fgets

  printf ("Digite a quantidade da população: ");
  scanf ("%lu", &populacao2);

  printf ("Digite a area da cidade em quilometros quadrados: ");
  scanf (" %f", &area2);

  printf ("Digite o PIB da cidade: ");
  scanf ("%f", &pib2);

  printf ("Digite o numero de pontos turisticos na cidade: ");
  scanf ("%d", &pontosTuristicos2);

  densidadepopulacional2 = populacao2 / area2;
  percapita2 = pib2 / populacao2;

  printf ("A densidade populacional é: %.2f km²\n", densidadepopulacional2);
  printf ("O Pib Per Capita é: %.2f\n", percapita2);

   //Super Poder = soma de todos os atributos numéricos
  superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + percapita2 + (1.0 / densidadepopulacional2);

  printf ("\nCadastro da Carta 2:\n");

   printf ("Estado: %s\n", estado2);
   printf ("Codigo: %s\n", codigo2);
   printf ("Nome da Cidade: %s\n", nomeDaCidade2);
   printf ("População: %lu\n", populacao2);
   printf ("Área: %.2f km²\n", area2); //2.f - Para mostrar 2 casas decimais
   printf ("PIB: R$ %.2f\n", pib2);
   printf ("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
   printf ("A densidade populacional é: %2.f km²\n", densidadepopulacional2);
   printf ("O Pib Per Capita é: %2.f\n", percapita2);
   printf ("Super Poder: %.2f\n", superPoder2);

     // Compração dos atributos
   printf ("\n Comparacao dos atributos \n");

   //População (maior vence)
   printf ("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);

   // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);

    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2, (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 2, (densidadepopulacional1 < densidadepopulacional2) ? 1 : 0);

    // PIB per Capita (maior vence)
    printf("PIB per Capita: Carta %d venceu (%d)\n", (percapita1 > percapita2) ? 1 : 2, (percapita1 > percapita2) ? 1 : 0);

    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2) ? 1 : 2, (superPoder1 > superPoder2) ? 1 : 0);

    printf("\nFim do cadastro e comparação.\n");

   return 0;

}
