package ex002;

import java.util.Scanner; 

public class Quadrado extends Forma{
	@Override
	public void calcularArea() {
			Scanner scanner  = new Scanner(System.in);
		
			System.out.println("Digite o valor do lado do quadrado: ");
			int lado = scanner.nextInt();
			int resultado = lado * lado;
			
			System.out.println("Area do quadrado: " + resultado);
			scanner.close();
	}
	
}
