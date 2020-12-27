package codeforces;
import java.util.*;

public class amxdifferenceinheight {
	
	public static int maxarr(int[] arr){
		int max=0;
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		return max;
	}
	public static int minarr(int[] arr){
		int min=Integer.MAX_VALUE;
		for(int i=0;i<arr.length;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
		}
		return min;
	}
	
	public static void main(String[] args) {
		
		Scanner scanner=new Scanner(System.in);
		int n=scanner.nextInt();
		int k=scanner.nextInt();
		int[] arr=new int[n];
		for(int j=0;i<n;j++)
		{
			arr[j]=scanner.nextInt();
		}
		int max=maxarr(arr);
		int min=minarr(arr);
		if(max-min<=k)
		{
			System.out.print(max-min);
		}
		else 
		{
			System.out.print(max-min);
		}
		scanner.close();
		
	}

}
