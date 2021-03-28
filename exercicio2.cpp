#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int escolha, retorno;
	double num1, num2, operador;
	char refazer[1];
	
	do{
	
	printf("**********************Calculadora**********************\n\n");
	
		printf("Informe o primeiro número: ");
		scanf("%lf", &num1);
		printf("\nInforme o segundo número: ");
		scanf("%lf", &num2);	
	
		do{
		
			printf("\nSelecione a operação matemática que deseja realizar:\n");
			printf("\n[1] soma                [2] - subtração\n[3] - Multiplicação     [4] - Divisão\n\n");
			scanf("%d", &escolha);
	
				if(escolha < 1 || escolha > 4){
			
			printf("\nGentileza informe uma opção válida!\n");
			
		}
		
		}while(escolha < 1 || escolha > 4);
					
		switch (escolha){
		
			case 1:
				// %.2lf não informa informa a quantidade de casas decimais após a vírgula.
				operador = num1+num2;
				printf("\nSoma igual a: %.2lf\n\n",operador);
				
				break;
					
			case 2:
				
				operador = num1-num2;
				printf("\nSubtração igual a: %.2lf\n\n",operador);
				
				break;
			
			case 3:
				
				operador = num1*num2;
				printf("\nMultiplicação igual a: %.2lf\n\n",operador);
						
				break;
			
			case 4:
				
				operador = num1/num2;
				printf("\nDivisão igual a: %.2lf\n\n",operador);
				
				break;
			
			default:
			
					printf("");			

	}
	printf("Você pretende fazer um novo cálculo?\n(Digite [s] - SIM ou [n] - Não)\n\n");
	scanf("%s", &refazer);
	
	retorno = strcmp(refazer,"s");
	
	printf("\n\n");
			
	}while(retorno == 0);	
	
	system("pause");
	return 0;

}
