import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;

public class ProdutoService {
    public static void inserir(Produto produto){
        String sql = "insert into produto (id,nome,qtde,dt_validade,valor) values (?,?,?,?,?)";
        try (Connection con = App.getConexao()) {
            PreparedStatement ps = con.prepareStatement(sql);
            ps.setLong(1, produto.getId());
            ps.setString(2, produto.getNome());
            ps.setInt(3, produto.getQtde());
            ps.setDouble(4, produto.getValor());
            int res = ps.executeUpdate();
            if (res > 0) {
                System.out.println("Produto inserido com sucesso");                
            }            
        } catch (SQLException e){
            System.out.println("Erro ao adicionar produto");
        }
        
    }

    public static void atualizar(Produto produto, Long id){
        String sql = "update produto set nome = ?, qtde = ?, valor = ?) where id = ?";
        try (Connection con = App.getConexao()) {
            PreparedStatement ps = con.prepareStatement(sql);
            ps.setString(1, produto.getNome());
            ps.setInt(2, produto.getQtde());
            ps.setDouble(3, produto.getValor());
            ps.setLong(4, id);
            int res = ps.executeUpdate();
            if (res > 0) {
                System.out.println("Produto alterado com sucesso");                
            }            
        } catch (SQLException e){
            System.out.println("Erro ao atualizar o produto");
        }
        
    }

    public static void deletar(Produto produto){
        String sql = "delete from produto where id = ?";
        try (Connection con = App.getConexao()) {
            PreparedStatement ps = con.prepareStatement(sql);
            ps.setString(1, produto.getNome());
            int res = ps.executeUpdate();
            if (res > 0) {
                System.out.println("Produto excluido com sucesso");                
            }            
        } catch (Exception e) {
             System.out.println("Erro ao excluir o produto");
        }
    }

    public static List<Produto> listarTodos() {
        String sql = "SELECT * FROM produto";
        List<Produto> produtos = new ArrayList<>();

        try (Connection con = App.getConexao()) {
            Statement stmt = con.createStatement();
            ResultSet rs = stmt.executeQuery(sql);
            while (rs.next()) {
                Produto p = new Produto();
                p.setId(rs.getLong("id"));
                p.setNome(rs.getString("nome"));
                p.setQtde(rs.getInt("qtde"));
                p.setValor(rs.getDouble("valor"));              

                produtos.add(p);
            }

        } catch (SQLException e) {
            System.out.println("Não conseguiu listar os produtos do BD.");
            e.printStackTrace(); //mostra a linha exata onde houve o erro
        }
        return produtos;
    }

    public static List<Produto> listarPorNome(String nome) {
        String sql = "SELECT * FROM produto where nome = ?";
        List<Produto> produtos = new ArrayList<>();

        try (Connection con = App.getConexao()) {
            PreparedStatement ps = con.prepareStatement(sql);
            ps.setString(1, nome);
            ResultSet rs = ps.executeQuery();
            while (rs.next()) {
                Produto p = new Produto();
                p.setId(rs.getLong("id"));
                p.setNome(rs.getString("nome"));
                p.setQtde(rs.getInt("qtde"));
                p.setValor(rs.getDouble("valor"));              

                produtos.add(p);
            }

        } catch (SQLException e) {
            System.out.println("Não conseguiu listar os produtos do BD.");
            e.printStackTrace(); //mostra a linha exata onde houve o erro
        }
        return produtos;
    }
}
