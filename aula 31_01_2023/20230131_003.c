#include <stdio.h>

int main() {
  char data[11];
  int dia;
  int mes;
  int ano;
 
  printf("digite aqui a data no formato DD/MM/AAAA: ");
  scanf("%10s", &data);
 
  if(data[2] == '/' && data[5] == '/')
  {
    sscanf(data, "%d/%d/%d", &dia, &mes, &ano);
    printf("Dia: %d\n", dia);
    printf("M�s: %d\n", mes);
    printf("Ano: %d\n", ano);
  }
  else
  {
      printf("As barras n�o est�o nos lugares corretos, por favor reinicie o programa. \n");
  }
  if(dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 1)
  {
      printf("O valor inserido � uma data valida");
  }
  else
  {
     printf("O valor inserido n�o � uma data v�lida");
  }
  return 0;
}