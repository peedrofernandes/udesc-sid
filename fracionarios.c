#include <stdio.h>

int comparar(double valores[], double n, int it) {
  int res = 0;

  for (int i = 0; i < it; i++) {
    if (valores[i] == n) {
      res = 1;
      break;
    }
  }

  return res;
}

void calcularBinario(char *bits, double v) {
  int it = 0;

  printf("[%.4lf,", v);
  while (1) {
    v *= 2;
    printf("%.4lf, ", v);

    if (v >= 1) {
      bits[it] = '1';
      v -= 1;
    } else if (v < 1) {
      bits[it] = '0';
    }

    if (v == 0) {
      bits[it + 1] = '\0';
      printf("%.4lf]\n", v);
      break;
    }
    if (it >= 1000)
      break;

    it++;
  }

  printf("Total de iteracoes: %d\n", it);
}

int main(void) {
  char bits[1000];

  calcularBinario(bits, 0.1217);

  printf("Bits da fracao do binario: %s\n", bits);

  return 0;
}