import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        HashMap<Integer, ArrayList<Integer>> map = new HashMap<Integer, ArrayList<Integer>>();
        int[] sum = new int[3];
        int[] sn = new int[3];
        for (int i =0; i< 3 ; i++)
        {
            sn[i] = in.nextInt();
        }
        for(int i =0; i < 3; i++)
        {
            map.put(i, new ArrayList<Integer>());
            for(int j=0 ; j < sn[i]; j++)
            {
                int k = in.nextInt();
                sum[i] += k;
                map.get(i).add(0,k);
            }
        }
        
        while (!((sum[0] == sum[1]) && (sum[1] == sum[2])))
        {
            int minSum = Math.max(Math.max(sum[0], sum[1]), sum[2]);
            int j = 0;
            if (minSum == sum[0])
                j =0;
            else if (minSum == sum[1])
                j = 1;
            else
                j = 2;
          
                sum[j] -=  map.get(j).get(map.get(j).size() - 1);
                map.get(j).remove(map.get(j).size() - 1);
            
        }
        
        System.out.println(sum[0]);
        
        
    }
}
