/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package dominio;

/**
 *
 * @author IFBA
 */
public class FuncionarioextendsPessoa {
    private String funcao;
    public FuncionarioextendsPessoa(int id, String nome, String cpf,String funcao){
        super(id, nome, cpf);
        this.funcao = funcao;
    }
    public String getFuncao(){
        return funcao;
    }
    public void setFuncao(String Funcao){
        this.funcao = funcao;
    }
    @Override
public String toString(){
    return "Funcionario: "+super.toString() + "[funcao="+ funcao + "]";
}
}
