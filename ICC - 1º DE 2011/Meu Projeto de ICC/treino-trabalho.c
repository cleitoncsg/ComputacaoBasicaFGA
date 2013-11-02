# include <stdio.h>
# include <stdlib.h>
# define numeros_livros 2
# define tamanho_string 50

//Procedimento Cabeçalho
void cabecalho()
{
	printf("\t.........................................................\n");
	printf("\t.Universidade de Brasilia - FGA                         .\n");
	printf("\t.PROJETO DE ICC >> BIBLIOTECA                           .\n");
	printf("\t.Professor: Giovanni                                    .\n"); 
	printf("\t.Aluno: Cleiton da Silva Gomes                          .\n");
	printf("\t.Matricula: 10/0097022                                  .\n");
	printf("\t.........................................................\n");
}

//Procedimento para mostrar a tela de opções
void apresenta_menu()
{
	printf("\n\t******************Tela de Op%c%ces************************\n", 135, 228);
	printf("\n\t.........................................................\n");
	printf("\n\t ..              01 = Cadastrar um novo livro:       ..\n");
	printf("\n\t   ..             02 = Consultar por titulo:       ..\n"); 
	printf("\n\t     ..          03 = Listar todos os livros:    ..\n");
	printf("\n\t       ..         04 = Sair do programa:      ..\n");
	printf("\n\t         ....................................\n");
}
//Procedimento para consultar por titulo
void consulta_titulo(char titulos[numeros_livros][tamanho_string]
					,char autores[numeros_livros][tamanho_string],
					char editoras[numeros_livros][tamanho_string]
					,char edicao[numeros_livros][tamanho_string],
					char ano_public[numeros_livros][tamanho_string])
					//Quebrar de linhas no argumento para melhor 
					//visualização do código
{

	//Declaração de variáveis
	int i;
	int posicao = 0;
	
	
	
	for( i=0 ; i < numeros_livros ; i++)
	{
		printf("\nDigite o %d titulo que deseja consultar\n",i+1);
		fflush(stdin);
		gets(titulos[i]);
		
		posicao = i;
		
		printf("\n.....................................\n");
		printf("\nDemais informacoes desse livro\n");
		printf("\nAutor\n");
		puts(autores[posicao]);
		printf("\nEditora\n");
		puts(editoras[posicao]);
		printf("\nEdicao\n");
		puts(edicao[posicao]);
		printf("\nAno de publicacao\n");
		puts(ano_public[posicao]);
		printf("\n.......................................\n");
		
		posicao = 0; //Zerar o posicão para pesquisar os proximos livros
	}
	
}

//Procedimento para listar todos os livros
void listagem (char titulos[numeros_livros][tamanho_string]
				,char autores[numeros_livros][tamanho_string],
				char editoras[numeros_livros][tamanho_string]
				,char edicao[numeros_livros][tamanho_string],
				char ano_public[numeros_livros][tamanho_string])

{
	//Declaração de variável
	int i;
	int posicao = 0;
	
	for( i=0 ; i < numeros_livros ; i++)
	{
		posicao = i;
		
		printf("\n Titulo do livro %d\n",i+1);
		puts(titulos[posicao]);
		printf("\nAutor do livro %d\n",i+1);
		puts(autores[posicao]);
		printf("\nEditora do livro %d\n",i+1);
		puts(editoras[posicao]);
		printf("\nEdicao do livro %d\n",i+1);
		puts(edicao[posicao]);
		printf("\nAno de publicacao do livro %d\n",i+1);
		puts(ano_public[posicao]);
	}
}

int main() //Função principal
{
	//Declaração de variáveis
	char titulos[numeros_livros][tamanho_string];
	char autores[numeros_livros][tamanho_string];
	char editoras[numeros_livros][tamanho_string];
	char edicao[numeros_livros][tamanho_string];
	char ano_public[numeros_livros][tamanho_string];
	int i;
	float opcao;
	
	system("color 1A"); //Mudar a cor da tela do executável
	cabecalho(); //Invocar a função cabecalho
	apresenta_menu(); //Invoca a função que apresentara a tela de opções
	
	scanf("%f",&opcao);//Recebendo a opção do menu
	
	
	if(opcao==1)
	{
	
		for( i=0 ; i < numeros_livros ; i++)
		{
			printf("\nIntroduza o titulo do livro %d \n",i+1);
			fflush(stdin);
			gets(titulos[i]);
			
			printf("\nIntroduza o autor do livro %d \n",i+1);
			fflush(stdin);
			gets(autores[i]);
			
			printf("\nIntroduza o ano de publicacao do livro %d \n",i+1);
			fflush(stdin);
			gets(ano_public[i]);
			
			printf("\nIntroduza a edicao do livro %d \n",i+1);
			fflush(stdin);
			gets(edicao[i]);
			
			printf("\nIntroduza a editora do livro %d \n",i+1);
			fflush(stdin);
			gets(editoras[i]);
		
		}
		
		apresenta_menu(); //Invoca a tela de opções novamente
		scanf("%f",&opcao);
	}
	else{}
	
	
	if(opcao==2)
	{
		//Invocar o procedimento para consultar por titulo
		consulta_titulo(titulos,autores,editoras,edicao,ano_public);
		apresenta_menu(); //Invoca a tela de opções novamente
		scanf("%f",&opcao);
	}
	else{}
	
	
	if(opcao==3)
	{
		//Procedimento para listar todos os livros cadastrados e 
		// suas demais informações
		listagem(titulos,autores,editoras,edicao,ano_public);
		
		apresenta_menu(); //Invoca a tela de opções novamente
		scanf("%f",&opcao);
	}
	else{}
		
	
	if(opcao == 4)
	{	
		system("cls");//Limpar a tela do executavel
		
		system("color F1"); 

		printf("\n  ...    ........   ......   .   ........   ......   .......     .......  \n");
		printf("\n.     .  .      .   .     .  .   .          .    .   .      .    .     .  \n");
		printf("\n.     .  .    .     .    .   .   .          .    .   .       .   .     .  \n");
		printf("\n  ...    . .        .  .     .   .  .....   ......   .        .  .......  \n");
		printf("\n         .    .     . .      .   .  .   .   .    .   .        .           \n");
		printf("\n         .      .   .   .    .   .      .   .    .   .       .            \n");
		printf("\n         .........  .     .  .   ........   .    .   ........             \n\n\n\n");

printf("\t\t\tVOLTE SEMPRE!!!\n\n\n\n\n\n");

	}else{}
	
system("pause");
return 0;

}