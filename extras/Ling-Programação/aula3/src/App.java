import java.io.File;
import java.io.FileWriter;
public class App {
    public static void main(String[] args) throws Exception {
        File meuArq = new File ("filename.txt");
        if (meuArq.createNewFile()){
            System.out.println();
        }else{
         System.out.println("Nome do arquivo"+meuArq.getName());
        System.out.println("Caminho Absoluto"+meuArq.getAbsolutePath());
        System.out.println("Liberado para escrita"+meuArq.canWrite());
        System.out.println("Liberado para Leitura"+meuArq.canRead());
        System.out.println("Tamanho do arquivo em bytes"+meuArq.length());
        }
        FileWriter meuArqW = new FileWriter("filename.txt");
        meuArqW.write("Escrevendo no arquivo...\n pulando uma linha");
        meuArqW.close();
    }
}
