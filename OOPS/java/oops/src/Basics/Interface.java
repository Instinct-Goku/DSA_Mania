package Basics;

public class Interface implements Plane, Boat{
	public static void main(String Args[]) {
		Interface c = new Interface();
		c.start();
	}

	@Override
	public void start() {
		System.out.println("Interface is starting");
		
	}

	@Override
	public void swim() {
		System.out.println("Interface is swimming");
		
	}
}


interface Plane{
	void start();
}

interface Boat {
	void swim();
}
