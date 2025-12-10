public class PessoaJuridica extends Cliente {
    private String cnpj;

    public PessoaJuridica(String nome, String telefone, String email) {
        super(nome, telefone, email);
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public boolean validaCnpj(String cnpj) {
        return true;
    }
}