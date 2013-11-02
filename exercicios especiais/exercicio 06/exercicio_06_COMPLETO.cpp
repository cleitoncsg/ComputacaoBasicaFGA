//Exercicio 06 - Letra A + B + C + D + E
//Para finalizar, um procedimentozinho para fazer a letra E e terminar a questão

# import <stdio.h>
# include <stdlib.h>

//Procedimento para saber se as ações tiveram lucro superior a R$ 500,00
void calcula_lucro_500(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Variáveis
	int i,conta_lucro_500 = 0;
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condição para saber quais ações tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  > 500)
			conta_lucro_500++;
	}
	//Impressão de resultado
	printf("\n_______________________________________________________________________________\n");
	printf("\nA quantidade de acoes que tiveram lucro superior a R$ 500,00 foram %d\n",conta_lucro_500);
	printf("\n_______________________________________________________________________________\n");

}

//Procedimento para saber se as ações tiveram lucro superior a R$ 500,00
void calcula_lucro_200(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Variáveis
	int i,conta_lucro_200 = 0;
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condição para saber quais ações tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  > 200)
			conta_lucro_200++;
	}
	//Impressão de resultado
	printf("\n_______________________________________________________________________________\n");
	printf("\nA quantidade de acoes que tiveram lucro superior a R$ 200,00 foram %d\n",conta_lucro_200);
	printf("\n_______________________________________________________________________________\n");

}

//Função para calcular o percentual de lucro em relação ao total de ações
float calcula_lucro_percentual(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Variáveis
	int i,conta_lucro= 0;
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condição para saber quais ações tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  > 0)
			conta_lucro++;
	}

	float percentual_lucro = ( (float)conta_lucro/(LOOPS-1) )*100;
	return percentual_lucro;

}

//ESSA FUNÇÃO É PARA DESAFIAR VOCÊS
//Qual foi a única coisa que foi mudada em relação a função anterior
//e por que posso fazer isso?
//Função para calcular o percentual de lucro em relação ao total de ações
float calcula_prejuizo_percentual(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Variáveis
	int i,conta_lucro= 0;
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		//Condição para saber quais ações tiveram lucro superior a R$ 500,00
		if( preco_venda[i] - preco_compra[i]  < 0)
			conta_lucro++;
	}

	float percentual_lucro = ( (float)conta_lucro/(LOOPS-1) )*100;
	return percentual_lucro;

}

//Protótipo rocedimento para saber se as ações tiveram lucro ou prejuizo
//Pra que fazer isso? Para não ficar tanta coisa antes do main e deixar 
void calcula_lucro_ou_preju(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS);

//Protótipo do procedimento cabecalho
void cabecalho();

int main(){
	
	system("color F2");
	//Declaração de variáveis
	int i,LOOPS = 1;
	int identifica_acao[LOOPS];
	float preco_compra[LOOPS];
	float preco_venda[LOOPS];

	//Chamada do procedimento cabeçalho
	cabecalho();
	
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){
		printf("\nDigite o numero da acao, por favor:\n");
		scanf("%d",&identifica_acao[i]);

		//Se o número da ação for diferente de zero, a variável LOOPS é incrementada
		//para que seja possivel haver outro loop
		//Imagine que no proximo for i = 1 e LOOPS = 2, e o mesmo acontecerá.
		//Se a variável LOOPS não for incrementada a condição para entrar no laço será falsa.
		if(identifica_acao[i] != 0)
			LOOPS++;
		//Se a ação tiver o número zero, quebra o laço e imprimi os resultados
		if(identifica_acao[i] == 0)
			break;

		//Solicitando o preço de compra e de venda para saber se houve lucro ou prejuizo.
		printf("\nDigite o preco de compra  da acao, por favor:\n");
		scanf("%f",&preco_compra[i]);

		printf("\nDigite o preco de venda  da acao, por favor:\n");
		scanf("%f",&preco_venda[i]);

	}//fim do laço

	//Chamada dos procedimentos para calcular e imprimir o resultados das letras A e B
	calcula_lucro_500(identifica_acao,preco_compra,preco_venda,LOOPS);
	calcula_lucro_200(identifica_acao,preco_compra,preco_venda,LOOPS);

	//Impressão do resultado da letra C, através da função
	printf("\nO percentual de lucro em relacao ao total de acoes = %.2f %\n",
	calcula_lucro_percentual(identifica_acao,preco_compra,preco_venda,LOOPS));
	printf("\n_______________________________________________________________________________\n");

	//Impressão do resultado da letra D, através da função
	printf("\nO percentual de prejuizo em relacao ao total de acoes = %.2f %\n",
	calcula_prejuizo_percentual(identifica_acao,preco_compra,preco_venda,LOOPS));
	printf("\n_______________________________________________________________________________\n");

	//Chamada do procedimento para ver se as ações geraram lucro ou prejuizo
	calcula_lucro_ou_preju(identifica_acao,preco_compra,preco_venda,LOOPS);
	system("PaUsE");
}

//Procedimento para saber se as ações tiveram lucro ou prejuizo
void calcula_lucro_ou_preju(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Variáveis
	int i,conta_lucro_500 = 0;
	float lucro_ou_prejuizo;
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){

		if(identifica_acao[i] == 0)
			break;
		
		//Cálculo do lucro ou prejuizo
		lucro_ou_prejuizo = lucro_ou_prejuizo + (preco_venda[i] - preco_compra[i]);
	}
	
	//Condição para saber se o investidor teve lucro ou prejuizo e imprimir o resultado
	if(lucro_ou_prejuizo > 0)
		printf("\nO investidor teve lucro de R$ %.2f\n",lucro_ou_prejuizo);
	else
		printf("\nO investidor teve prejuizo de R$ %.2f\n",lucro_ou_prejuizo);
	printf("\n_______________________________________________________________________________\n");

}

//Procedimento Cabeçalho
void cabecalho()
{
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}
