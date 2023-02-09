#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *proximo; //ponteiro para o nó seguinte, pois estamos trabalhando com estrutura dinâmica. 
} No;

// procedimento para inserir no meio
void inserir_no_meio(No **lista, int num, int ant){//ant de anterior, vai ser meu parâmetro.
    No *aux. *novo = malloc(size0f(No));
    if(novo){
        novo->valor = num;
        //é o primeiro? nossa lista está vazia? vamos verirficar isso olhando o conteúdo da nossa lista
        if(*lista == NULL){ //se for igual a NULL, então significa que o novo nó é o primeiro da lista.
            novo->proximo = NULL; //proximo vai ser nulo pq só existe um nó na nossa lista.
            *lista = novo;//e  o conteúdo da nossa lista, recebe novo.
            //esse if vai ser verdadeiro somente na primeira vez.
        }
        else{
            aux = *lista; //auxiliar aponta para o início da nossa lista. Primeiro nó da lista. Crio um auxiliar pq não posso alterar o 
            //conteúdo do ponteiro *lista, pq vou alterar o a *lista da main e eperder elementos da nossa lista.
            
            //Percorremos a lista até encontrar o 'ant' 
            //mas quem garante que nosso 'ant' existe? pode não existir e se não existir, vamos percorrer 
            //a lista até o final. Nesse caso, o nó vai ser inserido no final. 'aux->proximo' é enquanto exisitir
            //pq se ele não existir, pq se ele for nulo, significa que não encontramos o 'ant' e a inserção vai 
            //ocorrer no final.
            while(aux->valor != ant && aux->proximo) 
                aux = aux->proximo; //vai percorrer a lista
             novo->proximo = aux->proximo; //linkei o novo nó com a parte final da nossa lista.
             aux->proximo = novo; //se descobrirmos que o 'int' está em aux, então o próximo será o 'novo';
        }

    }
    else
        printf("Erro ao alocar memória!\n");
}

int main(){

    return (0);
}