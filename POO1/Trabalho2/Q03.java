import java.util.Scanner;

public class Q03 {
    
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        String usuarioCorreto = "admin";
        String senhaCorreta = "1234";

        int tentativas = 0;
        boolean acessoConcedido = false;

        while (tentativas < 3) {
            System.out.print("Usuário: ");
            String usuario = entrada.nextLine();

            System.out.print("Senha: ");
            String senha = entrada.nextLine();

            if (usuario.equals(usuarioCorreto) && senha.equals(senhaCorreta)) {
                acessoConcedido = true;
                break;
            } else {
                tentativas++;
                System.out.println("Dados incorretos! Tentativa " + tentativas);
            }
        }

        if (acessoConcedido) {
            System.out.println("Acesso concedido!");
        } else {
            System.out.println("Acesso bloqueado!");
        }

        entrada.close();
    }
}
