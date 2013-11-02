/**** Exercicio 07
O código está mais otimizado em relação a resolução X****/

# include <stdio.h> 
# include <stdlib.h>
# include <conio.h> //Caso alguém não saiba, essa bibio é para usar o getch
# define SALARIO_MINIMO 540 //definição do salário mínimo
//Variável global que será incrementada na função principal e acessada por todas as funções
int LOOPS = 1;

//Procedimento Cabeçalho
void cabecalho(){
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}

//Procedimento para imprimir o número do operário e seu salário
void numero_salario_operario(int codigo_operario[],int numero_pecas_produzidas[]){
	//Variáveis
	float salario[LOOPS]; int i;
	
	//Laço para imprimir os dados desejados
	for(i = 0; i < LOOPS; i++){
		//Condição para cálculo do salário da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30) 
			salario[i] =  SALARIO_MINIMO; 
		
		//Condição para cálculo do salário da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50)
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01; 
		
		//Condição para cálculo do salário da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50)
			salario[i] = ( SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02 ); 
	
		//Impressões de resultados de acordo com quantida de LOOPS ou operários
		printf("\nO operario com numero ou codigo %d tem o salario de R$ %.2f\n",codigo_operario[i],salario[i]);
	}//fim do laço
}//fim do procedimento

//Função para calcular o total da folha de pagamento > letra B		
float total_folha_pagamento(int numero_pecas_produzidas[]){
	//Variáveis
	float salario[LOOPS],salario_total = 0; int i;
	
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
	
	return salario_total; //retorna para o main o valor de salario_total
}

//Função para calcular o número de peças produzidas da fábrica > letra C
int numero_pecas(int numero_pecas_produzidas[]){
	//Variáveis 
	int pecas_produzidas = 0,i;
	//Loop para ajudar a percorrer todos os números de peças produzidas
	for(i = 0; i < LOOPS; i++){
		//Guardando o numero de peças produzidas
		pecas_produzidas = pecas_produzidas + numero_pecas_produzidas[i];
	}
	
	return pecas_produzidas; //retorna para o main o valor de pecas_produzidas
}

//Função para calcular média das peças produzidas pelos homens > letra D
float media_pecas_homens(int numero_pecas_produzidas[],char sexo[]){
	//Variáveis 
	int pecas_produzidas_homens = 0,conta_homens = 0,i;
	
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
	 return  media_homens; //retorna para o main o valor de media_homens
}

//Função para calcular média das peças produzidas pelas mulheres > letra E
float media_pecas_mulheres(int numero_pecas_produzidas[],char sexo[]){
	//Variáveis
	int pecas_produzidas_mulheres = 0, conta_mulheres = 0, i;

	//Loop para ajudar a percorrer todos os números de peças produzidas
	for(i = 0; i < LOOPS; i++){ 
		//Condição para contar as mulheres e calcular quantas peças foram produzidas por elas
		if(sexo[i] == 'f' || sexo[i] == 'F'){
			pecas_produzidas_mulheres = pecas_produzidas_mulheres + numero_pecas_produzidas[i];
			conta_mulheres++;
		}
	}

	//A função retornara a média das peças produzidas pelas mulheres
	float media_mulheres =  (pecas_produzidas_mulheres/conta_mulheres);
	return media_mulheres; //retorna para o main o valor de media_mulheres
}

//Procedimento para mostarr o código do operário ou operária de maior salário > letra F
void codigo_maior_salario(int numero_pecas_produzidas[],int codigo_operario[]){
	//Variáveis
	float salario[LOOPS]; float maior_salario = 0; int guarda_codigo = 0; 
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
	printf("\nO codigo do operario ou operaria de maior salario = %d\n",guarda_codigo);
}

//Função rainha, função principal ou função chefe
int main(){
	system("color 2F");
	//Declaração de variáveis
	int i,quantidade_lacos,
		codigo_operario[LOOPS],
		numero_pecas_produzidas[LOOPS];
	char sexo[LOOPS]; 
	
	//Chamando o cabeçalho
	cabecalho();
	printf("\nDigite a quantidade de operarios que a fabrica possui\n");
	scanf("%d",&quantidade_lacos);//A quantidade de operarios definirá a quantidade de laços...
	
	//Validação de dados.Uma fábrica possui pelo menos um número pequeno de funcionários,mesmo que seja só 2.
	while(quantidade_lacos < 2){
		printf("\nFabrica com 1 operario ou numero de operarios negativos nao e fabrica\n");
		printf("\nDigite novamente o numero de operarios da fabrica, por favor:\n");
		scanf("%d",&quantidade_lacos);
	}
	//Armazenando a quantidade de laços ou quantidade de operarioss na variável global LOOPS
	 LOOPS = quantidade_lacos;
	
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
	
	//Impressões de resultados através de funções/procedimentos
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	                             printf("\t\t\tReSuLtAdOs\n");
	//Chamada do procedimento para imprimir o solicitado na letra A
	numero_salario_operario(codigo_operario, numero_pecas_produzidas);
	//Impressão do total da folha de pagamento > letra B
	printf("\nO total da folha de pagamento da fabrica = R$ %.2f\n",total_folha_pagamento(numero_pecas_produzidas) );
	//Impressão do número de peças produzidas  > letra C
	printf("\nO numero de pecas produzidas = %d\n",numero_pecas(numero_pecas_produzidas) );
	//Impressão da média das peças produzidas pelos homens > letra D
	printf("\nA media de pecas produzidas pelos homens = %.2f\n",media_pecas_homens(numero_pecas_produzidas,sexo) );
	//Impressão da média das peças produzidas pelas mulheres > letra E
	printf("\nA media de pecas produzidas pelas mulheres = %.2f\n",media_pecas_mulheres(numero_pecas_produzidas,sexo) );
	//Chamada do procedimento para imprimir o código do operário de maior salário > letra F
	codigo_maior_salario(numero_pecas_produzidas,codigo_operario);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	
	printf("\nPressione qualquer tecla para encerrar o software:\n"); getch();
}
		
		
