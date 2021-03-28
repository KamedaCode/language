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
	
		printf("Informe o primeiro n�mero: ");
		scanf("%lf", &num1);
		printf("\nInforme o segundo n�mero: ");
		scanf("%lf", &num2);	
	
		do{
		
			printf("\nSelecione a opera��o matem�tica que deseja realizar:\n");
			printf("\n[1] soma                [2] - subtra��o\n[3] - Multiplica��o     [4] - Divis�o\n\n");
			scanf("%d", &escolha);
	
				if(escolha < 1 || escolha > 4){
			
			printf("\nGentileza informe uma op��o v�lida!\n");
			
		}
		
		}while(escolha < 1 || escolha > 4);
					
		switch (escolha){
		
			case 1:
				// %.2lf n�o informa informa a quantidade de casas decimais ap�s a v�rgula.
				operador = num1+num2;
				printf("\nSoma igual a: %.2lf\n\n",operador);
				
				break;
					
			case 2:
				
				operador = num1-num2;
				printf("\nSubtra��o igual a: %.2lf\n\n",operador);
				
				break;
			
			case 3:
				
				operador = num1*num2;
				printf("\nMultiplica��o igual a: %.2lf\n\n",operador);
						
				break;
			
			case 4:
				
				operador = num1/num2;
				printf("\nDivis�o igual a: %.2lf\n\n",operador);
				
				break;
			
			default:
			
					printf("");			

	}
	printf("Voc� pretende fazer um novo c�lculo?\n(Digite [s] - SIM ou [n] - N�o)\n\n");
	scanf("%s", &refazer);
	
	retorno = strcmp(refazer,"s");
	
	printf("\n\n");
			
	}while(retorno == 0);	
	
	system("pause");
	return 0;

}
