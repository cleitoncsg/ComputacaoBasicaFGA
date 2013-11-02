
package exercicio_03;

/**
 *
 * @author Cleiton
 */
public class ExecutaCalculo extends Calculo{

    public ExecutaCalculo(double numero_1, double numero_2){
        super(numero_1,numero_2);
    }
    
    public static void main(String[] args) {
        Calculo objetoCalculo = new Calculo(4.0, 6.0);
        System.out.println(media(numero_1,numero_2));
        
    }

 
}

