//Exercicio 06 - Letra A
# import <stdio.h>
# include <stdlib.h>

//Procedimento para saber se as a��es tiveram lucro superior a R$ 500,00
void calcula_lucro_500(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Vari�vel
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
	
	//Observe a grande vantagem de um procedimento/Fun��o:
	//Se algum c�lculo estiver errado, vc vai no procedimento/fun��o que efetua esse c�lculo e n�o fica 
	//perdido na fun�ao main procurando um monte de coisas. Al�m do mais vc pode chamar uma fun��o ou
	//um procedimento v�rias vezes, tornando o c�digo mais r�pido e otimizado.
}

int main(){
	//Declara��o de vari�veis
	int i,LOOPS = 1;
	int identifica_acao[LOOPS];
	float preco_compra[LOOPS];
	float preco_venda[LOOPS];
	
	//La�o para percorrer os possiveis numeros de a��es e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){
		printf("\nDigite o numero da acao, por favor\n");
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
		printf("\nDigite o preco de compra  da acao, por favor\n");
		scanf("%f",&preco_compra[i]);
		
		printf("\nDigite o preco de venda  da acao, por favor\n");
		scanf("%f",&preco_venda[i]);
		
	}//fim do la�o	
	
	//Chamada o procedimento para calcular e imprimir o resultado
	calcula_lucro_500(identifica_acao,preco_compra,preco_venda,LOOPS);
	
	system("PaUsE");
}
