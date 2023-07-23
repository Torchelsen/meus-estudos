import java.util.Scanner;

public class Bee1005 {
    static Scanner leitor = new Scanner(System.in);
    public static void main(String[] args) {
        Double valor1, valor2, resultado;

        valor1 = leitor.nextDouble();
        valor2 = leitor.nextDouble();

        resultado = ((valor1*0.35)+(valor2*0.75))/1.1;
        System.out.printf("MEDIA = %.5f%n", resultado);
    }
}