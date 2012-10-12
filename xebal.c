
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/types.h>
#include <unistd.h>

char* v = "aeiouy";
char* c = "bcdfghklmnprstvzx";

int main(int ac, char** av) {
  size_t sv, sc;
  int N, i, j;

  sv = strlen(v);
  sc = strlen(c);
  N = 5;

  if (ac > 1) {
    N = atoi(av[1]);
  }

  srandom(time(NULL)^getpid());

  for (i = 0; i < N; i++) {
    if (i % 2) {
      j = (random() >> 1) % sv;
      printf("%c", v[j]);
    } else {
      j = (random() >> 1) % sc;
      printf("%c", c[j]);
    }
  }
  printf("\n");
}


