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

  // Para exibir os dados das cartas
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


  printf ("\nDados da Carta 2:\n");

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

    // Menus interativo com switch

    int opcao;
    printf("\n SUPER TRUNFO - ESCOLHA O ATRIBUTO \n");
    printf("1 - População (maior vence)\n");
    printf("2 - Área (maior vence)\n");
    printf("3 - PIB (maior vence)\n");
    printf("4 - Pontos Turísticos (maior vence)\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("6 - PIB per Capita (maior vence)\n");
    printf("7 - Super Poder (maior vence)\n");
    printf("Digite o número do atributo para comparar: ");
    scanf("%d", &opcao);

    // Estrutura do switch para escolher o atributo

    switch (opcao) {
        case 1:
            printf("Atributo escolhido: POPULAÇÃO\n");
            printf("%s (%s): %lu habitantes\n", nomeDaCidade1, estado1, populacao1);
            printf("%s (%s): %lu habitantes\n", nomeDaCidade2, estado2, populacao2);
            // Regra: maior vence
            if (populacao1 > populacao2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (populacao1 < populacao2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: ÁREA\n");
            printf("%s (%s): %.2f km²\n", nomeDaCidade1, estado1, area1);
            printf("%s (%s): %.2f km²\n", nomeDaCidade2, estado2, area2);
            if (area1 > area2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (area1 < area2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s (%s): R$ %.2f\n", nomeDaCidade1, estado1, pib1);
            printf("%s (%s): R$ %.2f\n", nomeDaCidade2, estado2, pib2);
            if (pib1 > pib2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (pib1 < pib2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
            printf("%s (%s): %d pontos\n", nomeDaCidade1, estado1, pontosTuristicos1);
            printf("%s (%s): %d pontos\n", nomeDaCidade2, estado2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: DENSIDADE DEMOGRÁFICA (menor vence)\n");
            printf("%s (%s): %.2f hab/km²\n", nomeDaCidade1, estado1, densidadepopulacional1);
            printf("%s (%s): %.2f hab/km²\n", nomeDaCidade2, estado2, densidadepopulacional2);
            // Regra invertida: menor valor vence
            if (densidadepopulacional1 < densidadepopulacional2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (densidadepopulacional1 > densidadepopulacional2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        case 6:
            printf("Atributo escolhido: PIB PER CAPITA\n");
            printf("%s (%s): R$ %.2f\n", nomeDaCidade1, estado1, percapita1);
            printf("%s (%s): R$ %.2f\n", nomeDaCidade2, estado2, percapita2);
            if (percapita1 > percapita2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (percapita1 < percapita2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        case 7:
            printf("Atributo escolhido: SUPER PODER (soma de todos os atributos)\n");
            printf("%s (%s): %.2f\n", nomeDaCidade1, estado1, superPoder1);
            printf("%s (%s): %.2f\n", nomeDaCidade2, estado2, superPoder2);
            if (superPoder1 > superPoder2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade1, estado1);
            } else if (superPoder1 < superPoder2) {
                printf("=> VENCEDOR: %s (%s)\n", nomeDaCidade2, estado2);
            } else {
                printf("=> EMPATE!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha um número de 1 a 7.\n");
            break;
    }

    printf("\n========== FIM DO JOGO ==========\n");
    return 0;
}

