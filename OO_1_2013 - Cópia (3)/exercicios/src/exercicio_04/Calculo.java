
package exercicio_04;

/**
 *
 * @author Cleiton
 */
public class Calculo {
    protected static int numero_1, numero_2;

    //Método construtor
    public Calculo(int numero_1, int numero_2) {
        this.numero_1 = numero_1;
        this.numero_2 = numero_2;
    }
    
    //Método media
    protected static int media(int numero_1, int numero_2){
        return (numero_1 + numero_2)/2;
    }
    
    
}
