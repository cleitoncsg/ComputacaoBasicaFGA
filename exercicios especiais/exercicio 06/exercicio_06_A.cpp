//Exercicio 06 - Letra A
# import <stdio.h>
# include <stdlib.h>

//Procedimento para saber se as ações tiveram lucro superior a R$ 500,00
void calcula_lucro_500(int identifica_acao[],float preco_compra[],float preco_venda[],int LOOPS){
	//Variável
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
	
	//Observe a grande vantagem de um procedimento/Função:
	//Se algum cálculo estiver errado, vc vai no procedimento/função que efetua esse cálculo e não fica 
	//perdido na funçao main procurando um monte de coisas. Além do mais vc pode chamar uma função ou
	//um procedimento várias vezes, tornando o código mais rápido e otimizado.
}

int main(){
	//Declaração de variáveis
	int i,LOOPS = 1;
	int identifica_acao[LOOPS];
	float preco_compra[LOOPS];
	float preco_venda[LOOPS];
	
	//Laço para percorrer os possiveis numeros de ações e seus lucros ou prejuizos
	for(i = 0; i < LOOPS; i++){
		printf("\nDigite o numero da acao, por favor\n");
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
		printf("\nDigite o preco de compra  da acao, por favor\n");
		scanf("%f",&preco_compra[i]);
		
		printf("\nDigite o preco de venda  da acao, por favor\n");
		scanf("%f",&preco_venda[i]);
		
	}//fim do laço	
	
	//Chamada o procedimento para calcular e imprimir o resultado
	calcula_lucro_500(identifica_acao,preco_compra,preco_venda,LOOPS);
	
	system("PaUsE");
}
