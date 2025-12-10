import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Digite o nome do aluno: ");
        String nomeAluno = scanner.nextLine();

        System.out.print("Digite a idade do aluno: ");
        int idadeAluno = scanner.nextInt();

        System.out.print("Digite a matrícula do aluno: ");
        int matriculaAluno = scanner.nextInt();

        Aluno aluno = new Aluno(nomeAluno, idadeAluno, matriculaAluno);

        System.out.print("Digite o nome do professor: ");
        String nomeProfessor = scanner.nextLine();
        nomeProfessor = scanner.nextLine(); // Limpar o buffer

        System.out.print("Digite a idade do professor: ");
        int idadeProfessor = scanner.nextInt();
        scanner.nextLine(); // Limpar o buffer

        System.out.print("Digite a disciplina do professor: ");
        String disciplinaProfessor = scanner.nextLine();

        Professor professor = new Professor(nomeProfessor, idadeProfessor, disciplinaProfessor);

        Disciplina disciplina = new Disciplina(disciplinaProfessor);

        disciplina.adicionarAluno(aluno);



        System.out.println("\nInformações do Aluno:");
        System.out.println(aluno);

        System.out.println("\nInformações do Professor:");
        System.out.println(professor);

        System.out.println("\nInformações da Disciplina:");
        System.out.println(disciplina);

        scanner.close();
    }
}
