#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myproduto.h"

void CadastroProduto(cadproduto vetor[], int car[], int num){
    int veri = 0;
    printf("===================== CADASTRO PRODUTO =====================\n");
    printf("CODIGO PRODUTO: ");
    scanf("%d",&vetor[num].codigo);
    do{
        veri = VerificarCodigo(vetor, num, vetor[num].codigo);
        if(veri == 0){
            printf("!!! ERRO ESSE CODIGO JA EXISTE DIGITE UM CODIGO DIFERENTE DE [ %d ] !!!\n"  ,vetor[num].codigo);
            scanf("%d",&vetor[num].codigo);
        };
    }while(veri == 0);

    printf("NOME: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].nome);
    printf("DESCICAO: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].descricao);
    printf("QUANTIDADE: ");
    scanf("%d",&vetor[num].quantidade);
    printf("VALOR: ");
    scanf("%f",&vetor[num].precovenda);
    printf("MODELO: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].modelo);
    printf("COR: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].cor);
    printf("FABRICANTE: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].fabricante);
    printf("CATEGORIA: ");
    fflush(stdin);
    scanf("%[^\n]s",&vetor[num].categoria);
}



    return 1;
}
