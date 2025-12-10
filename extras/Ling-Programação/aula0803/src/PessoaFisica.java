public class PessoaFisica extends Cliente {
    private String cpf;

    public PessoaFisica(String nome, String telefone, String email) {
        super(nome, telefone, email);
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public boolean validaCpf(String cpf) {
        return true;
    }
}