#include <stdio.h>
#include <stdlib.h>

// Lista simplesmente Encadeada: como inserir no fim da lista?

typedef struct no{
	int valor;
	struct no *proximo; //ponteiro para o nó seguinte, pois estamos trabalhando com estrutura dinâmica. 
} No;

//procedimento para inserir no fim.
void inserir_no_fim(No **lista, int num){ 
	No *novo = malloc(sizeof(No));
	if(novo){
		novo->valor = num;
		novo->proximo = NULL; //null pq é o ultimo e não aponta para ng.
	}
	else
		prinft("Erro ao alocar memória!\n")
}

int main()
{

	return (0);
}
