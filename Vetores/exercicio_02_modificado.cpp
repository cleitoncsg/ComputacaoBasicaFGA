/*2) Faça um programa que receba a idade e o peso de um conjunto de 10 pessoas, 
armazenando os valores em dois vetores. Em seguida, calcule e mostre:

a) a idade da pessoa que tem o maior peso;
b) o peso da pessoa que tem a menor idade.*/

#include <stdio.h> //Biblioteca para usar comandos de entrada e saída
#include <stdlib.h> //Biblioteca para usar comando system("PAUSE")
#define QUANTIDADE_DADOS 4

//Procedimento Cabeçalho
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

//Função para calcular a idade da pessoa com maior peso
float idade_e_maior_peso( float peso[],float idade[])
{
	//Variáveis
	int i;
	int maior_peso = -999; //Se colocar = 0, dá na mesma...
	int marca_idade = 0;
	
	//Se na função principal tinha o loop,aqui também tem que ter o loop
	//para ler os valores de cada vetor. De acordo?
	for(i=0; i < QUANTIDADE_DADOS; i++)
	{
		//Condição para saber o maior peso e marcar a idade desse maior peso
		if(peso[i] > maior_peso)
		{
			maior_peso = peso[i];
			marca_idade = i;
		}
	}
	
	return idade[marca_idade];
}

//Função para calcular o peso da pessoas com a menor idade
float peso_e_menor_idade( float peso[],float idade[])
//Está certo see colocarmos asim:
//float peso_e_menor_idade( float peso,float idade)
{
	//Declaração de variáveis
	float menor_idade = 999;
	int marca_peso = 0;
	int i;
	
	for(i=0; i < QUANTIDADE_DADOS; i++)
	{
		//Condição para saber a menor idade e marcar o menor peso dessa idade
		if(idade[i] <  menor_idade)
		{
			menor_idade = idade[i];
			marca_peso = i;
		}
	}
	
	return peso[marca_peso];
}
	
int main()//Função principal
{

	//Procedimento cabecalho
	cabecalho();
	
	//Declaração de variáveis
	float idade[QUANTIDADE_DADOS];
	//É necessariamente errado colocar a idade com float?
	float peso[QUANTIDADE_DADOS];
	int i;
	int maior_p = 0, menor_id = 999;

	//Laço para percorrer a quantidade de idades e pesos
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
	
	//Impressão de resultados
	printf("\n****-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_****\n");
	printf("\nA idade da pessoa que tem o maior peso de %d Kg = %.0f ano(s)\n",maior_p,
	idade_e_maior_peso(peso,idade));
	printf("\nO peso da pessoa que tem a menor idade de %d ano(s) = %.0f Kg\n",menor_id,
	peso_e_menor_idade(peso,idade) );
	printf("\n****-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_****\n");
	
	system("pause");
	return 0;
}
