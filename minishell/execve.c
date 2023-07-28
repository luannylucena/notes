/*

FORK -> Clona o processo atual.
EXECVE -> substitui a imagem de memória do proceosso que a envoca.

A função execve() é uma função do padrão C que é usada para executar um programa em um novo processo. 
Ela substitui o atual processo pelo novo processo especificado.

Aqui está a declaração da função execve():

int execve(const char *filename, char *const argv[], char *const envp[]);

** O const é uma forma de adicionar segurança e clareza ao código, permitindo que você indique suas 
intenções de tornar um valor imutável. Além disso, o compilador pode realizar otimizações específicas 
quando sabe que um valor não será modificado.

Os parâmetros da função são os seguintes:

    filename: Uma string que especifica o caminho do arquivo executável que será carregado e executado.
    argv: Um vetor de strings que especifica os argumentos passados para o programa. O último elemento do vetor deve ser NULL.
    envp: Um vetor de strings que especifica as variáveis de ambiente para o novo processo. Assim como argv, o último elemento do vetor deve ser NULL.

A função execve() carrega e executa o programa especificado pelo filename em um novo processo. Ele substitui o programa atual pelo novo programa, 
mantendo o mesmo PID (identificador de processo).

A principal diferença entre execve() e outras funções de execução, como execvp() e execlp(), é que execve() permite especificar o vetor de strings 
de variáveis de ambiente, enquanto as outras funções usam o ambiente atual do processo.

A função execve() retorna -1 se ocorrer algum erro durante a execução, e em caso de sucesso, ela não retorna.

É importante notar que o novo programa substituirá o programa atual, e qualquer código após a chamada de execve() 
não será executado, a menos que ocorra algum erro na execução.

A função execve() é parte das funções da família exec, que inclui outras variantes como execl(), execv(), etc., cada uma com suas 
particularidades em relação à passagem de argumentos e variáveis de ambiente.

*/

#include <stdio.h> //printf; perror;
#include <unistd.h> //execve;

/*
O objetivo deste exemplo é executar o comando "ls -l" em 
um novo processo usando a função execve().

args é um vetor de strings que contém os argumentos do programa 
que queremos executar. Neste caso, args[0] é o caminho para o executável 
ls, args[1] é a opção -l para listar em formato longo e o último elemento é NULL, indicando o final do vetor. 

    A chamada de execve() tenta executar o programa especificado pelo caminho fornecido em args[0] com os argumentos 
    especificados em args e as variáveis de ambiente em env.

    Se a chamada de execve() falhar, ela retornará -1, indicando que ocorreu um erro. Nesse caso, a função perror("execve") 
    é chamada para imprimir uma mensagem de erro na saída padrão de erro. Em seguida, o programa retorna com um código de erro 
    não zero (1 neste caso).

    Se a chamada de execve() for bem-sucedida, o novo programa será executado e substituirá o processo atual. Nesse caso, o código 
    após a chamada de execve() não será alcançado.

Finalmente, temos um printf() que imprime uma mensagem indicando que a linha não será alcançada, pois o processo atual terá sido 
substituído pelo novo programa. No entanto, como mencionado anteriormente, essa linha nunca será executada.

no exemplo dado, o vetor env é definido como NULL, o que indica que o novo processo usará o ambiente atual do programa.

As variáveis de ambiente são um conjunto de pares chave-valor que estão disponíveis para um programa em execução. 
Elas podem conter informações como diretórios de busca, configurações específicas, tokens de autenticação, entre outras. 
Os programas em C podem acessar essas variáveis usando funções como getenv().

Ao passar NULL como o vetor de ambiente para a função execve(), o novo processo terá acesso ao mesmo conjunto de variáveis
de ambiente que o programa atual. Isso significa que as variáveis de ambiente definidas no ambiente de execução do programa 
serão herdadas pelo novo processo.

Se você quisesse definir variáveis de ambiente específicas para o novo processo, você deveria criar um vetor de strings env 
contendo as variáveis de ambiente desejadas. Cada string do vetor seguiria o formato "chave=valor", por exemplo:

char *env[] = { "VAR1=valor1", "VAR2=valor2", NULL };

Nesse caso, o novo processo teria acesso às variáveis de ambiente VAR1 e VAR2 com os respectivos valores fornecidos.

No exemplo original, o vetor env está definido como NULL, então o novo processo usará o mesmo conjunto de variáveis de ambiente do programa atual.
*/

int main() 
{
    char *args[] = { "/bin/ls", "-l", NULL}; 
    char *env[] = { NULL };

    if (execve(args[0], args, env) == -1) {
        perror("execve");
        return 1;
    }

    printf("Esta linha não será alcançada, pois o processo foi substituído pelo novo programa.\n");

    return 0;
}