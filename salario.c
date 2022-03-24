#include <stdio.h>

int main(void) {
  float sal, novo_sal, valor;
  printf("Salário do cololaborador R$");
  scanf("%f", &sal);
  printf("Salário: R$%.2f", sal);
  printf("\nPercentual de aumento: ");
  if (sal <= 280) {
    printf("20%%");
    valor = sal * 0.20;
  } else if (sal <= 700) {
    printf("15%%");
    valor = sal * 0.15;
  } else if (sal <= 1500) {
    printf("10%%");
    valor = sal * 0.10;
  } else {
    printf("5%%");
    valor = sal * 0.05;
  }
  novo_sal = sal + valor;
  printf("\nValor do aumento: R$%.2f", valor);
  printf("\nNovo salário: R$%.2f", novo_sal);
  return 0;
}