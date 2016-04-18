#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myproduto.h"


int ExcluirProduto(cadproduto vetor[], int num){

    int codigo, confirmar, veri = 0, i;
    cadproduto *mod;
    char *modi;
    mod = &vetor;
    do{
        system("cls");
        printf("==============  EXCLUIR PRODUTO ===================\n");
        printf("DIGITE O CODIGO DO PRODUTO: ");
        scanf("%d",&codigo);
        veri = VerificarCodigo(vetor, codigo, num, codigo, 1);
        if(veri == -1){
            printf("!!! ERRO DIGITE UM CODIGO VALIDO !!!\n");
        }
        else if(vetor[veri].quantidade > 0){
            printf("!!! ERRO PRODUTO NAO PODE SER EXCLUIDO QUANTIDADE ACIMA DE 0 NO ESTOQUE !!!\n");
            printf("!!! TEM QUE ZERA PARA EXCLUIR ESSE PRODUTO !!!\n");
        }
        else{
            printf("VOCE DESEJA EXCLUIR %s APOS EXCLUIR NAO HA COMO RECUPERAR ESSES DADOS\n[ 0 ] CONFIRMAR \n[ 1 ] NAO CONFIRMAR\n", vetor[veri].nome);
            scanf("%d",&confirmar);
            if(confirmar == 0){
                if(veri < (num - 1)){
                    for(i = veri; i < num ; i++){
                        vetor[i].codigo = vetor[i+1].codigo;

                        modi = &vetor[i].nome;
                        strcpy(modi, vetor[i+1].nome);

                        modi = &vetor[i].descricao;
                        strcpy(modi, vetor[i+1].descricao);

                        modi = &vetor[i].modelo;
                        strcpy(modi, vetor[i+1].modelo);

                        modi = &vetor[i].cor;
                        strcpy(modi, vetor[i+1].cor);

                        modi = &vetor[i].fabricante;
                        strcpy(modi, vetor[i+1].fabricante);

                        modi = &vetor[i].categoria;
                        strcpy(modi, vetor[i+1].categoria);

                        vetor[i].quantidade = vetor[i+1].quantidade;
                        vetor[i].precovenda = vetor[i+1].precovenda;
                    }
                }
                else{
                        vetor[veri].codigo = 00;

                        modi = &vetor[veri].nome;
                        strcpy(modi, " ");

                        modi = &vetor[veri].descricao;
                        strcpy(modi, " ");

                        modi = &vetor[veri].modelo;
                        strcpy(modi, " ");

                        modi = &vetor[veri].cor;
                        strcpy(modi, " ");

                        modi = &vetor[veri].fabricante;
                        strcpy(modi, " ");

                        modi = &vetor[veri].categoria;
                        strcpy(modi, " ");
                        vetor[veri].quantidade = 00;
                        vetor[veri].precovenda = 0.00;
                }
                printf("!!! PRODUTO EXCLUIDO COM SUCESSO !!!!!\n");
                num--;
            }
        }
        system("PAUSE");
        printf("DESEJA CONTINUAR \n[ 0 ] SIM \n[ 1 ] NAO\n");
        scanf("%d",&confirmar);
    }while(confirmar == 0);

    return num;
}
