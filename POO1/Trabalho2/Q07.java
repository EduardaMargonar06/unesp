import java.util.Scanner;

public class Q07 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Quantidade de consumidores: ");
        int n = entrada.nextInt();

        double[] contas = new double[n];

        for (int i = 0; i < n; i++) {

            double consumo;
            char tipo;

            
            do {
                System.out.print("\nConsumo (kWh): ");
                consumo = entrada.nextDouble();
            } while (consumo <= 0);

            do {
                System.out.print("Tipo (R/C/I): ");
                tipo = entrada.next().toUpperCase().charAt(0);
            } while (tipo != 'R' && tipo != 'C' && tipo != 'I');

            double total = 0;

            
            if (tipo == 'R') {
                if (consumo <= 100) {
                    total = consumo * 0.50;
                } else {
                    total = 100 * 0.50 + (consumo - 100) * 0.75;
                }
            }

            if (tipo == 'C') {
                if (consumo <= 200) {
                    total = consumo * 0.65;
                } else {
                    total = 200 * 0.65 + (consumo - 200) * 0.80;
                }
            }

            if (tipo == 'I') {
                if (consumo <= 500) {
                    total = consumo * 0.55;
                } else {
                    total = 500 * 0.55 + (consumo - 500) * 0.70;
                }
            }

            
            if (consumo > 300) {
                total *= 0.95;
            }

            
            if (consumo > 500) {
                total += 50;
            }

            contas[i] = total;

            System.out.printf("Valor: R$ %.2f\n", total);
        }

        double maior = contas[0], menor = contas[0], soma = 0;
        int acimaMedia = 0;

        for (int i = 0; i < n; i++) {
            if (contas[i] > maior) maior = contas[i];
            if (contas[i] < menor) menor = contas[i];
            soma += contas[i];
        }

        double media = soma / n;

        for (int i = 0; i < n; i++) {
            if (contas[i] > media) acimaMedia++;
        }

        System.out.println("\n--- RESULTADOS ---");
        System.out.printf("Maior: R$ %.2f\n", maior);
        System.out.printf("Menor: R$ %.2f\n", menor);
        System.out.printf("Média: R$ %.2f\n", media);
        System.out.println("Acima da média: " + acimaMedia);

        entrada.close();
    }
}
