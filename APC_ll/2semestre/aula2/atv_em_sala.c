
typedef struct aluno Aluno;
struct aluno {
  char nome[50];
  char genero;
  float notas[3];
  int aprovado; // 0 - reprovado, 1 - aprovado
};
void listarAlunos(int n, Aluno alunos[n], int i);
void listarPorGenero(int n, Aluno alunos[n], char genero);
void exibirAlunosAprovados(int n, Aluno alunos[n]);
Aluno melhorAluno(int n, Aluno alunos[n]);
void avaliarAluno(Aluno *aluno);

int main (){
Aluno alunos[] = {
    {"Maria", 'F', {7.0, 3.0, 9.0}},
    {"Joao", 'M', {5.0, 6.0, 2.0}},
    {"Ana", 'F', {8.0, 9.0, 10.0}},
    {"Pedro", 'M', {6.0, 1.0, 8.0}},
    {"Carla", 'F', {9.0, 10.0, 10.0}},
    {"Paulo", 'M', {7.0, 8.0, 9.0}},
    {"Mariana", 'F', {5.0, 1.0, 7.0}},
    {"Marcos", 'M', {8.0, 9.0, 10.0}},
    {"Julia", 'F', {6.0, 7.0, 0.0}},
    {"Lucas", 'M', {9.0, 10.0, 10.0}}
    };
}

void listarAlunos(int n, Aluno alunos[n], int i) {
    printf("----------LISTA DE ALUNOS--------");
    for (i = 0; i < n; i++) {
        printf("nome:%s\n genero:%c", alunos[i].nome, alunos[i].genero)
        

    }
}
