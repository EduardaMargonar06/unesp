import java.util.Scanner;

public class Q02 {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        int resultado=0;
        
        System.out.println("n1: ");
        int n1 = entrada.nextInt();

        System.out.println("n2: ");
        int n2 = entrada.nextInt();

        System.out.print("Digite o operador (+, -, *, /): ");
        char operador = entrada.next().charAt(0);


        switch(operador) {
    case '+':
        resultado = n1 + n2;
        System.out.print("Resultado de n1 + n2 é: " + resultado);
        break; 
    case '-':
        resultado = n1 - n2;
        System.out.print("Resultado de n1 - n2 é: " + resultado);
        break;
    case '*':
        resultado = n1 * n2;
        System.out.print("Resultado de n1 * n2 é: " + resultado);
        break;
    case '/':
        if (n2 != 0) {
        resultado = n1 / n2;
        System.out.print("Resultado de n1 / n2 é: " + resultado);
    } else {
        System.out.println("Não pode dividir por zero!");
    }
        break;
    default:
        System.out.println("erro!");
}

        
    }
}
