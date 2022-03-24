#include <stdio.h>
char linha(){
  printf("\n *---------------------------------*");
}
int main(void) {
  int dias, taxa;
  float total, diaria, valor;
  linha();
  printf("\n          HOTEL CALIFORNIA");
  linha();
  printf("\n             Bem-Vindo!");
  linha();
  printf("\n Por favor, informe quantos dias você ficará hospedado: ");
  scanf("%d", &dias);
  linha();
  printf("\n O hóspede ficará %d dias no hotel\n O valor da diária é de R$95,00", dias);
  linha();
  diaria = 95;
  valor = diaria * dias;
  if (dias < 10) {
    taxa = 15;
    total = valor * 1.15;
  } else if (dias == 10) {
    taxa = 10;
    total = valor * 1.10;
  } else if (dias > 10) {
    taxa = 5;
    total = valor * 1.5;
  }
  printf("\n O valor a pagar será de R$%.2f + %d%% (taxa de serviço)\n O total será R$%.2f", valor, taxa, total);
  return 0;
}