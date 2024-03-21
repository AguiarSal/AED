#include <iostream>
#include <string>
using namespace std;

class Aluno
{
private:    
    string nome;
    int matricula;
    string curso;
    float nota;
    int faltas;
public:
    void cadastrar(string name, int mat, string cur);
    void exibir();
    void rendimento(float nota1, int faltas1);
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

void Aluno::rendimento(float nota1, int faltas1)
{
    cout<<"Digite a quantidade de faltas do aluno.\n";
    cin>>faltas1;
    cout<<"Digite a nota do aluno.\n";
    cin>>nota1;
    
    nota = nota1;
    faltas = faltas1;
}

void Aluno::exibir()
{
    cout<<"-------------------------------------------\n";
    cout<<"Nome: "<<nome<<"\n";
    cout<<"Matrícula: "<<matricula<<"\n";
    cout<<"Curso: "<<curso<<"\n";
    cout<<"Nota: "<<nota<<"\n";
    cout<<"Faltas: "<<faltas<<"\n";
    cout<<"-------------------------------------------\n";
}

int main()
{
    Aluno A1;
    A1.cadastrar("Fulano",000000000,"Place_holder");
    A1.rendimento(0, 0);
    A1.exibir();
}
