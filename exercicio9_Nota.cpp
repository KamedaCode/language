#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Crie um algoritmo que recebe a razão de uma PA e o
valor  do 1ª termo. Calcule e escreva o 10º termo da
série*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double razao, primeiroTermo,a10; //a10 = 10ª termo
	int an;	
	
	printf("**********Atividade valendo nota - Exercício 9**********\n\n");	
			
	printf("Informe a razao: ");
	scanf("%lf", &razao);
	printf("Informe o valor do primeiro termo: ");
	scanf("%lf", &primeiroTermo);
	printf("informe a localização do termo que queira saber o resultado: ");
	scanf("%d", &an);
		
	for(an; an <= 10; ++an){	
	
	a10 = primeiroTermo + (an-1)*razao;
				
	}
	
	printf("\nO 10 termo é: %.2lf\n\n", a10);
		
	system("pause");
	return 0;
}
