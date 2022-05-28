// Find length to string allocated Dynamically.

import java.util.*;

class Program4
{
	public static void main(String[] arg)
	{
		Lucifer obj = new Lucifer();
		obj.Accept();
		obj.Display();
		obj.StrCopySmall();
	}
}

class StringX
{
	public String str;

	public void Accept()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter String : ");
		str = sobj.nextLine();
	}
	public void Display()
	{
		System.out.println("String Copy Small latter : ");
	}
}

class Lucifer extends StringX
{
	public void StrCopySmall()
	{
		char Arr[] = str.toCharArray();

		for(int i = 0; i < Arr.length; i++)
		{
			if((Arr[i] >= 'a') && (Arr[i] <= 'z')){
				System.out.print(Arr[i]);
			}
		}
	}
}