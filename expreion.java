
import java.util.*;
public class Main
{
	public static void main(String[] args) {
		//System.out.println("Hello World");
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int m=s.nextInt();
		int[][] arr=new int[n][m];
		for(int i=0;i<n;i++)
		{
			String string=s.next();
		for(int j=0;j<m;j++) {
			arr[i][j]=Character.getNumericValue(string.charAt(j));
		}
		}
		int max=-1,count=0;
		for(int j=0;j<m;j++)
		{
			int x=0;
			for(int i=0;i<n;i++)
			{
				x=Math.max(max, arr[i][j]);
			}
			for(int i=0;i<n;i++)
			{
				if(arr[i][j]==x)
				arr[i][j]=-1;
			}
			
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(arr[i][j]==-1)
				{
					count++;break;
				}
			}
		}
		System.out.println(count);
		
	}
}
