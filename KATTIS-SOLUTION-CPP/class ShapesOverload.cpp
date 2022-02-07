class ShapesOverload{
	void area(float x)
	{
		System.out.println("the area of the square is "+Math.pow(x, 2)+" sq units");
	}
	void area(float x, float y)
	{
		System.out.println("the area of the rectangle is "+x*y+" sq units");
	}
	void area(double x)
	{
	double z = 3.14 * x * x;
		System.out.println("the area of the circle is "+z+" sq units");
	}
}
public class ShapesOverloadDriver{
	public static void main(String args[])
	{
		ShapesOverload obj = new ShapesOverload();
		obj.area(5);
		obj.area(11,12);
		obj.area(2.5);
	}
}