#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	
	printf("\nObjetivo do programa: informar qual e o primeiro numero nao repetido do array.\n");

	int array[100];

	// Preenche o array com números aleatórios
	srand(time(0));
	for(int i=0; i<100; i++) {
		array[i] = rand() % 101;
	}

	// Imprime o array
	printf("\n[ ");
	for(int i=0; i<100; i++) {
		printf("%d ", array[i]);
	}
	printf("]\n");

	// Verifica qual o primeiro número do array que não se repete
	for(int i=0; i<100; i++) {
		int repetido = 0;
		for(int i2=99; i2>i; i2--) {
			if(array[i] == array[i2]) {
				repetido = 1;
				break;
			}
		}
		if(repetido == 0) {
			printf("\nO primeiro numero nao repetido do array e o %d, que esta na posicao %d do array.\n\n", array[i], i);
			break;
		}
	}
	
	system("pause");

	return 0;
}
