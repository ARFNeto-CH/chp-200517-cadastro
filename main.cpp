#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

#include "Cadastro.h"
#include "Fila.h"

using namespace std; 

typedef  Cadastro::Item Alguem; // pra nao ficar repetindo

Alguem* cria_alguem(int);

int main(int argc, char** argv)
{
	int res = 0;
	Fila fila(50);			// solicitacoes
	Cadastro cadastro(10);  // solicitantes
	Cadastro outros[2];     // exemplo
	cadastro.define_nome("oficial");
	outros[0].define_nome("um outro");
	outros[1].define_nome("mais um");

	do
	{	Alguem* um = cria_alguem(1);
		res = cadastro.Adicionar(um);
		delete um;
		cout << "Cadastro reporta " <<
			cadastro.Tamanho() << " de " <<
			cadastro.Capacidade() << " possiveis solicitantes" <<
			endl;
	} while (res == 0);

	cadastro.Listar();
	outros[0].Listar();
	outros[1].Listar();
	return 0;
}

Alguem* cria_alguem(int controle)
{
	static int N = 1001;
	if (controle == 0)
	{
		N = 1001; // reinicia
		return NULL;
	};
	Alguem* a = new Alguem;
	a->cod = N;
	sprintf(a->solicitante, "Nome%04d SobreNome%04d", N, N);
	sprintf(a->cpf, "123.%03d.%03d-%02d", N%1000, N%1000, 1+N%10);
	sprintf(a->endereco,"Rua R%04d %02d Ap %d", N%10000, N%100, 1+N%10);
	a->sexo[0] = 'M';
	a->faixaetaria[0] = 'A';
	N = N + 1;
	return a;
};
