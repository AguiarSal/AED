#include <iostream>
#include <string>
using namespace std;

class Aluno
{
private:    
    string nome;
    int matricula;
    string curso;
public:
    void cadastrar(string name, int mat, string cur);
    void exibir();
};

void Aluno::cadastrar(string name, int mat, string cur)
{
    cout<<"Digite o nome do aluno.\n";
    cin>> name;
    cout<<"Digite a matrícula do aluno.\n";
    cin>> mat;
    cout<<"Digite o curso do aluno.\n";
    cin>>cur;
    
    nome = name;
    matricula = mat;
    curso = cur;
}

void Aluno::exibir()
{
    cout<<"-------------------------------------------\n";
    cout<<"Nome: "<<nome<<"\n";
    cout<<"Matrícula: "<<matricula<<"\n";
    cout<<"Curso "<<curso<<"\n";
    cout<<"-------------------------------------------\n";
}

int main()
{
    Aluno A1;
    A1.cadastrar("Fulano",000000000,"Place_holder");
    A1.exibir();
}
