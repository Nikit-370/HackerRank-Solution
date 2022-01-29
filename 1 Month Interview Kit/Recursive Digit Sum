import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Solution s = new Solution();
        Scanner sc = new Scanner(System.in);
        
        String str_n = sc.next();
        int k = sc.nextInt();
        
        int pSum = Integer.parseInt(s.supdig(str_n));
        pSum *= k;
                        
        String sup = Integer.toString(s.supdig(pSum));
        
        System.out.println(sup);
    }
    
    String supdig(String n) {
        if(n.length() == 1) return n;
        else {
            int np = 0;
            
            for(int i = 0; i < n.length(); i++) {
                np += Character.getNumericValue( n.charAt(i) );    
            }
            
            return supdig(Integer.toString(np));
        }       
    }
    
    int supdig(int n) {
        if(n / 10 == 0) return n;
        else {
            int r = 0;
            
            while(n > 0) {
                r += n % 10;
                n /= 10;
            }
            
            return supdig(r);
        }
    }
}
