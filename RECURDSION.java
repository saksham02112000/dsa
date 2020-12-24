package codeforces;
import java.util.*;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class RECURDSION {

    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    public static Stack<Integer> takeInput() throws NumberFormatException, IOException {
    	int size = Integer.parseInt(br.readLine().trim());
    	Stack<Integer> input = new Stack<>();

    	if (size == 0) {
    		return input;
    	}
    	
    	String[] values = br.readLine().trim().split(" ");

    	for(int i = 0; i < size; i++) {
    		input.push(Integer.parseInt(values[i]));
    	}

    	return input;
    }

    public static void main(String[] args) throws NumberFormatException, IOException {
    	Stack<Integer> input = takeInput();
    	Stack<Integer> empty = new Stack<>();

    	Solution.reverseStack(input, empty);

    	while(!input.isEmpty()) {
    		System.out.print(input.pop() + " ");
    	}

    }
}

import java.util.*;
public class RECURDSION {

	public static void reverseStack(Stack<Integer> input, Stack<Integer> extra) {
		//Your code goes here
        if(input.empty())
        {
            return;
        }
        int x=input.peek();
        input.pop();
        reverseStack(input,extra);
        while(!input.empty())
        {
            extra.push(input.peek());
            input.pop();
        }
        input.push(x);
        while(!extra.empty())
        {
            
            input.push(extra.peek());
            extra.pop();
        }
        
	}
}