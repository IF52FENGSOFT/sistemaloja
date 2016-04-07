#include <stdio.h>
#include <sdtlib.h>

void alterarproduto ()
{

    int codigo;

    printf("Digite o codigo do produto: ");
    scanf("%d",&codigo);
    nome[codigo] = NULL;
    sobrenome[codigo] = NULL;
    rua[codigo] = NULL;
    bairro[codigo] = NULL;
    cidade[codigo] = NULL;
    estado[codigo] = NULL;
    email[codigo] = NULL;
    
    cpf = 0;
    rg = 0;
    dia = 0;
    mes = 0;
    ano = 0;
    cli_codigo = 0;

    return 0;
}
