package codeforces;
import java.util.*;
public class tdmatrix {
	
	public static void main(String args[])
	{
		
		Scanner s=new Scanner(System.in);
		int x=0,y=0;
		int[][] arr=new int[5][5];
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				arr[i][j]=s.nextInt();
				if(arr[i][j]==1)
				{
					x=i;
					y=j;
				}
			}
			
		}
		
		System.out.print((Math.abs(x-2)+Math.abs(y-2)));
		s.close();
	}

}
