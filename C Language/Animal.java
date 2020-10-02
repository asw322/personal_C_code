import java.util.*;
public class Animal {
	protected String name;
	protected int x;
	protected int y;
	protected int speed;

	private static final Scanner console = new Scanner(System.in);
	private static Random rand = new Random();

	public Animal() {
		this.x = rand.nextInt(10);
		this.y = rand.nextInt(10);
		this.speed = 1;
	}
	public Animal(String name) {
		this.x = rand.nextInt(10);
		this.y = rand.nextInt(10);
		this.speed = 1;
		this.name = name;
	}
	public int getX() {
		return this.x;
	}
	public int getY() {
		return this.y;
	}
	public String getPosition() {
		return "X = " + x + "Y = " + y;
	}
	public String getName() {
		return this.name;
	}
	public void setSpeed(int speed) {
		if(speed > 0) {
			this.speed = speed;
		}
		else {
			System.out.println("speed cannot be negative");
		}
	}
	public void dead() {
		System.out.println(this.name + " is dead");
		this.x = -1;
		this.y = -1;
		this.speed = 0;
	}
}