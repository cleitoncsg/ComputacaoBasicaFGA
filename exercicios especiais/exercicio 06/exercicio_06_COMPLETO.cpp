//Exercicio 06 - Letra A + B + C + D + E
//Para finalizar, um procedimentozinho para fazer a letra E e terminar a quest�o

# import <stdio.h>
# include <stdlib.h>

//Procedimento para saber se as a��es tiveram lucro superior a R$ 500,00
void calcula_lucro_500(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Vari�veis
	int i,conta_lucro_500 = 0;
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condi��o para saber quais a��es tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  > 500)
			conta_lucro_500++;
	}
	//Impress�o de resultado
	printf("\n_______________________________________________________________________________\n");
	printf("\nA quantidade de acoes que tiveram lucro superior a R$ 500,00 foram %d\n",conta_lucro_500);
	printf("\n_______________________________________________________________________________\n");

}

//Procedimento para saber se as a��es tiveram lucro superior a R$ 500,00
void calcula_lucro_200(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Vari�veis
	int i,conta_lucro_200 = 0;
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condi��o para saber quais a��es tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  > 200)
			conta_lucro_200++;
	}
	//Impress�o de resultado
	printf("\n_______________________________________________________________________________\n");
	printf("\nA quantidade de acoes que tiveram lucro superior a R$ 200,00 foram %d\n",conta_lucro_200);
	printf("\n_______________________________________________________________________________\n");

}

//Fun��o para calcular o percentual de lucro em rela��o ao total de a��es
float calcula_lucro_percentual(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Vari�veis
	int i,conta_lucro= 0;
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condi��o para saber quais a��es tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  > 0)
			conta_lucro++;
	}

	float percentual_lucro = ( (float)conta_lucro/(LOOPS-1) )*100;
	return percentual_lucro;

}

//ESSA FUN��O � PARA DESAFIAR VOC�S
//Qual foi a �nica coisa que foi mudada em rela��o a fun��o anterior
//e por que posso fazer isso?
//Fun��o para calcular o percentual de lucro em rela��o ao total de a��es
float calcula_prejuizo_percentual(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Vari�veis
	int i,conta_lucro= 0;
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condi��o para saber quais a��es tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  < 0)
			conta_lucro++;
	}

	float percentual_lucro = ( (float)conta_lucro/(LOOPS-1) )*100;
	return percentual_lucro;

}

//Prot�tipo rocedimento para saber se as a��es tiveram lucro ou prejuizo
//Pra que fazer isso? Para n�o ficar tanta coisa antes do main e deixar 
void calcula_lucro_ou_preju(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS);

//Prot�tipo do procedimento cabecalho
void cabecalho();

int main(){
	
	system("color F2");
	//Declara��o de vari�veis
	int i,LOOPS = 1;
	int identifica_acao[LOOPS];
	float preco_compra[LOOPS];
	float preco_venda[LOOPS];

	//Chamada do procedimento cabe�alho
	cabecalho();
	
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){
		printf("\nDigite o numero da acao, por favor:\n");
		scanf("%d",&identifica_acao[i]);

		//Se o n�mero da a��o for diferente de zero, a vari�vel LOOPS � incrementada
		//para que seja possivel haver outro loop
		//Imagine que no proximo for i = 1 e LOOPS = 2, e o mesmo acontecer�.
		//Se a vari�vel LOOPS n�o for incrementada a condi��o para entrar no la�o ser� falsa.
		if(identifica_acao[i] != 0)
			LOOPS++;
		//Se a a��o tiver o n�mero zero, quebra o la�o e imprimi os resultados
		if(identifica_acao[i] == 0)
			break;

		//Solicitando o pre�o de compra e de venda para saber se houve lucro ou prejuizo.
		printf("\nDigite o preco de compra  da acao, por favor:\n");
		scanf("%f",&preco_compra[i]);

		printf("\nDigite o preco de venda  da acao, por favor:\n");
		scanf("%f",&preco_venda[i]);

	}//fim do la�o

	//Chamada dos procedimentos para calcular e imprimir o resultados das letras A e B
	calcula_lucro_500(identifica_acao,preco_compra,preco_venda,LOOPS);
	calcula_lucro_200(identifica_acao,preco_compra,preco_venda,LOOPS);

	//Impress�o do resultado da letra C, atrav�s da fun��o
	printf("\nO percentual de lucro em relacao ao total de acoes = %.2f %\n",
	calcula_lucro_percentual(identifica_acao,preco_compra,preco_venda,LOOPS));
	printf("\n_______________________________________________________________________________\n");

	//Impress�o do resultado da letra D, atrav�s da fun��o
	printf("\nO percentual de prejuizo em relacao ao total de acoes = %.2f %\n",
	calcula_prejuizo_percentual(identifica_acao,preco_compra,preco_venda,LOOPS));
	printf("\n_______________________________________________________________________________\n");

	//Chamada do procedimento para ver se as a��es geraram lucro ou prejuizo
	calcula_lucro_ou_preju(identifica_acao,preco_compra,preco_venda,LOOPS);
	system("PaUsE");
}

//Procedimento para saber se as a��es tiveram lucro ou prejuizo
void calcula_lucro_ou_preju(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Vari�veis
	int i,conta_lucro_500 = 0;
	float lucro_ou_prejuizo;
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		
		//C�lculo do lucro ou prejuizo
		lucro_ou_prejuizo = lucro_ou_prejuizo + (preco_venda[i] - preco_compra[i]);
	}
	
	//Condi��o para saber se o investidor teve lucro ou prejuizo e imprimir o resultado
	if(lucro_ou_prejuizo > 0)
		printf("\nO investidor teve lucro de R$ %.2f\n",lucro_ou_prejuizo);
	else
		printf("\nO investidor teve prejuizo de R$ %.2f\n",lucro_ou_prejuizo);
	printf("\n_______________________________________________________________________________\n");

}

//Procedimento Cabe�alho
void cabecalho()
{
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}
