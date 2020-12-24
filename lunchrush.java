package codeforces;

import java.util.*;

public class lunchrush {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s=new Scanner(System.in);
		int d1=s.nextInt();
		int v1=s.nextInt();
		int d2=s.nextInt();
		int v2=s.nextInt();
		int p=s.nextInt();
		int d=0;int sum=0;
		while(sum<p)
		{
			d++;
			if(d1<=d)
			{
				sum+=v1;
			}
			if(d2<=d)
			{
				sum+=v2;
			}
		}
		System.out.print(d);
		s.close();
	}

}

