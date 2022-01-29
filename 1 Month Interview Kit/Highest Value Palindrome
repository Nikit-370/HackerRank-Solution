import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
   
    	Scanner scan = new Scanner(System.in);
    	int N = scan.nextInt();
    	int max = scan.nextInt();
    	scan.nextLine();
    	StringBuilder input = new StringBuilder(scan.nextLine());
    	input.setLength(N);
    	input.trimToSize();
    	int need = 0;
    	for(int i=0;i<N/2;i++){
    		char left = input.charAt(i);
    		char right=input.charAt(N-1-i);
    		if(left!=right)
    			need++;
    	}
    	if(need > max){
    		System.out.println(-1);
    	}else{
    		int free = max - need;
    		for(int i=0;i<N/2;i++){
        		char left = input.charAt(i);
        		char right=input.charAt(N-1-i);
        		if(free>=2){
        			if(left!=right)
        				free++;
        			if(left!='9'){
        				input.setCharAt(i, '9');
        				free--;
        			}
        			if(right!='9'){
        				input.setCharAt(N-1-i, '9');
        				free--;
        			}
        		}else if(free==1){
        			if(left!=right){
        				if(left=='9'||right=='9')
        					free++;
        				if(left!='9'){
            				input.setCharAt(i, '9');
            				free--;
            			}
            			if(right!='9'){
            				input.setCharAt(N-1-i, '9');
            				free--;
            			}
        			}
    			}else{
    				if(left!=right){
    					if(left>right)
        					input.setCharAt(N-1-i, left);
        				else {
        					input.setCharAt(i, right);
    					}
    				}
    			}
        	}
    		if(N%2==1&&free>0)
    			input.setCharAt(N/2, '9');
    		System.out.println(input);
    	}

    	
    	
    	scan.close();
    }
}
