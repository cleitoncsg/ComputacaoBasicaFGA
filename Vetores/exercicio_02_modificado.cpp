/*2) Fa�a um programa que receba a idade e o peso de um conjunto de 10 pessoas, 
armazenando os valores em dois vetores. Em seguida, calcule e mostre:

a) a idade da pessoa que tem o maior peso;
b) o peso da pessoa que tem a menor idade.*/

#include <stdio.h> //Biblioteca para usar comandos de entrada e sa�da
#include <stdlib.h> //Biblioteca para usar comando system("PAUSE")
#define QUANTIDADE_DADOS 4

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

//Fun��o para calcular a idade da pessoa com maior peso
float idade_e_maior_peso( float peso[],float idade[])
{
	//Vari�veis
	int i;
	int maior_peso = -999; //Se colocar = 0, d� na mesma...
	int marca_idade = 0;
	
	//Se na fun��o principal tinha o loop,aqui tamb�m tem que ter o loop
	//para ler os valores de cada vetor. De acordo?
	for(i=0; i < QUANTIDADE_DADOS; i++)
	{
		//Condi��o para saber o maior peso e marcar a idade desse maior peso
		if(peso[i] > maior_peso)
		{
			maior_peso = peso[i];
			marca_idade = i;
		}
	}
	
	return idade[marca_idade];
}

//Fun��o para calcular o peso da pessoas com a menor idade
float peso_e_menor_idade( float peso[],float idade[])
//Est� certo see colocarmos asim:
//float peso_e_menor_idade( float peso,float idade)
{
	//Declara��o de vari�veis
	float menor_idade = 999;
	int marca_peso = 0;
	int i;
	
	for(i=0; i < QUANTIDADE_DADOS; i++)
	{
		//Condi��o para saber a menor idade e marcar o menor peso dessa idade
		if(idade[i] <  menor_idade)
		{
			menor_idade = idade[i];
			marca_peso = i;
		}
	}
	
	return peso[marca_peso];
}
	
int main()//Fun��o principal
{

	//Procedimento cabecalho
	cabecalho();
	
	//Declara��o de vari�veis
	float idade[QUANTIDADE_DADOS];
	//� necessariamente errado colocar a idade com float?
	float peso[QUANTIDADE_DADOS];
	int i;
	int maior_p = 0, menor_id = 999;

	//La�o para percorrer a quantidade de idades e pesos
	for(i=0; i < QUANTIDADE_DADOS; i++)
	{
		printf("\nIntroduza a idade da pessoa %d\n",i+1);
		scanf("%f",&idade[i]);
		
		printf("\nIntroduza o peso da pessoa %d\n",i+1);
		scanf("%f",&peso[i]);
		
		if(peso[i] > maior_p)
			maior_p = peso[i];
		
		if(idade[i] < menor_id)
			menor_id = idade[i];
	}
	
	//Impress�o de resultados
	printf("\n****-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_****\n");
	printf("\nA idade da pessoa que tem o maior peso de %d Kg = %.0f ano(s)\n",maior_p,
	idade_e_maior_peso(peso,idade));
	printf("\nO peso da pessoa que tem a menor idade de %d ano(s) = %.0f Kg\n",menor_id,
	peso_e_menor_idade(peso,idade) );
	printf("\n****-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_****\n");
	
	system("pause");
	return 0;
}
