// Find length to string allocated Dynamically.

import java.util.*;

class Program11
{
	public static void main(String[] arg)
	{
		Lucifer obj = new Lucifer();
		obj.Accpetstr();
		int ret = obj.StrSize();
		System.out.println("Count of the string length :"+ret);
	}
}

class Lucifer
{
	public String str;
	public void Accpetstr()
	{
		Scanner sobj = new Scanner(System.in);
		System.out.println("Enter the string :");
		str = sobj.nextLine();
	}
	public int StrSize()
	{
		int iCnt = 0;
		char Arr[] = str.tocharArray();
		for(int i = 0; i < Arr.length; i++){
			iCnt++;
		}
		return iCnt;
	}
}
