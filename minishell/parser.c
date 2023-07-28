/*
O parser (analisador sintático) em C é uma parte essencial de um compilador ou interpretador. 
Ele é responsável por analisar o código fonte em linguagem C e identificar sua estrutura sintática 
de acordo com as regras da gramática da linguagem.

O processo de análise sintática envolve transformar o código-fonte em uma estrutura de dados mais organizada, 
como uma árvore sintática, que pode ser usada posteriormente pelo compilador ou interpretador para gerar código 
executável ou para executar o programa.

Aqui está uma visão geral de como o parser funciona em C:

    Tokenização:
    Antes de começar a análise sintática, o código-fonte em C é dividido em tokens. Um token é a menor unidade 
    léxica em um programa C, como palavras-chave, identificadores, literais, operadores, delimitadores, etc. 
    A tokenização é realizada pelo analisador léxico (lex), que agrupa caracteres em tokens significativos.

    Gramática:
    O analisador sintático precisa conhecer a gramática da linguagem C para entender como as várias partes do 
    código se encaixam. A gramática define as regras sintáticas da linguagem, como a estrutura de uma declaração, 
    expressão, função, etc. Ela é geralmente definida usando a notação BNF (Backus-Naur Form) ou uma variação dela.

    Análise Sintática:
    O parser começa a ler os tokens gerados pelo analisador léxico e tenta corresponder esses tokens com a 
    estrutura gramatical definida para a linguagem C. Ele usa regras de produção para construir uma árvore sintática 
    ou uma representação intermediária do programa.

    Árvore Sintática:
    A árvore sintática é uma representação hierárquica da estrutura do código em C. Ela mostra como os diferentes
    elementos do programa se relacionam entre si. Por exemplo, a árvore sintática para uma expressão pode conter 
    nós para operadores, operandos e suas relações.

    Detecção de Erros:
    Durante o processo de análise sintática, o parser também verifica se o código está correto de acordo com a 
    gramática da linguagem. Se encontrar erros, como declarações malformadas ou uso incorreto de operadores, 
    o parser irá reportá-los para que o programador possa corrigi-los.

    Geração de Código Intermediário:
    Em alguns compiladores, após a análise sintática, pode ser gerado um código intermediário. 
    Esse código não é executável diretamente, mas é uma representação mais próxima da linguagem de 
    máquina do que o código-fonte em C. O código intermediário é usado como uma etapa intermediária 
    para otimizações antes de gerar o código de máquina final.

O parser é uma etapa crucial do processo de compilação e interpretação, pois fornece uma estrutura coerente 
e organizada do programa, permitindo que o compilador ou interpretador realize as próximas etapas para finalmente executar o programa.

*/