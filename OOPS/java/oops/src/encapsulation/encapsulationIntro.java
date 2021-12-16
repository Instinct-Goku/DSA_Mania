package encapsulation;

public class encapsulationIntro {
	public static void main(String Args[]) {
		Laptop l1 = new Laptop();
		l1.setPrice(500);
		System.out.println(l1.getPrice("Admin"));
		
	}  
}


class Laptop {
	private int price = 50000;
	int ram = 4;
	
	public int getPrice(String user) {
		if(user == "Admin")
			return price;
		else {
			System.out.println("You are note authorized!");
			return 0;
		}
	}

	public int getPrice() {
		return price;
	}

	public void setPrice(int price) {
		this.price = price;
	}

	public int getRam() {
		return ram;
	}

	public void setRam(int ram) {
		this.ram = ram;
	}
}