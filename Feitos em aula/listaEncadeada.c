#include <stdio.h>
#include <stdlib.h>

struct elemento{
	unsigned int idade;
	struct elemento *proximo;
};

typedef struct elemento elemento;

int main(){
	elemento *Jose, *Lucas, *Andreia;

	Jose = malloc(1 * sizeof(elemento));
	Lucas = malloc(1 * sizeof(elemento));
	Andreia = malloc(1 * sizeof(elemento));

	Jose->idade = 30;
	Jose->proximo = Lucas;

	Lucas->idade = 26;
	Lucas->proximo = Andreia;

	Andreia->idade = 51;
	Andreia->proximo = NULL;

	for (elemento *i = Jose; i != NULL; i = i->proximo)
		printf("num = %d\n", i->idade);
	return 0;
}