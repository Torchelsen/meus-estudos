import java.util.Scanner;

public class Bee1002 {
    static Scanner leitor = new Scanner(System.in);
    public static void main(String[] args) {
        Double area, raio, pi;
        pi = 3.14159;
        raio = leitor.nextDouble();
        area = pi * (raio*raio);
        System.out.printf("A=%.4f%n", area);
    }
}
