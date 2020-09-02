#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int mdc(int a, int b);

int main(void)
{

  int a = 0;
  int b = 0;
  int c = 0;

  printf("Informe um valor para a: \n");
  scanf("%d", &a);

  printf("Informe um valor para b: \n");
  scanf("%d", &b);

  printf("Informe um valor para c: \n");
  scanf("%d", &c);

  mdc(mdc(a, b), c);

  return 0;
}

int mdc(int a, int b)
{
  int resto = 0;

  while (b != 0)
  {
    resto = a % b;

    a = b;
    b = resto;
  }

  printf("Resultado: %d \n \n", a);

  return a;
}
