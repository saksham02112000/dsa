package codeforces;
import java.util.*;
public class arrays {

	public static void main(String[] args) {
		
		Scanner s=new Scanner(System.in);
		int m=s.nextInt();
		for(int i=0;i<m;i++)
		{
		int n=s.nextInt();
		int d=s.nextInt();
		int[] arr=new int[n];
		int o=0,ne=0,sum=0;
		for(int j=0;j<n;j++)
		{
			arr[j]=s.nextInt();
			if(arr[j]<=9 || arr[j]>=80)
			{
				o++;
			}
			else
			{
				ne++;
			}
		}
		for(int j=0;j<n;j++)
		{
			if(o%d==0)
			{
				sum=sum+(o/d);
			}
			else
			{
				sum=sum+(o/d)+1;
			}
			if(ne%d==0)
			{
				sum=sum+(ne/d);
			}
			else
			{
				sum=sum+(ne/d)+1;
			}
		}
		System.out.println(sum);
		}
		
		
		
		
		
		
		s.close();
		
		// TODO Auto-generated method stub

	}

}

