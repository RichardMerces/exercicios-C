#include <stdio.h>

int main(void) {
  int num;
  do {
  printf(" Digite um número inteiro: ");
  scanf("%d", &num);
  if (num % 2 == 0) {
    printf("\n %d é PAR", num);
  } else {
    printf("\n %d é IMPAR", num);
  }
  return 0;
}