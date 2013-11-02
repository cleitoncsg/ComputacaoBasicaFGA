//Exercicio 07
//Pessoal, o c�digo est� um pouquinho grande.
//Mas, observem que n�o digitei muita coisa. XD

# include <stdio.h>
# include <stdlib.h>
# define SALARIO_MINIMO 540

//Procedimento Cabe�alho
void cabecalho(){
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}

//Procedimento para imprimir o n�mero do oper�rio e seu sal�rio
void numero_salario_operario(int codigo_operario[],int numero_pecas_produzidas[],char sexo[],int LOOPS){
	//Vari�veis
	float salario[LOOPS];
	int i;
	
	//La�o para imprimir os dados desejados
	for(i = 0; i < LOOPS; i++){
		//Condi��es para ajudar no c�lculo dos oper�rios ou oper�rias
		//Condi��o para c�lculo do sal�rio da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30) {
			salario[i] =  SALARIO_MINIMO; 
		}
		//Condi��o para c�lculo do sal�rio da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50){
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01; 
		}
		//Condi��o para c�lculo do sal�rio da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50){
			salario[i] = ( SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02 ); 
		}
	
		//Impress�es de resultados
		printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
		printf("\nO operario com numero ou codigo %d tem o salario de R$ %.2f\n",codigo_operario[i],salario[i]);
	}//fim do la�o
}//fim do procedimento

//Fun��o para calcular o total da folha de pagamento > letra B		
float total_folha_pagamento(int numero_pecas_produzidas[],int LOOPS){
	//vari�veis
	float salario[LOOPS],salario_total = 0;
	int i;
	
	//Reaproveitando c�digo do procedimento anterior...
	//La�o para imprimir os dados desejados
	for(i = 0; i < LOOPS; i++){
		//Condi��o para c�lculo do sal�rio da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30)
			salario[i] =  SALARIO_MINIMO;
		//Condi��o para c�lculo do sal�rio da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50)
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01;
		//Condi��o para c�lculo do sal�rio da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50){
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02;
		}
		salario_total = salario_total + salario[i];
	}
	
	return salario_total;
		
}

//Fun��o para calcular o n�mero de pe�as produzidas da f�brica > letra C
int numero_pecas(int numero_pecas_produzidas[],int LOOPS){
	//Vari�vel local
	int pecas_produzidas = 0;
	int i;
	//Loop para ajudar a percorrer todos os n�meros de pe�as produzidas
	for(i = 0; i < LOOPS; i++){
		//Guardando o numero de pe�as produzidas
		pecas_produzidas = pecas_produzidas + numero_pecas_produzidas[i];
	}
	
	return pecas_produzidas;
}

//Fun��es que estar� depois do main -- Quest�o de organiza��o
//Prot�tipo da fun��o para calcular m�dia das pe�as produzidas pelos homens > letra D
float media_pecas_homens(int numero_pecas_produzidas[],int LOOPS,char sexo[]);
//Prot�tipo da fun��o para calcular m�dia das pe�as produzidas pelas mulheres > letra E
float media_pecas_mulheres(int numero_pecas_produzidas[],int LOOPS,char sexo[]);
//Prot�tipo do procedimento para saber qual funcion�rio tem o mair sal�rio
void codigo_maior_salario(int numero_pecas_produzidas[],int codigo_operario[],int LOOPS);

