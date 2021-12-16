package Basics;

public class abstractClass {
	public static void main(String Args[]) {
		Audi a1 = new Audi();
		a1.start();
	}
}

class Audi extends Car {

	@Override
	void start() {
		System.out.println("Audi is Starting");
		
	}
	
}

class BMW extends Car {

	@Override
	void start() {
		System.out.println("BMW is Starting");
		
	}
	
}

abstract class Car {
	int price;
	
	abstract void start();
}