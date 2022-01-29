import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String dt = sc.next();
        char ap = dt.charAt(dt.length() - 2);
        dt = dt.substring(0, dt.length() - 2);
        if (ap == 'A') {
            int hh = Integer.parseInt(dt.substring(0, 2));
            if (hh == 12) hh = 0;
            String s = Integer.toString(hh);
            if (s.length() == 1) {
                s = "0" + s;
            }
            System.out.println(s + dt.substring(2, dt.length()));
        } else {
            int hh = Integer.parseInt(dt.substring(0, 2));
            if (hh != 12) hh += 12;
            String s = Integer.toString(hh);
            if (s.length() == 1) {
                s = "0" + s;
            }
            System.out.println(hh + dt.substring(2, dt.length()));
        }
    }
}
