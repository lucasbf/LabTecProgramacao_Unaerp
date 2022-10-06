#include <stdio.h>

void converte_tempo(int,int*,int*,int*);

int main(int argc, char *argv[]) {
  int segs1, horas, mins, segs;

  printf("Informe o tempo em segundos: ");
  scanf("%i", &segs1);

  converte_tempo(segs1, &horas, &mins, &segs);

  printf("%i:%i:%i\n", horas, mins, segs);

  return 0;
}

void converte_tempo(int segundos,int *h,int *m,int *s) {
  *h = segundos / 3600;
  *m = (segundos % 3600) / 60;
  *s = segundos % 3600 % 60;
}