//Fun��o rainha, fun��o principal ou fun��o chefe
int main(){
	system("color F2");
	//Declara��o de vari�veis
	int i,LOOPS = 1;
	int codigo_operario[LOOPS];
	int numero_pecas_produzidas[LOOPS];
	char sexo[LOOPS]; 
	
	//Chamando o cabe�alho
	cabecalho();
	printf("\nDigite a quantidade de operarios que a fabrica possui\n");
	scanf("%d",&LOOPS);//A quantidade de operarios definir� a quantidade de la�os...
	
	//Valida��o 
	//Considerando que um f�brica possui pelo menos 2 funcion�rios, mesmo que ela seja pequena
	while(LOOPS < 2){
		printf("\nFabrica com 1 operario ou numero de operarios negativos nao e fabrica\n");
		printf("\nDigite novamente o numero de operarios da fabrica, por favor:\n");
		scanf("%d",&LOOPS);
	}
	
	//La�o infinito,enquanto n�o for quebrado...
	for(i = 0; i < LOOPS; i++){
		//Solicitando e recebendo informa��es do usu�rio
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
	
	//Guardando o  retorno da fun��o que mostra no total da folha de pagamento
	float guarda_folha_pag = total_folha_pagamento(numero_pecas_produzidas,LOOPS);
	//Guardando o  retorno da fun��o que mostra o n�mero de pe�as produzidas
	int guarda_numero_pecas = numero_pecas(numero_pecas_produzidas,LOOPS);
	//Guardando o  retorno da fun��o que mostra a m�dia das pe�as produzidas pelos homens
	float media_pecas_h = media_pecas_homens(numero_pecas_produzidas, LOOPS,sexo);
	//Guardando o  retorno da fun��o que mostra a m�dia das pe�as produzidas pelas mulheres
	float media_pecas_m = media_pecas_mulheres(numero_pecas_produzidas, LOOPS,sexo);

	//Impress�o do total da folha de pagamento > letra B
	printf("\nO total da folha de pagamento da fabrica = R$ %.2f\n",guarda_folha_pag);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Impress�o do n�mero de pe�as produzidas  > letra C
	printf("\nO numero de pecas produzidas = %d\n",guarda_numero_pecas);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Impress�o da m�dia das pe�as produzidas pelos homens > letra D
	printf("\nA media de pecas produzidas pelos homens = %.2f\n",media_pecas_h);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Impress�o da m�dia das pe�as produzidas pelas mulheres > letra E
	printf("\nA media de pecas produzidas pelas mulheres = %.2f\n",media_pecas_m);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	//Chamada do procedimento para imprimir o c�digo do oper�rio de maior sal�rio
	codigo_maior_salario(numero_pecas_produzidas,codigo_operario,LOOPS);
	
	//Fim...
	system("pausE");
	
}
		
		
//Fun��o para calcular m�dia das pe�as produzidas pelos homens > letra D
float media_pecas_homens(int numero_pecas_produzidas[],int LOOPS,char sexo[]){
	//Vari�veis
	int pecas_produzidas_homens = 0;
	int conta_homens = 0;
	int i;
	
	//Loop para ajudar a percorrer todos os n�meros de pe�as produzidas
	for(i = 0; i < LOOPS; i++){	
		//Condi��o para guardar o numero de pe�as produzidas pelos homens
		if(sexo[i] == 'm' || sexo[i] == 'M'){
			pecas_produzidas_homens = pecas_produzidas_homens + numero_pecas_produzidas[i];
			conta_homens++;
		}
	}

	//A fun��o retornara a m�dia das pe�as produzidas pelos homens
	 float media_homens = (pecas_produzidas_homens/conta_homens);
	 return  media_homens;
}

//Fun��o para calcular m�dia das pe�as produzidas pelas mulheres > letra E
//Mais uma vez... Olhem o reaproveitamento de c�digo, o famoso ctrl c - ctrl v
float media_pecas_mulheres(int numero_pecas_produzidas[],int LOOPS,char sexo[]){
	//Vari�veis
	int pecas_produzidas_homens = 0;
	int conta_homens = 0;
	int i;

	//Loop para ajudar a percorrer todos os n�meros de pe�as produzidas
	for(i = 0; i < LOOPS; i++){
		//OBSERVE QUE A �NICA COISA QUE MUDEI DE ACORDO COM A FUN��O ANTERIOR
		//FOI O NOME DA FUN��O E ESSA CONDI��O
		//ESPERO QUE ASSIM VOC�S SAQUEM ALGUMAS COISAS. :D
		if(sexo[i] == 'f' || sexo[i] == 'F'){
			pecas_produzidas_homens = pecas_produzidas_homens + numero_pecas_produzidas[i];
			conta_homens++;
		}
	}

	//A fun��o retornara a m�dia das pe�as produzidas pelas mulheres
	float media_homens =  (pecas_produzidas_homens/conta_homens);
	return media_homens;
}

//Procedimento para mostarr o c�digo do oper�rio ou oper�ria de maior sal�rio > letra F
void codigo_maior_salario(int numero_pecas_produzidas[],int codigo_operario[],int LOOPS){
	//Vari�veis
	float salario[LOOPS];
	float maior_salario = 0;
	int guarda_codigo = 0;
	int i;
	//Loop para ajudar a percorrer todos os n�meros de pe�as produzidas
	for(i = 0; i < LOOPS; i++){
		//Condi��o para c�lculo do sal�rio da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30)
			salario[i] =  SALARIO_MINIMO;
		//Condi��o para c�lculo do sal�rio da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50)
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01;
		//Condi��o para c�lculo do sal�rio da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50){
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02; }
		
		//Condi��o para guardar o c�digo do oper�rio que tiver o maior sal�rio
		if(salario[i] > maior_salario){
			maior_salario = salario[i];
			guarda_codigo = codigo_operario[i];
		}

	}
	//Impress�o do c�digo do maior sal�rio do oper�rio ou oper�ria
	printf("\nO c�digo do operario ou operaria de maior salario = %d\n",guarda_codigo);
}
