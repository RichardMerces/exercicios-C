#include stdio.h

int main(void) {
  float A, B, C; 
  printf(Informe os três lados de um triângulo );
  scanf(%f %f %f, &A, &B, &C);
  if (A  B + C && B  A + C && C  B + A) {
    printf(n Pode formar um triângulo );
    if (A == B && B == C && A == C) {
      printf(equilátero);
    } else if (A == B  B == C  C == A) {
      printf(isósceles);
    } else if (A != B && B != C) {
      printf(escaleno);
    }
  } else {
    printf(n Não pode formar um triângulo);
  }
  return 0;
}