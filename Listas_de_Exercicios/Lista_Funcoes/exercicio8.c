#include <stdio.h>

int verifica_numero(int);

int main(int argc, char *argv[]) {

  int i;

  printf("Informe um número inteiro qualquer: ");
  scanf("%i", &i);

  if(verifica_numero(i))
    printf("Esse número é positivo!!");
  else
    printf("Esse número é negativo!!");

  return 0;
}

int verifica_numero(int n) {
  return n >= 0;
}
