import java.sql.Date;

public class Produto {
    private Long id;
    private String nome;
    private Integer qtde;
    private Date dtValidade;
    private Double valor;

    public Produto() {
    }

    public Produto(Long id, String nome, Integer qtde, Date dtValidade, Double valor) {
        this.id = id;
        this.nome = nome;
        this.qtde = qtde;
        this.dtValidade = dtValidade;
        this.valor = valor;
    }

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Integer getQtde() {
        return qtde;
    }

    public void setQtde(Integer qtde) {
        this.qtde = qtde;
    }

    public Date getDtValidade() {
        return dtValidade;
    }

    public void setDtValidade(Date date) {
        this.dtValidade = date;
    }

    public Double getValor() {
        return valor;
    }

    public void setValor(Double valor) {
        this.valor = valor;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((id == null) ? 0 : id.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;
        Produto other = (Produto) obj;
        if (id == null) {
            if (other.id != null)
                return false;
        } else if (!id.equals(other.id))
            return false;
        return true;
    }

    @Override
    public String toString() {
        return "Produto [id=" + id + ", nome=" + nome + ", qtde=" + qtde + ", dtValidade=" + dtValidade + ", valor="
                + valor + "]";
    }

    
    
       
    
}
