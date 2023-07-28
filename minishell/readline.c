#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>

int main()
{
    char *input_line;

    input_line = readline("Digite algo: ");

    if(input_line)
    {
        printf("Você digitou: %s\n", input_line);
        free(input_line);
    }
    return(0);
}

// Histórico de comandos:

// A biblioteca readline também oferece suporte a um histórico de comandos. 
// Quando você usa readline(), as entradas são automaticamente armazenadas em um 
// histórico. Isso permite  que o usuário navegue pelas entradas anteriores 
// usando as teclas de seta.

// Compilação:

// Ao compilar seu programa que usa a biblioteca readline, é necessário 
// vincular com a biblioteca readline usando a opção -lreadline. Por exemplo: