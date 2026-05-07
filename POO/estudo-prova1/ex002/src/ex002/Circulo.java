package ex002;

import java.util.Scanner;

public class Circulo extends Forma {
	@Override
	public void calcularArea() {
	Scanner scanner = new Scanner(System.in);
	System.out.println("Digite o valor do raio: ");
	double raio = scanner.nextDouble();
	double resultado = Math.PI * Math.pow(raio, 2);
	
	System.out.println("Area do Circulo: " + resultado);
	}
			
}	
