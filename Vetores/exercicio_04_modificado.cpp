/*4) Fa�a um programa que preencha dois vetores de caracteres com 10
posi��es cada.
Em seguida, utilize uma fun��o que
receba estes dois vetores como par�metros e retorne um 
valor inteiro indicando se os vetores s�o iguais ou n�o
(1 se os vetores forem iguais e 0 caso contr�rio).*/

#include <stdio.h> //Biblioteca para usar comandos de entrada e sa�da
#include <stdlib.h> //Biblioteca para usar comando system("PAUSE")
#include <string.h>

//Procedimento Cabe�alho
void cabecalho()
{
	printf("\t.........................................................\n");
	printf("\t.Universidade de Brasilia - FGA                         .\n");
	printf("\t.Introducao a Ciencia da Computacao                     .\n");
	printf("\t.Professor: Giovanni     || Turma: AA                   .\n"); 
	printf("\t.Aluno: Cleiton da Silva Gomes                          .\n");
	printf("\t.Matricula: 00/0000000                                  .\n");
	printf("\t.........................................................\n");
}

//Fun��o para comparar os dois vetores
int vetores(char vetor_1[],char vetor_2[])
{
	int valor_a_retornar = 0;
	int conta_carecteres_1 ;
	int conta_carecteres_2 ;
	int i;
	
	//verifica a quantidade de caracteres do vetor
	//Vetor de caracteres = String
	//strlen serve para contar a quantidade de caracteres
	conta_carecteres_1 = strlen(vetor_1);
	conta_carecteres_2 = strlen(vetor_2);
	
	//Condi��o para que a quantidade de caracteres do vetores sejam iguais
	if(conta_carecteres_1 == conta_carecteres_2)
	{
		//La�o para percorrer cada caractere e comparar se s�o iguais ou n�o.
		for(i = 0; i < conta_carecteres_2; i++)
		{
			//Condi��o para verificar se a primeira letra � igual e assim por diante
			if(vetor_1[i] == vetor_2[i])
			valor_a_retornar++;
		}
		
		if(valor_a_retornar == conta_carecteres_1)
		{
			valor_a_retornar = 1;
		}
		
		else
		{
			valor_a_retornar = 0;
		}
	}
	
	else{
		valor_a_retornar = 0;
	}
	
	return valor_a_retornar;
}

int main()//Fun��o principal
{
	//Declara��o de vari�veis
	//Observe que  cada palavra pode ter at� 100 caracteres
	char vetor_1[10], vetor_2[10];
	
	cabecalho();
	
	printf("\nIntroduza a palavra do primeiro vetor\n");
	gets(vetor_1);
	
	printf("\nIntroduza a palavra do segundo vetor\n");
	gets(vetor_2);
	
	int analise = vetores(vetor_1,vetor_2);
	//Impress�es de resultados
	printf("\n______________________________________________\n");
	if(analise ==1)
		printf("\tOs vetores sao iguais\n");
	else printf("\tOs vetores sao diferentes\n");

	system("pause");
	return 0;
}

