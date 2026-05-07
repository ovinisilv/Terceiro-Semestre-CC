package ex004;

public class Carro {

		private String modelo = "Ford";
	
	
	public class Motor{
		
		
		
		
		public void detalhes() {
			getNome();
			System.out.println("Modelo do carro: " + modelo);
		}
		
		public String getNome() {
			return modelo;
		}
	
	
	
	}
	
}
