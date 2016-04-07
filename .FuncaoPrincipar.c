#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myproduto.h"


int Menu(cadproduto vetor[], caddiversos vet[], int cad[], int num){

    int op, cont ;
     do{
        system("cls");
        printf("=========================================================\n");
        printf("================  ORGANIZACAO  R V A ====================\n");
        printf("=========================================================\n\n");
        printf("========================== MENU =========================\n");
        printf("[ 1 ] CADASTRAR PRODUTO \n[ 2 ] CADASTRAR DIVERSOS \n[ 0 ] SAIR\n");
        scanf("%d",&op);
        switch(op){
            case 1 :
                system("cls");
                CadastroProduto(vetor, vet, num);
                num++;
            break;

            case 2:
                do{
                    system("cls");
                    printf("===================== CADASTRO DIVERSOS ======================\n");
                    printf("[ 1 ] CADASTRO DE CATEGORIA \n[ 2 ] CADASTRO FABRICANTE \n[ 3 ] CADASTRO COR \n[ 0 ] SAIR \n");
                    scanf("%d",&cont);
                    if(cont != 0){
                        CadastroDiversos(vet,  cad, cont);
                    }
                }while(cont != 0);

            break;
        }
    }while(op != 0);

    return num;
}

int retornecad(int car[], int num){
    switch(num){
        case 1:
            return car[0];
        break;
        case 2:
            return car[1];
        break;
        case 3:
            return car[2];
        break;
    }

}

int main()
{
    cadproduto vetor[10];
    caddiversos vet[10];
    int menu1, consul = 1, num = 0, numero, cad[4];
    cad[0] = 0;
    cad[1] = 0;
    cad[2] = 0;
    do{
        system("cls");
        printf("=========================================================\n");
        printf("================  ORGANIZACAO  R V A ====================\n");
        printf("=========================================================\n\n");
        printf("=====================  TELA INICIAL  ====================\n");
        printf("[ 1 ] CADASTROS \n[ 2 ] CONSULTA \n[ 0 ] SAIR\n");
        scanf("%d",&menu1);
        switch(menu1){
            case 1:
                num = Menu(vetor, vet, cad, num);
            break;

            case 2:
                Relatorio(vetor, num);

            break;
            case 3:
                scanf("%d",&numero);
                printf("o vetor %d   e igual a num %d\n",vetor[numero].codigo,numero);
                system("PAUSE");
            break;
        }
    }while(menu1 != 0);
    return 0;
}
