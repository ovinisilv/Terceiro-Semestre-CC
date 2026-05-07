package ex004;

public class MotorDaMoto extends Moto {

	public void detalhes() {
		getNome();
		System.out.println("Modelo da moto: " + modelo);
	}
	
	public String getNome() {
		return modelo;
	}
}
