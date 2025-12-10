public class Conta {
    String numero;
    Cliente cliente;
    double saldo;
    double limite;

    boolean saca(double valor){
        if (this.saldo < valor){
            return false;
        }else{
            this.saldo = this.saldo - valor;
            return true;
        }
    }
    void deposita(double valor){
        this.saldo += valor;
    }
    boolean transfere(Conta destino, double valor ){
        if (saca(valor)){
            destino.deposita(valor);
            return true;
        }else{
            return false;
        }
    }
}
