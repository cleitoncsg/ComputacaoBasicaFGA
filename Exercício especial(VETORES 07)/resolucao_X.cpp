//Exercicio 07
//Pessoal, o código está um pouquinho grande.
//Mas, observem que não digitei muita coisa. XD

# include <stdio.h>
# include <stdlib.h>
# define SALARIO_MINIMO 540

//Procedimento Cabeçalho
void cabecalho(){
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}

//Procedimento para imprimir o número do operário e seu salário
void numero_salario_operario(int codigo_operario[],int numero_pecas_produzidas[],char sexo[],int LOOPS){
	//Variáveis
	float salario[LOOPS];
	int i;
	
	//Laço para imprimir os dados desejados
	for(i = 0; i < LOOPS; i++){
		//Condições para ajudar no cálculo dos operários ou operárias
		//Condição para cálculo do salário da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30) {
			salario[i] =  SALARIO_MINIMO; 
		}
		//Condição para cálculo do salário da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50){
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01; 
		}
		//Condição para cálculo do salário da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50){
			salario[i] = ( SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02 ); 
		}
	
		//Impressões de resultados
		printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
		printf("\nO operario com numero ou codigo %d tem o salario de R$ %.2f\n",codigo_operario[i],salario[i]);
	}//fim do laço
}//fim do procedimento

//Função para calcular o total da folha de pagamento > letra B		
float total_folha_pagamento(int numero_pecas_produzidas[],int LOOPS){
	//variáveis
	float salario[LOOPS],salario_total = 0;
	int i;
	
	//Reaproveitando código do procedimento anterior...
	//Laço para imprimir os dados desejados
	for(i = 0; i < LOOPS; i++){
		//Condição para cálculo do salário da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30)
			salario[i] =  SALARIO_MINIMO;
		//Condição para cálculo do salário da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50)
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01;
		//Condição para cálculo do salário da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50){
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02;
		}
		salario_total = salario_total + salario[i];
	}
	
	return salario_total;
		
}

//Função para calcular o número de peças produzidas da fábrica > letra C
int numero_pecas(int numero_pecas_produzidas[],int LOOPS){
	//Variável local
	int pecas_produzidas = 0;
	int i;
	//Loop para ajudar a percorrer todos os números de peças produzidas
	for(i = 0; i < LOOPS; i++){
		//Guardando o numero de peças produzidas
		pecas_produzidas = pecas_produzidas + numero_pecas_produzidas[i];
	}
	
	return pecas_produzidas;
}

//Funções que estará depois do main -- Questão de organização
//Protótipo da função para calcular média das peças produzidas pelos homens > letra D
float media_pecas_homens(int numero_pecas_produzidas[],int LOOPS,char sexo[]);
//Protótipo da função para calcular média das peças produzidas pelas mulheres > letra E
float media_pecas_mulheres(int numero_pecas_produzidas[],int LOOPS,char sexo[]);
//Protótipo do procedimento para saber qual funcionário tem o mair salário
void codigo_maior_salario(int numero_pecas_produzidas[],int codigo_operario[],int LOOPS);

