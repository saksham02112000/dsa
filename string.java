package codeforces;
import java.util.*;
public class string {
	
	
	public static int PairSum(int[] input, int size) {
			
			HashMap<Integer, Integer> map = new HashMap<>();
			int answer=0;
				for(int i : input) 
	            {
	                if(map.containsKey(i)) 
	                {
	                    map.put(i, map.get(i) + 1);
	                }
	                else 
	                {
	                    map.put(i, 1);
	                }
				}
	        for(int i: input)
	        {
	            answer=answer+(map.get(i)*map.get(-i));	
	            map.put(i,0);
	            map.put(-i,0);
	        }
	    return answer;
		}
	

	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int[] arr=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=s.nextInt();
		}
		System.out.print(PairSum(arr,arr.length));
		
		s.close();
		
		
		// TODO Auto-generated method stub

	}

}
