import java.util.Scanner;
public class App3 {
    Scanner scan = new Scanner (System.in);
    int A = scan.nextInt();
    int B = scan.nextInt();
    int C = scan.nextInt();
    int V = 0;

    if (A == B && B == C) {
        V = 3;
    } else if (A + B > C) {
        V = 1;
    } else if (A < B && B < C) {
        V = 1;
    } else {
        V = 2;
    }
    System.out.println(V);
}

