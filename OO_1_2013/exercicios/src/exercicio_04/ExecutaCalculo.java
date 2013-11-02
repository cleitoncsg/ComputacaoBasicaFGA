
package exercicio_04;

import static exercicio_04.Calculo.media;

/**
 *
 * @author Cleiton
 */
public class ExecutaCalculo extends Calculo{

    public ExecutaCalculo(int numero_1, int numero_2){
        super(numero_1,numero_2);
    }
    
    public static void main(String[] args) {
  
        
        Calculo objetoCalculo = new Calculo(10, 12);
        int media = media(numero_1,numero_2);
        
        if(verificaPrimo(media) == true){
            System.out.println("Retorno da media é primo -> "+ media);
        }
        
    }
    
  
    public static boolean verificaPrimo(int media){
        int conta_primo = 0;
        
        for(int i = 1; i < media; i++){
            if(media%i == 0){
                conta_primo++;
            }
        }
        
        if(conta_primo <= 2)
           return (true);
        else
            return (false);
    }

 
}

