#include <iostream>
#include <string>
using namespace std;

class Agenda
{
private:    
    string identidade;
    int num;
public:
    void iniciar(string nome, int numero);
    void mostrar();
};

void Agenda::iniciar(string nome, int numero)
{
    identidade = nome;
    num = numero;
}

void Agenda::mostrar()
{
    cout<<"Seu nome é "<<identidade<<".\n";
    cout<<"Seu número é "<<num<<".";
}

int main()
{
    Agenda Pedro;
    Pedro.iniciar("Pedro Alvares", 99234567);
    Pedro.mostrar();
}
