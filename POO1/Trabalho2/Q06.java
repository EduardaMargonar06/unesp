import java.util.Scanner;

public class Q06 {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        System.out.print("Valor do empréstimo: ");
        double valor = entrada.nextDouble();

        System.out.print("Número de parcelas: ");
        int parcelas = entrada.nextInt();

        System.out.print("Tipo de cliente (C/P): ");
        char tipo = entrada.next().toUpperCase().charAt(0);

        double juros;

        // Define juros e valida parcelas
        if (tipo == 'C') {
            juros = 0.025;
            if (parcelas > 24) {
                System.out.println("Erro: cliente comum só pode parcelar até 24 vezes.");
                return;
            }
        } else if (tipo == 'P') {
            juros = 0.015;
            if (parcelas > 36) {
                System.out.println("Erro: cliente premium só pode parcelar até 36 vezes.");
                return;
            }
        } else {
            System.out.println("Tipo de cliente inválido!");
            return;
        }

        // Cálculo simples (juros por mês)
        double total = valor * (1 + juros * parcelas);
        double valorParcela = total / parcelas;

        System.out.printf("Total a pagar: R$ %.2f\n", total);
        System.out.printf("Valor da parcela: R$ %.2f\n", valorParcela);

        entrada.close();
    }
}
