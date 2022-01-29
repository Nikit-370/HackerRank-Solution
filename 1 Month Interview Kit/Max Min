import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt(), k = in.nextInt();
        int[] x = new int[n];
        for(int i = 0; i < n; i++) x[i] = in.nextInt();
        Arrays.sort(x);
        System.out.println(f(n, k, x));
    }
    
    private static int f(int n, int k, int[] x){
        int min = 100000000;
        for(int i = 0; i + k-1 < x.length; i++){
            if(x[i+k-1] - x[i] < min) min = x[i+k-1]-x[i];
        }
        return min;
    }
}
