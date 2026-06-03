#include <stdio.h>
#include "function_lista.c"

int main() 
{
    int erros = 0;
    if (validar_caractere('X') != 1) erros++;
    if (validar_caractere('O') != 1) erros++;
    if (validar_caractere('A') != 0) erros++;
    if (validar_caractere('x') != 0) erros++; 
 
    char lista_teste[9] = {0};
    char *argv_fake[] = {"./lista-ox", "XXX", "OOO", "XXX"};
    preencher_argumentos(lista_teste, 4, argv_fake);

    if (lista_teste[0] != 'X' || lista_teste[4] != 'O' || lista_teste[8] != 'X') 
    {
        erros++;
    }

    if (erros == 0) 
    {
        printf("Todos os testes de lista-ox: PASSOU\n");
    } 
    else 
    {
        printf("Erro nos testes: %d falha(s)\n", erros);
    }

    printf("\nFeito por Leonardo Mattoso (https://github.com/Leonardo-Torres01)");
    return 0;
}