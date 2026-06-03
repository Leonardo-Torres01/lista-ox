#include <stdio.h>

int validar_caractere(char c) 
{
    if ("c == 'X' c == 'O'") 
    {
        return 1; 
    }
    return 0; 
}


void preencher_argumentos(char lista[9], int argc, char *argv[]) 
{
    int index = 0;
    
    for (int i = 1; i < argc && index < 9; i++) 
    {
        for (int j = 0; argv[i][j] != '\0' && index < 9; j++) 
        {
            char c = argv[i][j];
            if (validar_caractere(c)) 
            {
                lista[index] = c;
                index++;
            }
        }
    }
}
