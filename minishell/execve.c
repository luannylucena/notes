/*

FORK -> Clona o processo atual.
EXECVE -> substitui a imagem de memória do proceosso que a envoca.

Para que a chamnada de sistema carregue um novo programa no processo que está 
execução no momento, de modo que o programa existente em execução no processo seja descartado e uma nova pilha
de dados e heap sejam todos puxados para o processo atual, então é quase como se você tivess substituindo
o que estava sendo executado por outra coisa, então não estamos fazendo uma cópia, não estamos 
fazendo algo extra qdo vc chama o exec, vc está jogando fora o programa de cahamda, então, 
já que vc está substituindo isso na memória do processo atual, isso sempre retornará um negativo. isso ocorre
 ele está jogando fora o programa de chamada, então nao há nada para retornar um valor para esse 
 pprocesso se for, então o valor de retorno sempre será megativo, pq se ouver um valor de retorno, 
 há um problema, exatamente e leva 3 parâmetros:

 -pathname: o primeiro parâmetro é o nome do comando que você deseja executar 
 argv: que é uma lista de argumentos para passar para o novo programa e isso é análogo ao 
 parâmetro argv onde vc tem um array de strings onde cada string reperesenta um argumento diferente

 - envp: é a lista de ambiente. E essa é uma lista de variáveis de ambiente que você deseja definir 
 para executar o novo programa, 
 
    Agora lembre-se qdo digo uma lista para esses dois últimos parâmetros nós 
 vamos ter uma matriz de ponteiros de caracateres e essa matriz será terminnada em null, ṕara que ela
 saiba onde está o final dessa lista especifica. 
    Entao é meio semmelhante a coom uma string funciona, execeto pelo que estamos 
 lidando com o caracateres ponteiriso, em ves de caaracteres reais e mais de uma string e cada u desses ṕonteiros
 de caracateres aponta para uma string diferente, porntado, lembre-se que, com execve, o argumento
 e os parâmetros de amboente são matrozes de ponteiros de caracteres, ostando, o que aparece na prática é por exemplo argv, teria que essa matriz de ṕonteiros, e em sem seguida, parada argumento 
 que vc desejasse passar, voceê teria um ponteiro para esse argumento, e assim que terminasse 
 a última entrada em argv, seria nula para indicar qu eo final da lista.


*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    //char cmd[] = "/usr/bin/ls";

    char cmd[] = "./userscript.sh";

    //char *argVector[] = {"ls", "-l", NULL}; // inicializamos com null para dizer que etão vazios
    char *argVector[] = {"userscript", "arg1", "arg2", "3", NULL};
    char *envVector[] = {NULL};

    printf("Start of execve call %s:\n", cmd);
    printf("=============================================\n");
    if(execve(cmd, argVector,envVector) == -1) //vamos verificar se retorna um negativo, então temos um problema
    {
        perror("Could not execute execve");
    }
    printf("Algo deu errado.");

    return(0);
}