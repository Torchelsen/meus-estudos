import java.util.Scanner;

public class Bee1003 {
    static Scanner leitor = new Scanner(System.in);
    public static void main(String[] args) {
        int valor1, valor2, resultado;

        valor1 = leitor.nextInt();
        valor2 = leitor.nextInt();

        resultado = valor1 + valor2;
        System.out.printf("SOMA = %d%n", resultado);
    }
}