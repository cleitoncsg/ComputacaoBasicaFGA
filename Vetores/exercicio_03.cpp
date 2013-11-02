/*3) Fa�a um programa que preenchar dois vetores, X e Y, 
com dez n�meros inteiros cada. Calcule e mostre os seguintes
vetores resultantes: 
CONSIDERE AS PERGUNTAS ASSIM PRIMEIRAMENTE:
a) a uni�o de X e Y ;
b) a diferen�a de X e Y ;
c) a interse��o de X e Y 
*/

# include <stdio.h> //Bibliotecas para usar comandos de entrada e sa�da
# include <stdlib.h> //Biblioteca para uso do system("pause")


//Procedimento Cabe�alho
void apresentando()
{
	printf("\t\tUniversidade de Brasilia\n");
	printf("\t\tAluno: Cleiton da Silva Gomes\n");
	printf("\t\tProfessor: Giovanni | Turma : AA\n");
}

//Fun��o principal
int main(){

	int x[10], y[10], i, j, a[10];
	
	for(i=0; i<10; i++)
		a[i]=0;
	
	printf("\n\n---Relacao entre 2 vetores---\n\n");
	
	for(i=0; i<10; i++){
		printf("\nInsira o valor da posicao %d do vetor x: ", i+1);
		scanf("%d", &x[i]);
	}

	for(i=0; i<10; i++){
		printf("\nInsira o valor da posicao %d do vetor y: ", i+1);
		scanf("%d", &y[i]);
	}

	printf("\n\n\n Uniao dos 2 vetores\n\n\n\n");
	
	for(i=0; i<10; i++){
	
		printf("\t%d", x[i]);
		for(j=0; j<10; j++){
		if(y[i]!= x[j])
			a[i]++;
		}	
		if(a[i] == 10)
			printf("\t%d", y[i]);
	}
	
	for(i=0; i<10; i++)
		a[i]=0;
	
	printf("\n\n\n Diferenca entre o vetor x e y\n\n\n");
	
	for(i=0; i<10; i++){
	
		for(j=0; j<10; j++){
		if(x[i]!= y[j])
			a[i]++;
		}	
		if(a[i] == 10)
			printf("\t%d", x[i]);
	}
	
	for(i=0; i<10; i++)
		a[i]=0;
	
	printf("\n\n\nInterseccao entre os vetores x e y\n\n\n");
	
	
	for(i=0; i<10; i++){
	
		for(j=0; j<10; j++){
		if(x[i]== y[j])
			a[i]++;
		}	
		if(a[i] >= 1)
			printf("\t%d", x[i]);
	}
	
	printf("\n_______________________________________________________\n");
	
	system("pause");
	return 0;
}
	
