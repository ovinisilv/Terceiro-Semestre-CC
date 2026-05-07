package ex005;

public enum DiaDaSemana {
	DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO;
	
	
	public boolean verificarFinalDeSemana() {
		boolean resultado = (this == SABADO || this == DOMINGO);
		
		System.out.println("Dia: " + this + "\nFinal de Semana? " + resultado);
		
		
		return resultado;
	}
}
