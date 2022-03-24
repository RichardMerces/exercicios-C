#include <stdio.h>

int main(void) {
  int comercial, entrada, saida, hora;
  float total;
  printf(" Estacionamento Pare Aqui");
  printf("\n Digite o horário de entrada do veículo: ");
  scanf("%d", &entrada);
  printf("\n Digite o horário de saída do veículo: ");
  scanf("%d", &saida);

  comercial = 10;
  if (entrada >= 8 && entrada <= 18) {
    if (saida >= 8 && saida <= 18){
      hora = saida - entrada;
      if (hora <= 0) {
        printf("Algo deu errado! :(");
      } else {
        if (hora == 1) {
        total = 8;
      } else if (hora == 2) {
        total = 15;
      } else if (hora > 2){
        total = hora * 5;
      }
      printf("\n O carro ficou %d hora(s) estacionado,\n o total a ser pago é R$%.2f", hora, total);
      }
    } else {
      printf("\n no horário informado o estabelecimento encontrasse fechado! tente outro horário");
    }
  } else {
    printf("\n no horário informado o estabelecimento encontrasse fechado! tente outro horário");
  }
  return 0;
}