import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int numCookies = sc.nextInt();
        int minSweetness = sc.nextInt();
        int count = 0;
        PriorityQueue<Integer> he = new PriorityQueue<Integer>(numCookies);
        for(int i = 0; i < numCookies; i++){
            int sweetness = sc.nextInt();
            he.add(sweetness);
        }
        while(he.peek() < minSweetness && he.size() > 1){
            int ne = he.poll() + 2*he.poll();
            he.add(ne);
            count++;
        }
        if(he.peek() >= minSweetness){
            System.out.println(count);
        } else{
            System.out.println(-1);
        }
    }
}
