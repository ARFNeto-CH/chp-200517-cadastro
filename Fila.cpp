#include "Fila.h"

using namespace std;

Fila::Fila() : capacidade(20), tamanho(0), sol(0)
{
	std::cout << "Criando Fila com capacidade para " <<
		setw(4) << capacidade <<
		" solicitacoes" << std::endl;
	Solicitacao* s  = (Solicitacao*) new Solicitacao* [20];
	sol = (Solicitacao**)s;
}

Fila::Fila(int N) : capacidade(N), tamanho(0), sol(0)
{
	std::cout << "Criando Fila com capacidade para " <<
		setw(4) << capacidade <<
		" solicitacoes" << std::endl;
	Solicitacao* s = (Solicitacao*) new Solicitacao * [N];
	sol = (Solicitacao**)s;
}

Fila::~Fila()
{
	std::cout << "Apagando Fila com " << 
		setw(2) << tamanho << "/" <<
		setw(4) << capacidade <<
		" solicitacoes" << std::endl;
	for (int i = 0; i < tamanho; i += 1)
	{
	    // tem uma solicitacao aqui
	    cout << "Apagando solicitacao #" <<
			sol[i]->cod << endl;
		delete sol[i];
	}
}

int Fila::Inserir(Solicitacao*)
{
	return 0;
}

int Fila::Listar()
{
	return 0;
}

int Fila::Remover(Solicitacao*)
{
	return 0;
}

int Fila::Tamanho()
{
	return tamanho;
}

bool Fila::Vazia()
{
	return tamanho == 0;
}





