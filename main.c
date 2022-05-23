#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop 
Existe uma grande confus�o quanto ao entendimento das fases cronol�gicas
da vida, embora existam informa��es sobre os v�rios per�odos do ciclo de
vida.
Para tentar esclarecer o problema, os estudantes do 1� ano de engenharia
foram convidados a elaborar um programa em linguagem C, que seja capaz
de registar a idade das pessoas, identificar em que faixa et�ria pertencem,
calcular e mostrar o total de pessoas por faixa et�ria, conforme o exemplo a
seguir:

Faixa Et�ria ------------ Total de estudantes
 Jovens ------------ �
 Adultos ------------ �
 Meia-idade ------------ �
 3� Idade ------------ �
*/

int main(int argc, char *argv[]) {
	int idade, estudantes=0;
	int total_jovem = 0;
	int total_adultos = 0;
	int total_meia_idade = 0;
	int total_3idade = 0;
	
	do{
		printf("Insira a sua idade: ");
		scanf("%d", &idade);
	
		if(idade>=1 && idade<=18){
			total_jovem = total_jovem + 1;
		}else if(idade>18 && idade<=65){
			total_adultos = total_adultos + 1;
		
		}else if(idade>65 && idade<=70){
			total_meia_idade = total_meia_idade + 1;
		}else if(idade>70){
			total_3idade = total_3idade + 1;
		}
		estudantes++;
	}while(estudantes < 4);
	
	//calcular e mostrar o total de pessoas por faixa et�ria
	printf("Faixa Etaria ------------ Total de estudantes"); 
	printf("\n");
	printf(" Jovens ------------ %d ", total_jovem);
	printf("\n");
	printf("Adultos ------------ %d ", total_adultos);
	printf("\n");
	printf("Meia-idade ------------ %d ", total_meia_idade);
	printf("\n");
	printf("3a Idade ------------ %d ",total_3idade);
	printf("\n");
	printf("\n");
	
	return 0;
}
