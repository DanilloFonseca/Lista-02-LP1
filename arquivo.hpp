#ifndef ARQUIVO_H_
#define ARQUIVO_H_

class Aluno{

  private:
    int matri;
    std::string nome;
    float n1;
    float n2;
    float n3;

  public:

  Aluno();

  Aluno(int matri, std::string nome, float n1, float n2, float n3);
  
  void setNome(std::string nome);

  void setMatricula(int matri);

  void setNotas(float n1, float n2, float n3);

  float calculaMedia();

std::string getNome();


};

class Turma{
    private:
    int capacidade;
    int vagas;
    

public:


  Turma(int vagas);
  
    Aluno *alunos;

  ~Turma();

void imprimeAlunos(Aluno &students, int total);

  void setCapacidade(int c);

  void setVagas(int v);

};

#endif