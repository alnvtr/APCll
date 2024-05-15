#include <stdio.h>
#include <string.h>

// Definição de estrutura.
typedef struct {
  int dia, mes, ano;
} t_data;

void incrementaMes(t_data *data) {
  //(*data).mes++;
  data->mes++;
  if(data->mes == 13) {
    data->mes = 1;
    data->ano++;
  }
}

int main() {
  t_data data;
  data.dia = 31;
  data.mes = 12;
  data.ano = 2015;

  incrementaMes(&data);

  printf("Nova data: %d/%d/%d\n", data.dia, data.mes, data.ano);

  return 0;
}