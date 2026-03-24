import java.util.Scanner;

public class Q04 {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Quantos anos deseja verificar? ");
        int n = entrada.nextInt();

        int[] anos = new int[n];

        // Leitura dos anos
        for (int i = 0; i < n; i++) {
            System.out.print("Digite o ano " + (i + 1) + ": ");
            anos[i] = entrada.nextInt();
        }

        System.out.println("\nResultado:");

        // Verificação
        for (int i = 0; i < n; i++) {
            int ano = anos[i];

            if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
                System.out.println(ano + " é bissexto");
            } else {
                System.out.println(ano + " não é bissexto");
            }
        }

        entrada.close();
    }
}
