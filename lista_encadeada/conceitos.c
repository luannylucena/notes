
// numa Pilha vc sempre vai inserir ou retir coisas do topo e na Fila a inserção sempre é no final 
// e a remoção no início (ex: impressora).

// Uma Lista (tb chamada de Lista Encadeada ou Lista simplesmente Encadeada) é uma sequeência
// de elementos encadeados, um após o outro. Se vc precisa fazer inserções de elementos e não sabe 
// qtos elementos irá inserir, uma lista é um ótimo recurso! 
// Na lista, você vai alocando Nós, preenchendo-os com informações e inserindo-os na sua lista.

// Não existem muitas restrições, é bem flexível, vai depender do tipo de probelma:
	// -inserir no início/meio/fim;
	// -inserir ordenado; 
	// -remoção do início/meio/fim;
	// -busca;
// Nossa Lista terá 2 estruturas: 
	// -Um nó que tem um campo 'valor' e um ´ponteiro' que aponta para o próximo nó.
	// -Um estrutura 'Lista' que tem um campo 'tamanho' que armazena o tamanho da nossa lista ou a qte
	// de lementos da nossa lista e temos tb um ponteiro chamado início que aponta para o primeiro nó.

// Sempre que usamos listas, temos que criar um ponteiro auxiliar que aponte para o primeiro nó da nossa lista.
// precisamos desse ponteiro auxiliar pro caso de do conteúdo do nosso ponteiro  'Lista', perdemos a referência 
// para nossa lista. então, com o auxiliar, vamos imprimindo, manipulando e fazendo qualquer operação na nossa lista
// garantido que semos vamos manter a referência para o primeiro nó da nossa lista. 

// Podemos inserir um novo nó em qualquer ligar, vamos usar o ponyeiro auxiliar para tal. E como fazer isto?
// precisamos pegar o novo nó e linkar com a nossa lista. 

// A lista Duplamente encadeada tem um ponteiro para o 'próximo' nó e, também, para o 'anterior'.
