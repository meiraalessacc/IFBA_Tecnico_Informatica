public class Professor extends Pessoa {
    private String nome;
    private int idade;
    private String disciplina;

    //Construtor
    public Professor(String nome, int idade, String disciplina) {
        super(nome, idade);
        this.nome = nome;
        this.idade = idade;
        this.disciplina = disciplina;
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

    public String getDisciplina() {
        return disciplina;
    }

    public void setDisciplina(String disciplina) {
        this.disciplina = disciplina;
    }

    @Override
    public String toString() {
        return super.toString() + ", Disciplina: " + disciplina;
    }
}
