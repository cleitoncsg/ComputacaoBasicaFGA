/* Deem uma olhada nesse código e comparem com o solicitado no enunciado...*/

#include <stdio.h> //Biblioteca para usar comandos de entrada e saída
#include <stdlib.h> //Biblioteca para usar comando system("PAUSE")

//Procedimento Cabeçalho
void cabecalho()
{
	printf("\t.........................................................\n");
	printf("\t.Universidade de Brasilia - FGA                         .\n");
	printf("\t.Introducao a Ciencia da Computacao                     .\n");
	printf("\t.Professor: Giovanni                                    .\n"); 
	printf("\t.Aluno: Cleiton da Silva Gomes                          .\n");
	printf("\t.Matricula: 00/0000000                                  .\n");
	printf("\t.........................................................\n");
}

int main()//Função principal
{
	//Declaração de variáveis
	int i,j,k,y;
	int n_provas;
	int matricula[10];
	char resposta_gabarito[10],resposta[10];
	
	//Chamar o procedimento cabeçalho
	cabecalho();
	
	printf("\nIndroduza o numero de provas que deseja corrigir\n");
	scanf("%d",&n_provas);
	
	for(j=0; j < n_provas; j++)
	{
		
		printf("\nCorrigindo a %d prova\n",j+1);
		
		//Loop para ler matriculas dos 10 alunos diferentes
		for(i=0; i < 10; i++)
		{
			int acerto=0;
			long marca_matricula; //Variavel do tipo long para armazenar uma matricula grande
			
			printf("\n Aluno %d, informe sua matricula\n",i+1);
			scanf("%d",&matricula[i]);
			marca_matricula = matricula[i];
			
			for(k=0; k < 10; k++)//Loop para ler o gabarito que cada aluno ira informar
			{	
				printf("\n Informe a letra da questao %d do gabarito\n",k+1);
				fflush(stdin);//Limpar o buffer do teclado
				scanf("%s",&resposta_gabarito[k]);
			}
			
			for(y=0; y < 10; y++)//Loop para ler as respostas
			{
				printf("\nInforme a resposta da questao %d (a,b,c ou d)\n",y+1);
				fflush(stdin);
				scanf("%s",&resposta[y]);
			}
			
			//Comparando as respostas do aluno com a do gabarito informado
			//Iniciando as 10 condições
			//Poderia usar um laço, para otimizar o tempo aqui, certo?
			
			if(resposta_gabarito[0] == resposta[0])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[1] == resposta[1])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[2] == resposta[2])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[3] == resposta[3])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[4] == resposta[4])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[5] == resposta[5])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[6] == resposta[6])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[7] == resposta[7])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[8] == resposta[8])
			{
				acerto = acerto + 1;
			}
			
			if(resposta_gabarito[9] == resposta[9])
			{
				acerto = acerto + 1;
			}
			
			//Fim das condições
			
			//IMPRESSÃO DO RESULTADO DESSE LOOP
			printf("\n********************************************************\n");
			printf("\nO aluno da matricula %ld tirou %d na prova\n",marca_matricula,acerto+1);
			printf("\n********************************************************\n");
			
		}//Fim do segundo for
		

	}//Fim do primeiro for

	system("pause");
	return 0;
}
