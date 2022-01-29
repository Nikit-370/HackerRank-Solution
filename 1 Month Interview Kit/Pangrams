import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        try (Scanner sc = new Scanner(System.in)) {
            String line = sc.nextLine();
            String lower = line.toLowerCase();
            lower = lower.replace(" ", "");
            
            Set<Character> chars = new HashSet<Character>();
            for (int i = 0; i < lower.length(); ++i) {
                chars.add(lower.charAt(i));
            }
            if (chars.size() != 26) {
                System.out.print("not ");
            }
            System.out.println("pangram");
        }
    }
}
