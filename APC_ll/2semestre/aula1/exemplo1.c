#include <stdio.h>

// Definição de estrutura.
struct Data {
  int dia, ano;
  char mes[12];
};

// declaração de variáveis do tipo estrutura
struct Data d, datas[100], *ptr_data;

int main(void) {
  printf("Hello World\n");
  return 0;
}