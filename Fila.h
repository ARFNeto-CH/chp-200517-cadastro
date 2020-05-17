#pragma once

#include <iomanip>
#include <iostream>

class Fila
{
public:
    class Solicitacao
    {
    public:
        int     cod;
        int     cod_solicitante;
        char    descricao[50];
    };

    int             capacidade;
    int             tamanho;
    Solicitacao**   sol;

public:
    Fila();
    Fila(int);
    ~Fila();

    int     Inserir(Solicitacao*);
    int     Listar();
    int     Remover(Solicitacao*);
    int     Tamanho();
    bool    Vazia();
};