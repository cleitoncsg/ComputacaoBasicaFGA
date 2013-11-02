
package exercicio_05;
import java.util.*;


/**
 *
 * @author Cleiton
 */
public class ExecutaPessoa {
     
    //Imagine isso como se fosse o scanf do C, mas só imagine ;)
    static Scanner receba = new Scanner(System.in);
    //ArrayList para guardar os possiveis objetos criados na memória
    //ArrayList< Qualquer_Tipo > nomeDoArrayList = new ArrayList< Qualquer_Tipo >();
    static ArrayList<Pessoa> cadastro = new ArrayList<Pessoa>();
    
    
     public static void main(String[] args) {
       
         int opcao;
       
         while(true){
            menu();
            opcao = Integer.parseInt(receba.nextLine());

            switch(opcao){
                case 1:
                    cadastrar();
                    break;
                case 2:
                    listar();
                    break;

                default:
                    System.out.printf("Opção inválida!\n");


            }
         }
         
     }
     
     private static void menu(){
         System.out.printf("Digite a opcao de acordo com o menu abaixo, por favor\n");
         System.out.println("_-_--_--_--_--_--_--_--_--_--_--_--_--_--_--_--_-\n");
         System.out.println("1 = Cadastrar uma Pessoa\n");
         System.out.println("2 = Consultar as pessoas cadastradas no sistema\n");
         System.out.println("_-_--_--_--_--_--_--_--_--_--_--_--_--_--_--_--_-\n");
         
     }

    private static void cadastrar() {
        String nome, sexo, endereco;
        
        System.out.printf("Digite o nome da pessoa, por favor\n");
        nome = receba.nextLine();
        
        System.out.printf("Digite o sexo da pessoa, por favor\n");
        sexo = receba.nextLine();
        
        System.out.printf("Digite o endereco da pessoa, por favor\n");
        endereco = receba.nextLine();
        
        Pessoa objetoPessoa = new Pessoa(nome, sexo, endereco);
        cadastro.add(objetoPessoa);
    }

    private static void listar() {
        Iterator i = cadastro.iterator();
        
        while(i.hasNext()){ //Se tiver próximo
            System.out.println(i.next()); //Imprime o próximo
        }
       
    }
    
}
