package codeforces;
import java.util.*;
public class Solution {

	public static void main(String[] args) 
	{
		Scanner s= new Scanner(System.in);
		
		int n=s.nextInt();
		int ss=0;
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=s.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			if(arr[i]==n)
				continue;
			else {
			if(arr[i]==arr[arr[i]])
				{
					ss=arr[i];
					arr[arr[i]]=arr[i];
					arr[i]=ss;
				}
			}
		}
		
//		int m=n,p=0,mini=0,min=m%10,itr=0,sum=0;
//		while(m!=0)
//		{												
//			p=m%10;
//			m=m/10;
//			if(p>=min)
//				{
//					min=p;mini=itr;
//				}
//			itr++;
//		}		
//		for(int i=0;i<itr-1;i++)
//		{
//			if(i<mini)
//			sum=sum+((n%((int)Math.pow(10, i)))*((int)Math.pow(10, i)));
//			else
//				sum=sum+((n%((int)Math.pow(10, i)))*((int)Math.pow(10, i+1)));
//			
//		}
		for(int i=0;i<n;i++)
		{
			System.out.print(arr[i]+" ");
		}
				
			
		s.close();
		// TODO Auto-generated method stub


	}

}
 
