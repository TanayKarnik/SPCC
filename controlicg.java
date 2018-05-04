import java.util.*;
import java.io.*;

public class controlicg
{
	public static void controlState(String[] equations, int number)
	{
		int index = 100;
		for(int i=0; i<number; i++)
		{
			String equation = equations[i];
			if(equation.equals("{"));
			else if(equation.contains("while"))
			{
				String condition = equation.substring(equation.indexOf("(")+1, equation.indexOf(")"));
				System.out.println("Lstart if " + condition + " go to Lstop");
			}
			else if(equation.equals("}"))
			{
				System.out.println(Integer.toString(index) + ": go to Lstart");
				System.out.println("Lstop");	
			}
			else
			{
				System.out.println(Integer.toString(index) + ": " + equation.substring(0, equation.length()-1));
				index++;
			}
		}
	}

	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		//System.out.println("Enter the assignment equation.");
		//String equation = sc.next();
		//assignment(equation);
		//System.out.println("Enter the boolean equation.");
		//equation = sc.next();
		//boolState(equation);
		System.out.println("Enter number of lines of the control statement. { and } on one line each.");
		int n = sc.nextInt();
		String[] control = new String[n];
		for(int i=0; i<n; i++)
		{
			control[i] = sc.next();
		}
		controlState(control, n);
	}

}