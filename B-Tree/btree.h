#ifndef B-Tree
#define B-Tree
#include <stdio.h>
#include <stdlib.h>

typedef struct BTree
{
    int ordem;
    struct Bno *raiz;
    
}BTree;


typedef struct Bno
{
    int numChaves;
    bool folha; //0 para folha - 1 para não-folha
    struct Bno *pai;
    int *chaves;
    struct Bno **filhos;    
}Bno;

//cria a árvore com a ordem definida e aloca a raiz
BTree *criaArvore(int ordem);

//imprime a árvore em ordem
void percorreOrdem(Bno *no, int ordem);

//verifica se a raiz da árvore precisa ser dividida;
//se necessário, chama o split para a raiz e aumenta a altura da árvore
//chama a insereChave com a raiz da árvore
void insere(BTree *A, int chave);

//insere uma chave na B-Tree fazendo o split a priori
void insereChave(Bno *A, int chave, int ordem);

//realiza o split no nó, considerando que o pai sempre terá espaço
void *split(Bno *A, int posicaoNo, int posicaoPai, int ordem);


#endif /* BTREE_H */
