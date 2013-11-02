
package exercicio_02;


/**
 *
 * @author Cleiton
 */
public class Time {
    private String nome;
    private int titulos;

    //Método construtor
    public Time(String nome, int titulos) {
        this.nome = nome;
        this.titulos = titulos;
    }

    //Métodos recuperadores
    public String getNome() {
        return nome;
    }
    public int getTitulos() {
        return titulos;
    }
    
    //Métodos modificadores
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setTitulos(int titulos) {
        this.titulos = titulos;
    }
    
}
