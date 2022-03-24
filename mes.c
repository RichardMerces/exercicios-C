#include <stdio.h>

int main(void) {
  int mes, ano;
  printf("Escolha um mês entre 1 a 12 respectivamente: ");
  scanf("%d", &mes);
  switch(mes) {
    case 4: case 6: case 9: case 11:
      printf("\n O mês de ");
      if (mes == 4) {
        printf("ARIL");
      } else if (mes == 6) {
        printf("JUNHO");
      } else if (mes == 9) {
        printf("SETEMBRO");
      } else if  (mes == 11) {
        printf("NOVEMBRO");
      }
      printf(" tem 30 dias");
      break;
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
       printf("\n O mês de ");
      if (mes == 1) {
        printf("JANEIRO");
      } else if (mes == 3) {
        printf("MARÇO");
      } else if (mes == 5) {
        printf("MAIO");
      } else if  (mes == 7) {
        printf("JULHO");
      } else if  (mes == 8) {
        printf("AGOSTO");
      } else if  (mes == 10) {
        printf("OUTUBRO");
      } else if  (mes == 12) {
        printf("DEZEMBRO");
      }
      printf(" tem 31 dias");
      break;
    case 2:
      printf("\n Qual ano?");
      scanf("%d", &ano);
      printf("\n O mês de FEVEREIRO de %d tem ", ano);
      if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0) {
        printf("29 dias");
      } else {
        printf("28 dias");
      }
      break;
  }
  return 0;
}