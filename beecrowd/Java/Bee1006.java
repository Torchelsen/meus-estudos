import java.util.Scanner;

public class Bee1006 {
    static Scanner leitor = new Scanner(System.in);
    public static void main(String[] args) {
        Double valor1, valor2, valor3, resultado;

        valor1 = leitor.nextDouble();
        valor2 = leitor.nextDouble();
        valor3 = leitor.nextDouble();

        resultado = (valor1*0.2)+(valor2*0.3)+(valor3*0.5);
        System.out.printf("MEDIA = %.1f%n", resultado);
    }
}
