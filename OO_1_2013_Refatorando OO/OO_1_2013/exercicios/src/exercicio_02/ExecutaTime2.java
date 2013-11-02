
package exercicio_02;
import java.util.Scanner;

/**
 *
 * @author Cleiton
 */
public class ExecutaTime2 {
    
      public static void main(String[] args) {
        //Variáveis locais que serão enviadas para o construtor
        String nome_local;
        int titulos_local;
        
        //Scanner (leitura) dos atributos para construção do objeto
        Scanner receba = new Scanner(System.in);
        
        System.out.println("Digite o nome do time, por favor: \n");
        nome_local = receba.nextLine();
        
        System.out.println("Digite o numero de titulos do time, por favor: \n");
        titulos_local = Integer.parseInt(receba.nextLine());
        
        //Instanciando a classe Time para construção do objetoTime
        Time objetoTime = new Time(nome_local, titulos_local);
        
        //Impressão dos titulos e o nome do Time
        System.out.println("Titulos: "+ objetoTime.getTitulos());
        System.out.println("Nome do time: "+objetoTime.getNome());
    }
    
}
