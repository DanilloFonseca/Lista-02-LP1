#include <iostream>
#include "arquivo.hpp"


Aluno::Aluno(){
    this->nome = "ninguém";
    this->matri = 0;
    this->n1 = 0;
    this->n2 = 0;
    this->n3 = 0;
    
  }
 
  
  Aluno::Aluno(int matri, std::string nome, float n1, float n2, float n3){
    this->matri = matri;
    this->nome = nome;
    this->n1 = n1;
    this->n2 = n2;
    this->n3 = n3;
  }
  
  void Aluno::setNome(std::string nome){
    this->nome = nome;
  }
  void Aluno::setMatricula(int matri){
    this->matri = matri;
  }
  void Aluno::setNotas(float n1, float n2, float n3){
    this->n1 = n1;
    this->n2 = n2;
    this->n3 = n3;
  }

  float Aluno::calculaMedia(){
    float n1 = 0; float n2 = 0; float n3 = 0;
    n1 = this->n1;
    n2 = this->n2;
    n3 = this->n3;

    return (n1 + n2 + n3) / 3;
  }

std::string Aluno::getNome(){
  return this->nome;
}



  Turma::Turma(int vagas){
    alunos = new Aluno[vagas];
  }
 

  Turma::~Turma(){
    delete[] alunos;
  }

void Turma::imprimeAlunos(Aluno *students, int total){
  for(int i=0;i<total;i++){//função pra corrigir
    std::cout << (*students+i)->getNome() << std::endl;
    std::cout << students[i].calculaMedia() << std::endl;
  }
}

  void Turma::setCapacidade(int c){
    this->capacidade = c;
  }

  void Turma::setVagas(int v){
    this->vagas = v;
  }