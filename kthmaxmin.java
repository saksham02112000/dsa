package codeforces;
import java.util.*;
public class kthmaxmin {

	public static void mergesort(int[] arr, int low, int high)
	{
		while(low<high)
		{
			int mid=(low+high)/2;
			mergesort(arr,low,mid);
			mergesort(arr,mid+1,high);
			sort(arr,low,mid,high);
		}
	}
	public static void sort(int[] arr, int low, int mid , int high)
	{
		int[] l=new int[mid-low+1];
		int[] r=new int[high-mid];
		for(int i=0;i<(mid-low+1);i++)
		{
			l[i]=arr[low+i];
		}
		for(int j=0;j<(high-mid);j++)
		{
			r[j]=arr[mid+j+1];
		}
		int i=0,j=0,k=low;
		
		while(i<(mid-low+1) || j<(high-mid))
		{
			if(l[i]<r[j])
			{
				arr[k]=l[i];
				i++;
				
			}
			else
			{
				arr[k]=r[j];
				j++;
				
			}
			k++;
		}
		while(i<(mid-low+1))
		{
			arr[k]=l[i];
			k++;
			i++;
		}
		while(j<(high-mid))
		{
			arr[k]=r[j];
			k++;
			j++;
		}
	}
	public static void main(String[] args) {
		Scanner scanner=new Scanner(System.in);
		int n=scanner.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=scanner.nextInt();
		}
		mergesort(arr,0,arr.length-1);
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
		scanner.close();
		// TODO Auto-generated method stub

	}

}
