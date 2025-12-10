public class Aluno extends Pessoa {
    private String nome;
    private int idade;
    private int matricula;

    //Construtor
    public Aluno(String nome, int idade, int matricula) {
        super(nome, idade);
        this.nome = nome;
        this.idade = idade;
        this.matricula = matricula;
    }

    // Getter e setter
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    @Override
    public String toString() {
        return super.toString() + ", Matrícula: " + matricula;
    }
}

