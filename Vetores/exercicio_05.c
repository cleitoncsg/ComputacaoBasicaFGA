/* Exercicio 05 > Vetores... Para resolver esse exercicio, considerei que
cada aluno possui sua prova especifica com gabarito especifico, ou seja,
cada aluno possui um gabarito diferente. Observe também que não usei o artificio
para contar a quantidade de caracteres,ou seja, se no gabarito estiver resposta "a"
na questão 1 e na resposta da questão 1, o aluno tiver "aa", ele irá ganhar o ponto*/

# include <stdio.h> //Bibliotecas para usar comandos de entrada e saída
# include <stdlib.h> //Biblioteca para uso do system("pause")

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

int main()//Função principal
{
	//Declaração de variáveis
	int i,k,y;
	int matricula[10];
	char resposta_gabarito[10],resposta[10];
	int acerto[10]; 
	long int marca_matricula[10]; // long int, pois podemos ter uma matricula muito grande
	
	//Chamar o procedimento cabeçalho
	cabecalho();
	
	//Coloquei o loop até 2 para testar. O exercicio pede que seja 10
	for(i=1; i <= 2; i++)
	{
		printf("\n___________________________________________________________\n");
		//Observe que tenho que incrementar essa variável dentro do loop
		acerto[i] = 0;
		
		printf("\n Aluno %d, informe sua matricula\n",i);
		scanf("%d",&matricula[i]);
		marca_matricula[i] = matricula[i];
		
		
		for(k=1; k <= 10; k++)//Loop para ler o gabarito que cada aluno ira informar
		{	
			printf("\n Informe a letra da questao %d do gabarito (a,b,c ou d)\n",k);
			fflush(stdin);//Limpar o buffer do teclado
			scanf("%s",&resposta_gabarito[k]);
		}
		
		printf("\n___________________________________________________________\n");
		
		for(y=1; y <= 10; y++)//Loop para ler as respostas que cada aluno irá informar
		{
			printf("\nInforme a resposta da questao %d (a,b,c ou d)\n",y);
			fflush(stdin);
			scanf("%s",&resposta[y]);
		}
		
		//Comparando as respostas do aluno com a do gabarito informado
		//Iniciando as 10 condições
		if(resposta_gabarito[1] == resposta[1])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[2] == resposta[2])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[3] == resposta[3])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[4] == resposta[4])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[5] == resposta[5])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[6] == resposta[6])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[7] == resposta[7])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[8] == resposta[8])
		{
			acerto[i] = acerto[i] + 1;
		}
		
		if(resposta_gabarito[9] == resposta[9])
		{
			acerto[i] = acerto[i] + 1;
		}

		if(resposta_gabarito[10] == resposta[10])
		{
			acerto[i] = acerto[i] + 1;
		}
		//Fim das condições
		
	} //Fim do primeiro laço
	
	//Como é para apresentar os resultados no final
	//observe que usei o primeiro laço e simplesmente imprimi os resultados
	for(i=1; i <= 2; i++)
	{
			printf("\t___________________________________________________________\n");
			printf("\tO aluno da matricula %ld tirou %d na prova\n",marca_matricula[i],acerto[i]);
	}
	
	printf("\n___________________________________________________________\n");
	system("pause");
	return 0;
}