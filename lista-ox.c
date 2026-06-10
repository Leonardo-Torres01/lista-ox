#include <stdio.h>
#include <stdlib.h>
#include "function_lista.c"

int main(int argc, char *argv[]) 
{
    char lista[9] = {0};


    if (argc > 1)
     {
        preencher_argumentos(lista, argc, argv);
    } 
    else 
    {
      
        for (int i = 0; i < 9; i++) 
        {
            char temp;
            printf("Digite o caractere %d da lista: ", i + 1);
            scanf(" %c", &temp);

            while (!validar_caractere(temp)) 
            {
                printf("caractere invalido\n");
                printf("Digite o caractere %d da lista: ", i + 1);
                scanf(" %c", &temp);
            }
            lista[i] = temp;
        }
    }
