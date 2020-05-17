#pragma once
#include <iomanip>
#include <iostream>

using namespace std;

class Cadastro
{
public:
    string      nome;
    
    class Item
    {
    public:
        int     cod;
        char    solicitante[50];
        char    cpf[15];
        char    endereco[50];
        char    email[50];
        char    sexo[2]; // M F
        char    faixaetaria[2];
    };

    int     tamanho;
    int     capacidade;
    Item**  item;

    Cadastro();
    Cadastro(int);
    ~Cadastro();

    int     Adicionar(const Item*);
    int     Capacidade();
    Item*   Consultar(const int);
    Item*   Consultar(const char* CPF);
    void    define_nome(string);
    int     Remover(const int cod);
    int     Remover(const char* CPF);
    int     Listar();
    int     Tamanho();
};

