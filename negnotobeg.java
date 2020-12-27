package codeforces;
import java.util.*;
public class negnotobeg {
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int n=scanner.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=scanner.nextInt();
		}
		int j=0,temp=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<0)
			{
				if(i!=j)
				{
					temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
					j++;
				}
			}
		}
			for(int i=0;i<n;i++)
			{
				System.out.print(arr[i]+" ");
			}
		
		
		scanner.close();
	}

}
