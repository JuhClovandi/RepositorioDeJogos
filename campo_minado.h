#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "tudo.h"


// Variáveis globais
Celula jogo[5][5];
int tam = 5;

// Inicia a matriz do jogo
void InicializarJogo()
{
	int l;
	int c;
	
    for (l = 0; l < tam; l++)
	{
        for (c = 0; c < tam; c++)
		{
            jogo[l][c].Bomba = 0;
            jogo[l][c].Aberta = 0;
            jogo[l][c].vizinhos = 0;
        }
    }
}

// Procedimento para sortear n bombas
void SortearBombas()
{
    srand(time(NULL));
    
    int i;
    int l;
    int c;
    
    for (i = 0; i < 5; i++)
	{
        l = rand() % tam;
        c = rand() % tam;
        if (jogo[l][c].Bomba == 0)
		{
            jogo[l][c].Bomba = 1;
        } else {
            i--;
        }
    }
}

// Função que diz se um par de coordenadas é válido ou não
int CoordenadaValida(int l, int c)
{
    return (l >= 0 && l < tam && c >= 0 && c < tam);
}

// Função que retorna a quantidade de bombas na vizinhança de l c
int BombasVizinhas(int l, int c)
{
    int quantidade = 0;
    
    if (CoordenadaValida(l - 1, c) && jogo[l - 1][c].Bomba) quantidade++;
    if (CoordenadaValida(l + 1, c) && jogo[l + 1][c].Bomba) quantidade++;
    if (CoordenadaValida(l, c + 1) && jogo[l][c + 1].Bomba) quantidade++;
    if (CoordenadaValida(l, c - 1) && jogo[l][c - 1].Bomba) quantidade++;
    return quantidade;
}

// Conta as bombas vizinhas
void ContarBombas() {
	int l;
	int c;
	
    for (l = 0; l < tam; l++)
	{
        for (c = 0; c < tam; c++)
		{
            jogo[l][c].vizinhos = BombasVizinhas(l, c);
        }
    }
}

// Imprime o jogo
void Imprimir() {
	
	int l;
	int c;

    printf("\n\n\t    ");
    for (l = 0; l < tam; l++)
	{
        printf(" %d  ", l);
    }
    printf("\n\t   ---------------------\n");
    for (l = 0; l < tam; l++)
	{
        printf("\t%d  |", l);
        for (c = 0; c < tam; c++)
		{
            if (jogo[l][c].Aberta)
			{
                if (jogo[l][c].Bomba)
				{
                    printf(" * ");
                } else {
                    printf(" %d ", jogo[l][c].vizinhos);
                }
            } else {
                printf("   ");
            }
            printf("|");
        }
        printf("\n\t   ---------------------\n");
    }
}

// Abrir a coordenada digitada
void AbrirCelula(int l, int c)
{
    if (CoordenadaValida(l, c) && jogo[l][c].Aberta == 0)
	{
        jogo[l][c].Aberta = 1;
        if (jogo[l][c].vizinhos == 0)
		{
            AbrirCelula(l - 1, c);
            AbrirCelula(l + 1, c);
            AbrirCelula(l, c + 1);
            AbrirCelula(l, c - 1);
        }
    }
}

// Função para verificar vitória
int ganhou() {
    int quantidade = 0;
    int l;
    int c;
    
    for (l = 0; l < tam; l++) {
        for (c = 0; c < tam; c++) {
            if (jogo[l][c].Aberta == 0 && jogo[l][c].Bomba == 0) {
                quantidade++;
            }
        }
    }
    return quantidade;
}

// Faz a leitura das coordenadas
void Jogar() {
    int linha, coluna;
    do {
        Imprimir();
        do {
            printf("\n\n\tDIGITE A LINHA: ");
            scanf("%d", &linha);
            printf("\tDIGITE A COLUNA: ");
            scanf("%d", &coluna);
            if (!CoordenadaValida(linha, coluna) || jogo[linha][coluna].Aberta)
			{
                printf("\n\n\tCOORDENADA INVÁLIDA OU JÁ ABERTA!");
            }
        } while (!CoordenadaValida(linha, coluna) || jogo[linha][coluna].Aberta);
        AbrirCelula(linha, coluna);
    } while (ganhou() != 0 && jogo[linha][coluna].Bomba == 0);
    if (jogo[linha][coluna].Bomba == 1) {
        printf("\n\n\tQUE PENA! VOCÊ PERDEU!\n");
    } else {
        printf("\n\n\tPARABENS! VOCE GANHOU!!!\n");
    }
    Imprimir();
}

// Função principal para jogar Campo Minado
void Jogo(Jogador nome_usuario)
{
        InicializarJogo();
        SortearBombas(8);
        ContarBombas();
        
        printf("\n\t\t\tCAMPO MINADO\n");
        Jogar();
        
        JogarNovamente();

}

int CampoMinado() {
    Jogador nome_usuario;
    
    Limpar();
    LogoCampoMinado();
    
    printf("\n\n\t\tDIGITE SEU NOME: ");
    fgets(nome_usuario.jogador, sizeof(nome_usuario.jogador), stdin);
    
    Jogo(nome_usuario);
}



