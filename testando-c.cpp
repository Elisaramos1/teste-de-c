#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int i=0, acao, cad[10], busc, sair, conti, conti1;
  char nomep[10][10];
  do {
    printf("|SITEMA DA PIZZARIA - PIZZA � MASSA1////////////|\n");
    printf("|1 - Cadastrar Produto//////////////////////////|\n|2 - Buscar produto/////////////////////////////| \n|3 - Sair do Sistema////////////////////////////|\n");
    printf("|Digite o n�mero correspondente a a��o desejada:|");
    scanf("%d", &acao);
    switch (acao) {
      case 1:
        do{
          if (i < 10){
        printf("Cadasto de Produto:\n");
        printf("Digite o c�digo (4 DIGITOS) do produto %d: \n",i);
        scanf("%d",&cad[i]);
        printf("Digite o nome (AT� 10 LETRAS) do produto %d: \n", i);
        scanf("%s",nomep[i]);
        printf("\nDeseja continuar cadastrando? \n 1 - Sim \n 2 - N�o \n");
        scanf("%d", &conti1);
        i++;}
          else if(i == 10){
            printf("Limite de produtos atingido!");
            printf("\nDeseja retornar ao menu? \n 1 - Sim \n 2 - N�o \n");
            scanf("%d", &acao);
            system("clear");
          }
        }
        while(conti1 == 1);
        break;
      case 2:
        printf("Buscar Produto\n");
        printf("Digite o codigo do produto: \n");
        scanf("%d",&busc);
        if(busc==cad[i]){
        printf("%d",cad[i]);
        }
        else {
          do{
            printf("C�digo n�o encontrado. Deseja tentar novamente? \n 1 - Sim \n 2 - N�o \n");
            scanf("%d", &conti);
          }while (conti == 's');
        }  
        break;
      case 3:
        printf("Saindo do Sistema");
        scanf("%d",&acao);
        break;
      default:
        printf("Op��o Inv�lida");
    }
    printf("\nDeseja retornar ao menu? \n 1 - Sim \n 2 - N�o \n");
    scanf("%d", &acao);
    system("clear");
  }while (acao < 2);  

  return 0;
}

