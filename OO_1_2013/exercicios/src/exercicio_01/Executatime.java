
package exercicio_01;

/**
 *
 * @author Cleiton
 */
public class Executatime {
    
    public static void main(String[] args) {
        
        
        //Instanciando a classe Time para construção do objetoTime
        Time objetoTime = new Time("Goiás", 54);
        
        //Impressão dos titulos e o nome do Time
        System.out.println("Titulos: "+ objetoTime.getTitulos());
        System.out.println("Nome do time: "+objetoTime.getNome());
    }
    
}