//Função rainha, função principal ou função chefe
int main(){
	system("color F2");
	//Declaração de variáveis
	int i,LOOPS = 1;
	int codigo_operario[LOOPS];
	int numero_pecas_produzidas[LOOPS];
	char sexo[LOOPS]; 
	
	//Chamando o cabeçalho
	cabecalho();
	printf("\nDigite a quantidade de operarios que a fabrica possui\n");
	scanf("%d",&LOOPS);//A quantidade de operarios definirá a quantidade de laços...
	
	//Validação 
	//Considerando que um fábrica possui pelo menos 2 funcionários, mesmo que ela seja pequena
	while(LOOPS < 2){
		printf("\nFabrica com 1 operario ou numero de operarios negativos nao e fabrica\n");
		printf("\nDigite novamente o numero de operarios da fabrica, por favor:\n");
		scanf("%d",&LOOPS);
	}
	
	//Laço infinito,enquanto não for quebrado...
	for(i = 0; i < LOOPS; i++){
		//Solicitando e recebendo informações do usuário
		printf("\nDigite o codigo do operario %d, por favor:\n",i+1);
		scanf("%d",&codigo_operario[i]);
		
		printf("\nDigite o numero de pecas produzidas no mes, por favor:\n");
		scanf("%d",&numero_pecas_produzidas[i]);

		printf("\nDigite o sexo, por favor:\n");
		fflush(stdin);//Apaga o buffer do teclado
		scanf("%c",&sexo[i]);
	}
	
	//Chamada do procedimento para imprimir o solicitado na letra A
	numero_salario_operario(codigo_operario, numero_pecas_produzidas , sexo, LOOPS);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	
	//Guardando o  retorno da função que mostra no total da folha de pagamento
	float guarda_folha_pag = total_folha_pagamento(numero_pecas_produzidas,LOOPS);
	//Guardando o  retorno da função que mostra o número de peças produzidas
	int guarda_numero_pecas = numero_pecas(numero_pecas_produzidas,LOOPS);
	//Guardando o  retorno da função que mostra a média das peças produzidas pelos homens
	float media_pecas_h = media_pecas_homens(numero_pecas_produzidas, LOOPS,sexo);
	//Guardando o  retorno da função que mostra a média das peças produzidas pelas mulheres
	float media_pecas_m = media_pecas_mulheres(numero_pecas_produzidas, LOOPS,sexo);

	//Impressão do total da folha de pagamento > letra B
	printf("\nO total da folha de pagamento da fabrica = R$ %.2f\n",guarda_folha_pag);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Impressão do número de peças produzidas  > letra C
	printf("\nO numero de pecas produzidas = %d\n",guarda_numero_pecas);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Impressão da média das peças produzidas pelos homens > letra D
	printf("\nA media de pecas produzidas pelos homens = %.2f\n",media_pecas_h);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Impressão da média das peças produzidas pelas mulheres > letra E
	printf("\nA media de pecas produzidas pelas mulheres = %.2f\n",media_pecas_m);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Chamada do procedimento para imprimir o código do operário de maior salário
	codigo_maior_salario(numero_pecas_produzidas,codigo_operario,LOOPS);
	
	//Fim...
	system("pausE");
	
}
		
		
//Função para calcular média das peças produzidas pelos homens > letra D
float media_pecas_homens(int numero_pecas_produzidas[],int LOOPS,char sexo[]){
	//Variáveis
	int pecas_produzidas_homens = 0;
	int conta_homens = 0;
	int i;
	
	//Loop para ajudar a percorrer todos os números de peças produzidas
	for(i = 0; i < LOOPS; i++){	
		//Condição para guardar o numero de peças produzidas pelos homens
		if(sexo[i] == 'm' || sexo[i] == 'M'){
			pecas_produzidas_homens = pecas_produzidas_homens + numero_pecas_produzidas[i];
			conta_homens++;
		}
	}

	//A função retornara a média das peças produzidas pelos homens
	 float media_homens = (pecas_produzidas_homens/conta_homens);
	 return  media_homens;
}

//Função para calcular média das peças produzidas pelas mulheres > letra E
//Mais uma vez... Olhem o reaproveitamento de código, o famoso ctrl c - ctrl v
float media_pecas_mulheres(int numero_pecas_produzidas[],int LOOPS,char sexo[]){
	//Variáveis
	int pecas_produzidas_homens = 0;
	int conta_homens = 0;
	int i;

	//Loop para ajudar a percorrer todos os números de peças produzidas
	for(i = 0; i < LOOPS; i++){
		//OBSERVE QUE A ÚNICA COISA QUE MUDEI DE ACORDO COM A FUNÇÃO ANTERIOR
		//FOI O NOME DA FUNÇÃO E ESSA CONDIÇÃO
		//ESPERO QUE ASSIM VOCÊS SAQUEM ALGUMAS COISAS. :D
		if(sexo[i] == 'f' || sexo[i] == 'F'){
			pecas_produzidas_homens = pecas_produzidas_homens + numero_pecas_produzidas[i];
			conta_homens++;
		}
	}

	//A função retornara a média das peças produzidas pelas mulheres
	float media_homens =  (pecas_produzidas_homens/conta_homens);
	return media_homens;
}

//Procedimento para mostarr o código do operário ou operária de maior salário > letra F
void codigo_maior_salario(int numero_pecas_produzidas[],int codigo_operario[],int LOOPS){
	//Variáveis
	float salario[LOOPS];
	float maior_salario = 0;
	int guarda_codigo = 0;
	int i;
	//Loop para ajudar a percorrer todos os números de peças produzidas
	for(i = 0; i < LOOPS; i++){
		//Condição para cálculo do salário da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30)
			salario[i] =  SALARIO_MINIMO;
		//Condição para cálculo do salário da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50)
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01;
		//Condição para cálculo do salário da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50){
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02; }
		
		//Condição para guardar o código do operário que tiver o maior salário
		if(salario[i] > maior_salario){
			maior_salario = salario[i];
			guarda_codigo = codigo_operario[i];
		}

	}
	//Impressão do código do maior salário do operário ou operária
	printf("\nO código do operario ou operaria de maior salario = %d\n",guarda_codigo);
}
