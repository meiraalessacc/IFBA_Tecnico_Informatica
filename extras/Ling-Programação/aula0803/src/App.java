public class App {
    public static void main(String[] args) throws Exception {
    Conta c1 = new Conta();
  PessoaFisica p1 = new PessoaFisica("Leonardo", "telefone", "email");
 p1.setNome("leonardo");
 p1.setCpf("111111111111100");

 c1.numero = "123-4";
 c1.cliente = p1;
 c1.saldo=0.0;

 System.out.println("O saldo de"+ c1.cliente.getNome()+"é:" + c1.saldo);
 c1.deposita(1000.0);
 if(c1.saca(100)){
     System.out.println("Saque realizado com sucesso.");
      System.out.println("O saldo de"+ c1.cliente.getNome()+"é:" + c1.saldo);
 }else{
         System.out.println("Saldo insuficiente!");
 }
    }
}
