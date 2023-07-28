signal(SIGQUIT, sigquit_handler)

/*
    SIGQUIT: É uma constante que representa o sinal específico que você deseja manipular. 
    Nesse caso, SIGQUIT representa o sinal gerado quando o usuário pressiona Ctrl + \ (backslash) no terminal. 
    Esse sinal é normalmente usado para solicitar que um programa seja encerrado de forma controlada. 
    No entanto, ao fornecer um manipulador para esse sinal, você pode alterar o comportamento padrão.

    sigquit_handler: É o nome da função que atuará como o manipulador de sinal para o sinal SIGQUIT. 
    Essa função deve ter o seguinte formato: void nome_da_funcao(int signal). Como mencionado anteriormente, 
    ela será chamada quando o sinal SIGQUIT for recebido.
*/


void sigquit_handler(int signal)
{
    printf("Você pressionou Ctrl + \, mas esse sinal foi ignorado.\n");
}

/*
Essa função em C é um manipulador de sinal (signal handler) para o sinal SIGQUIT. 
Os manipuladores de sinal são funções que são chamadas em resposta a sinais específicos 
gerados pelo sistema operacional ou por outras partes do programa.

Aqui está uma explicação dos conceitos relacionados a essa função:

    void: "void" é o tipo de retorno da função, o que significa que ela não retorna nenhum valor.

    sigquit_handler: Esse é o nome da função, que será chamada quando o sinal SIGQUIT for recebido.

    int signal: A função tem um parâmetro chamado "signal" do tipo inteiro (int). Esse parâmetro é usado 
    para indicar qual sinal foi recebido e permite que você tome diferentes ações dependendo do sinal.

    printf: A função printf() é usada para imprimir uma mensagem na saída padrão (normalmente a tela). 
    Neste caso, a mensagem informa ao usuário que o sinal SIGQUIT foi recebido, mas foi ignorado pelo manipulador.

O sinal SIGQUIT é geralmente gerado quando o usuário pressiona Ctrl + \ (a tecla backslash) no terminal. 
Por padrão, o SIGQUIT causa a finalização do programa, mas ao criar um manipulador para esse sinal, 
você pode alterar o comportamento padrão.

No exemplo dado, a ação tomada pelo manipulador de sinal é simplesmente exibir uma mensagem 
informando que o sinal foi recebido e ignorado. Isso pode ser útil para informar o usuário que 
uma ação específica foi solicitada, mas o programa optou por não encerrar imediatamente (o que 
aconteceria se o sinal não tivesse um manipulador).
*/