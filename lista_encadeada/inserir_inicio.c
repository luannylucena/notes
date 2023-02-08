
#include <stdio.h>
#include <stdlib.h>

// Lista simplesmente Encadeada: como inserir no início da lista?

typedef struct no{
	int valor;
	struct no *proximo; //ponteiro para o nó seguinte, pois estamos trabalhando com estrutura dinâmica. 
} No;

//procedimento para inserir no início.
void inserir_no_inicio(No **lista, int num){//recebemos um ponteiro para ponteiro pq temos um ponteiro para um nó na 'main' que
// vai se chamar 'lista', então receberemos aqui o endereço dessa variável. Pq estamos inserindo no início e essa variável da main 
// vai apontar para um nó, por isso ponteiro para ponteiro. 
	No *novo = malloc(sizeof(No));
	if(novo){// esse if vai dizer se o alocamento de memória acima deu certo. Se não der, entra no else de baixo e printa msg erro. 
		novo->valor = num; 
		novo->proximo = *lista; //aponta para o início da nossa lista; (*lista aponta para o conteúdo da lista)
		*lista = novo;


	}
	else
		prinft("Erro ao alocar memória!\n")
}

int main()
{

	return (0);
}
