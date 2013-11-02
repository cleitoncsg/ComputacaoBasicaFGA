/*1) Faça um programa que receba o valor de 5 resistências,
 armazene em um vetor e, em seguida, calcule as resistências
equivalentes para um circuito em série e um circuito em paralelo.*/

#include <stdio.h> //Biblioteca para usar comandos de entrada e saída
#include <stdlib.h> //Biblioteca para usar comando system("PAUSE")
#define RESISTORES  5
//Procedimento Cabeçalho
void HOLA()
{
	printf("\t.........................................................\n");
	printf("\t.Universidade de Brasilia - FGA                         .\n");
	printf("\t.Introducao a Ciencia da Computacao                     .\n");
	printf("\t.Professor: Giovanni                                    .\n"); 
	printf("\t.Aluno: Cleiton da Silva Gomes                          .\n");
	printf("\t.Matricula: 00/00000000                                 .\n");
	printf("\t.........................................................\n");
}

//Função para calcular a resistência em série
float serie ( float resistencia[])
{
	float soma_resistencia = 0; //Variavel que será incrementada
	int i;
	
	for(i = 1; i <= RESISTORES; i++)
	{	
		soma_resistencia = soma_resistencia + resistencia[i];
	}
	
	return soma_resistencia;
}

//Função para calcular a resistência em paralelo
float paralelo ( float resistencia[])
{
	float resistencia_paralelo;
	resistencia_paralelo = ((1/resistencia[1]) + (1/resistencia[2]) + 
	(1/resistencia[3]) + (1/resistencia[4]) + (1/resistencia[5]));
	
	return resistencia_paralelo;
}

//Função principal
int main()
{
	system("color F5"); //Mudar a cor do executavel
	
	//Declaração de variáveis
	float resistencia[5]; //Declarei 5 dentre das chaves pq?
	int i;
	
	//Invocar o procedimento de apresentação
	HOLA();
	
	//Loop para percorrer e armazenar cada resistencia na memória
	//do computador	através do vetor
	for(i = 1; i <= RESISTORES; i++)
	{
		printf("\nDigite a resistencia %d\n",i);
		scanf("%f",&resistencia[i]);
	}
	

	//Impressões dos resultados
	printf("\n_____________________________________________________________\n");
	printf("\tA resistencia em serie = %.2f ohm\n",serie(resistencia)  );
	printf("\tA resistencia em serie = %.2f ohm\n",paralelo(resistencia)  );
	printf("\n_____________________________________________________________\n");
	
	system("pause");
	return 0;
}
