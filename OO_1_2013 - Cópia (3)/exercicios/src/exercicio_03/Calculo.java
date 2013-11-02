
package exercicio_03;

/**
 *
 * @author Cleiton
 */
public class Calculo {
    protected static double numero_1, numero_2;

    //Método construtor
    public Calculo(double numero_1, double numero_2) {
        this.numero_1 = numero_1;
        this.numero_2 = numero_2;
    }
    
    //Método media
    protected static double media(double numero_1, double numero_2){
        return (numero_1 + numero_2)/2;
    }
    
    
}
