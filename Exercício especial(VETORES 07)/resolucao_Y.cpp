/**** Exercicio 07
O c�digo est� mais otimizado em rela��o a resolu��o X****/

# include <stdio.h> 
# include <stdlib.h>
# include <conio.h> //Caso algu�m n�o saiba, essa bibio � para usar o getch
# define SALARIO_MINIMO 540 //defini��o do sal�rio m�nimo
//Vari�vel global que ser� incrementada na fun��o principal e acessada por todas as fun��es
int LOOPS = 1;

//Procedimento Cabe�alho
void cabecalho(){
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}

//Procedimento para imprimir o n�mero do oper�rio e seu sal�rio
void numero_salario_operario(int codigo_operario[],int numero_pecas_produzidas[]){
	//Vari�veis
	float salario[LOOPS]; int i;
	
	//La�o para imprimir os dados desejados
	for(i = 0; i < LOOPS; i++){
		//Condi��o para c�lculo do sal�rio da classe 1
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] <= 30) 
			salario[i] =  SALARIO_MINIMO; 
		
		//Condi��o para c�lculo do sal�rio da classe 2
		if(numero_pecas_produzidas[i] > 30 && numero_pecas_produzidas[i] <= 50)
			salario[i] = SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.01; 
		
		//Condi��o para c�lculo do sal�rio da classe 3
		if(numero_pecas_produzidas[i] > 0 && numero_pecas_produzidas[i] > 50)
			salario[i] = ( SALARIO_MINIMO + (numero_pecas_produzidas[i] - 30)*SALARIO_MINIMO*0.02 ); 
	
		//Impress�es de resultados de acordo com quantida de LOOPS ou oper�rios
		printf("\nO operario com numero ou codigo %d tem o salario de R$ %.2f\n",codigo_operario[i],salario[i]);
	}//fim do la�o
}//fim do procedimento

//Fun��o para calcular o total da folha de pagamento > letra B		
float total_folha_pagamento(int numero_pecas_produzidas[]){
	//Vari�veis
	float salario[LOOPS],salario_total = 0; int i;
	
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
	
	return salario_total; //retorna para o main o valor de salario_total
}

//Fun��o para calcular o n�mero de pe�as produzidas da f�brica > letra C
int numero_pecas(int numero_pecas_produzidas[]){
	//Vari�veis 
	int pecas_produzidas = 0,i;
	//Loop para ajudar a percorrer todos os n�meros de pe�as produzidas
	for(i = 0; i < LOOPS; i++){
		//Guardando o numero de pe�as produzidas
		pecas_produzidas = pecas_produzidas + numero_pecas_produzidas[i];
	}
	
	return pecas_produzidas; //retorna para o main o valor de pecas_produzidas
}

//Fun��o para calcular m�dia das pe�as produzidas pelos homens > letra D
float media_pecas_homens(int numero_pecas_produzidas[],char sexo[]){
	//Vari�veis 
	int pecas_produzidas_homens = 0,conta_homens = 0,i;
	
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
	 return  media_homens; //retorna para o main o valor de media_homens
}

//Fun��o para calcular m�dia das pe�as produzidas pelas mulheres > letra E
float media_pecas_mulheres(int numero_pecas_produzidas[],char sexo[]){
	//Vari�veis
	int pecas_produzidas_mulheres = 0, conta_mulheres = 0, i;

	//Loop para ajudar a percorrer todos os n�meros de pe�as produzidas
	for(i = 0; i < LOOPS; i++){ 
		//Condi��o para contar as mulheres e calcular quantas pe�as foram produzidas por elas
		if(sexo[i] == 'f' || sexo[i] == 'F'){
			pecas_produzidas_mulheres = pecas_produzidas_mulheres + numero_pecas_produzidas[i];
			conta_mulheres++;
		}
	}

	//A fun��o retornara a m�dia das pe�as produzidas pelas mulheres
	float media_mulheres =  (pecas_produzidas_mulheres/conta_mulheres);
	return media_mulheres; //retorna para o main o valor de media_mulheres
}

//Procedimento para mostarr o c�digo do oper�rio ou oper�ria de maior sal�rio > letra F
void codigo_maior_salario(int numero_pecas_produzidas[],int codigo_operario[]){
	//Vari�veis
	float salario[LOOPS]; float maior_salario = 0; int guarda_codigo = 0; 
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
	printf("\nO codigo do operario ou operaria de maior salario = %d\n",guarda_codigo);
}

//Fun��o rainha, fun��o principal ou fun��o chefe
int main(){
	system("color 2F");
	//Declara��o de vari�veis
	int i,quantidade_lacos,
		codigo_operario[LOOPS],
		numero_pecas_produzidas[LOOPS];
	char sexo[LOOPS]; 
	
	//Chamando o cabe�alho
	cabecalho();
	printf("\nDigite a quantidade de operarios que a fabrica possui\n");
	scanf("%d",&quantidade_lacos);//A quantidade de operarios definir� a quantidade de la�os...
	
	//Valida��o de dados.Uma f�brica possui pelo menos um n�mero pequeno de funcion�rios,mesmo que seja s� 2.
	while(quantidade_lacos < 2){
		printf("\nFabrica com 1 operario ou numero de operarios negativos nao e fabrica\n");
		printf("\nDigite novamente o numero de operarios da fabrica, por favor:\n");
		scanf("%d",&quantidade_lacos);
	}
	//Armazenando a quantidade de la�os ou quantidade de operarioss na vari�vel global LOOPS
	 LOOPS = quantidade_lacos;
	
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
	
	//Impress�es de resultados atrav�s de fun��es/procedimentos
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	                             printf("\t\t\tReSuLtAdOs\n");
	//Chamada do procedimento para imprimir o solicitado na letra A
	numero_salario_operario(codigo_operario, numero_pecas_produzidas);
	//Impress�o do total da folha de pagamento > letra B
	printf("\nO total da folha de pagamento da fabrica = R$ %.2f\n",total_folha_pagamento(numero_pecas_produzidas) );
	//Impress�o do n�mero de pe�as produzidas  > letra C
	printf("\nO numero de pecas produzidas = %d\n",numero_pecas(numero_pecas_produzidas) );
	//Impress�o da m�dia das pe�as produzidas pelos homens > letra D
	printf("\nA media de pecas produzidas pelos homens = %.2f\n",media_pecas_homens(numero_pecas_produzidas,sexo) );
	//Impress�o da m�dia das pe�as produzidas pelas mulheres > letra E
	printf("\nA media de pecas produzidas pelas mulheres = %.2f\n",media_pecas_mulheres(numero_pecas_produzidas,sexo) );
	//Chamada do procedimento para imprimir o c�digo do oper�rio de maior sal�rio > letra F
	codigo_maior_salario(numero_pecas_produzidas,codigo_operario);
	printf("-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_-_--_--_\n");
	
	printf("\nPressione qualquer tecla para encerrar o software:\n"); getch();
}
		
		
