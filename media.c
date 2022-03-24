#include <stdio.h>

int main(void) {
  float n1, n2, n3, media;
  printf("Digite as três notas: ");
  scanf("%f %f %f", &n1, &n2, &n3);
  media = (n1 + n2 + n3) / 3;
  printf("\n A méida do aluno foi %.1f", media);
  if (media > 6) {
    printf("\n O aluno está APROVADO!");
  } else {
    printf("\n O aluno está REPROVADO.");
  }
  return 0;
}