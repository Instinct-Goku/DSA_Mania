package Basics;


public class mainClass {
	public static void main(String Args[]) {
	Person p1 = new Person(25, "goku");
	System.out.println(p1.name);
	Developer d1 = new Developer(30, "vegeta");
	System.out.println(d1.name);
	d1.sleep(5);
	p1.walk();
	d1.walk();
	System.out.println(Person.count);
	}

}


class Person {
	int age;
	protected String name;
	static int count;
	
	Person(int age, String name){
		count++;
		this.age = age;
		this.name = name;
	}
	
	void walk() {
		System.out.println(name + " is walking");
	}
	
	void sleep() {
		System.out.println(name + " is sleeping");
	}
	
	void sleep(int time) {
		System.out.println(name + " is sleeped for " + time + " hrs.");
	}
}

class Developer extends Person {

	Developer(int age, String name) {
		super(age, name);
		// TODO Auto-generated constructor stub
	}
	
	
	void walk() { 
		// runtime polymorphism
		System.out.println(name+" done walking");
	}
	
}

