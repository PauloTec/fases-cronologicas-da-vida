#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 

Jovens - Indivíduos de 18 até 23 anos;
Adultos - Indivíduos com idade entre 24 até 55 anos;
Idosos - Indivíduos de 56 anos em diante.
*/

int main(int argc, char *argv[]) {
	int idade; //idade de pessoas
	
	int pessoas, estudantes = 0; // quantidade de pessoas a serem avaliadas
	
	//Total de categorias
	int total_jovem = 0;
	int total_adultos = 0;
	int total_meia_idade = 0;
	int total_3idade = 0;
	
	printf("Quantas pessoas pretende avaliar? - ");
	scanf("%d", &pessoas);
	printf("\n");
	
	do{
		printf("Insira a sua idade: ");
		scanf("%d", &idade);
	
		if(idade>=18 && idade<23){
			total_jovem = total_jovem + 1;
		}else if(idade>=24 && idade<=55){
			total_adultos = total_adultos + 1;
		
		}else if(idade>56 && idade<=70){
			total_meia_idade = total_meia_idade + 1;
		}else if(idade>75){
			total_3idade = total_3idade + 1;
		}else
			printf("\n Idade invalida \n");
		estudantes++;
	}while(pessoas > estudantes);
	
	//calcular e mostrar o total de pessoas por faixa etária
	printf("\n");
	puts("Faixa Etaria ------------ Total de estudantes"); 
	printf("\n");
	printf(" Jovens -------------------- %d ", total_jovem);
	printf("\n");
	printf("Adultos -------------------- %d ", total_adultos);
	printf("\n");
	printf("Meia-idade ----------------- %d ", total_meia_idade);
	printf("\n");
	printf("3a Idade -------------------- %d ",total_3idade);
	printf("\n");
	printf("\n");
	
	return 0;
}
