import java.util.Scanner;

public class Q05 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Horas: ");
        int horas = entrada.nextInt();

        System.out.print("Tipo (C/M): ");
        char tipo = entrada.next().charAt(0);

        System.out.print("Final de semana? (S/N): ");
        char fds = entrada.next().charAt(0);

        double total;

        // cálculo direto
        if (tipo == 'C') {
            total = horas * 8;
        } else {
            total = horas * 5;
        }

        if (horas > 5) {
            total *= 0.9;
        }

        if (fds == 'S') {
            total *= 1.05;
        }

        System.out.println("Total: R$ " + total);
    }
}
