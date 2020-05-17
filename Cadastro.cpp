#define _CRT_SECURE_NO_WARNINGS
#include "Cadastro.h"

using namespace std;

Cadastro::Cadastro() : tamanho(0), capacidade(10)
{
	Item* i = (Item*) new Item*[10];
	item = (Item**)i;
	nome = "?";
};

Cadastro::Cadastro(int N) : tamanho(0), capacidade(N)
{
	Item* i = (Item*) new Item* [N];
	item = (Item**)i;
	nome = "?";
};

Cadastro::~Cadastro()
{
	std::cout << "Apagando Cadastro com " <<
		setw(2) << tamanho << "/" <<
		setw(4) << capacidade <<
		" solicitantes" << std::endl;
	for (int i = 0; i < tamanho; i += 1)
	{
		// tem um solicitante aqui
		cout << "Apagando solicitante #" <<
			item[i]->cod << endl;
		delete item[i];
	}
}

int Cadastro::Adicionar(const Item* it)
{
	if (tamanho >= capacidade) return -1;
	item[tamanho] = new Item;
	*(item[tamanho]) = *it; // copia o cara
	tamanho += 1; // anota esse
	return 0;
}

int Cadastro::Capacidade()
{
	return capacidade;
}

Cadastro::Item* Cadastro::Consultar(const int cod)
{
	return 0;
}

Cadastro::Item* Cadastro::Consultar(const char* CPF)
{
	return 0;
}

void Cadastro::define_nome(string n)
{
	nome = n;
	return;
}


int Cadastro::Remover(const int cod)
{
	return 0;
};

int Cadastro::Remover(const char* CPF)
{
	return 0;
};

int Cadastro::Listar()
{
	if (tamanho == 0)
	{
		cout << "\ncadastro '" << nome << "' vazio\n" << endl;
		return 0;
	};
	cout << "\ncadastro '" << nome << "' com " <<
		tamanho << " de " << capacidade <<
		" possiveis solicitantes\n" << endl;
	
	for (int i = 0; i < tamanho; i += 1)
	{
		printf("#%03d/%03d:\n",  i+1,tamanho);
		printf("  Nome: %s\n",   item[i]->solicitante);
		printf("   CPF: %s\n",   item[i]->cpf);
		printf("   End: %s\n\n", item[i]->endereco);
	}
	return 0;
};

int Cadastro::Tamanho()
{
	return tamanho;
};
