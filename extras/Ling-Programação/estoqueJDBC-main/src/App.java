import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Calendar;
import java.util.Date;

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");

        Produto p = new Produto();//(1,"feijao", 20, new Date(), 5.0);
        p.setId((long) 4);
        p.setNome("macarrao");
        p.setQtde(20);
        p.setValor(5.0);
        //ProdutoService.inserir(p);
        //ProdutoService.atualizar(p, l);
        //ProdutoService.deletar(p);
        System.out.println(ProdutoService.listarTodos());
        System.out.println(ProdutoService.listarPorNome("Morango"));


        
    }

    public static Connection getConexao(){
        Connection conexao = null;
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            //Passei os parametros diretamente para a função
            conexao = DriverManager.getConnection("jdbc:mysql://10.28.0.35:3306/demojpa", "remoto", "remoto");
        } catch (ClassNotFoundException | SQLException e) {
            System.out.println("Não foi possível se conectar ao banco");
            e.printStackTrace();
        }
        return conexao;
    }
}
