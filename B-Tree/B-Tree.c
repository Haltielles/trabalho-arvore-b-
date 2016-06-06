#include "btree.h"
//cria a árvore com a ordem definida e aloca a raiz
BTree *criaArvore(int ordem){
    int i=0;
    BTree *tree=(BTree *)calloc(1,sizeof(BTree));//aloca arvore
    if(BTree== NULL)
        exit 1;
    Bno *raiz=(Bno*)calloc(1,sizeof(Bno));//aloca raiz
    if(raiz==NULL)
        exit 1;
    tree->ordem=ordem;
    tree->raiz=raiz;
    raiz->chaves=(int*)calloc(ordem-1,sizeof(int));
    raiz->filhos=(Bno**)malloc(sizeof(Bno*ordem));
    while(i<ordem){//limpa os filhos
        raiz->filhos+i=NULL;
        i++;
    }
    raiz->folha=0;
    raiz->numChaves=0;
    raiz->pai=NULL;
    return tree;
}

//imprime a árvore em ordem
void percorreOrdem(Bno *no, int ordem){
    
}

//verifica se a raiz da árvore precisa ser dividida;
//se necessário, chama o split para a raiz e aumenta a altura da árvore
//chama a insereChave com a raiz da árvore
void insere(BTree *A, int chave){
    if(A->raiz->numChaves==A->ordem-1){
        Bno *raiz = (Bno*)calloc(1,sizeof(Bno));//alloca nova raiz
        if(raiz == NULL)
            exit 1;
        raiz->chaves=(int*)calloc(A->ordem-1,sizeof(int));
        raiz->filhos=(Bno**)malloc(sizeof(Bno*A->ordem));
        A->raiz->pai=raiz;
        int meio = (int)A->ordem/2;
        //split
        split(A->raiz,meio,0,A->ordem);
    }
    else
    insereChave(A->raiz,chave,A->ordem);
}

//insere uma chave na B-Tree fazendo o split a priori
void insereChave(Bno *A, int chave, int ordem){
    if(A->numChaves==ordem-1){
        
    }
    
}

//realiza o split no nó, considerando que o pai sempre terá espaço
void split(Bno *A, int posicaoNo, int posicaoPai, int ordem){
    int i;
    Bno *irmao=(Bno*)calloc(1,sizeof(Bno));//aloca raiz
    if(irmao==NULL)
        exit 1;
    irmao->chaves=(int*)calloc(ordem-1,sizeof(int));
    irmao->filhos=(Bno**)malloc(sizeof(Bno*ordem));
    while(i<ordem){//limpa os filhos
        irmao->filhos+i=NULL;
        i++;
    }
    irmao->folha=0;
    irmao->numChaves=0;
    irmao->pai=A->pai;
    A.pai.
}
