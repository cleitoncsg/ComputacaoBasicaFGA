
package exercicio_05;

/**
 *
 * @author Cleiton
 */
public class Pessoa {
    private String nome, sexo, endereco;
     
   //Método construtor 
    public Pessoa(String nome, String sexo, String endereco) {
        this.nome = nome;
        this.sexo = sexo;
        this.endereco = endereco;
    }

    //Métodos recuperadores
    public String getNome() {
        return nome;
    }

    public String getSexo() {
        return sexo;
    }

    public String getEndereco() {
        return endereco;
    }

    //Métodos modificadores
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setSexo(String sexo) {
        this.sexo = sexo;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    //Método toString
    public String toString() {
        return "" + "nome=" + nome + ", sexo=" + sexo + ", endereco=" + endereco + '}';
    }   
    
}
