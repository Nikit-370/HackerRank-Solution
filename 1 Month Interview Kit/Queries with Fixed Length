import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int q = sc.nextInt();
        int[] ar = new int[n];
        for (int i=0; i<n; i++) ar[i] = sc.nextInt();

        for (int i=0; i<q; i++) {
            System.out.println(minMax(ar, sc.nextInt()));
        }
    }

    public static int minMax(int[] ar, int d) {
        Deque<Integer> deque = new ArrayDeque<>(d);
        // Initial filling of the deque
        for (int i=0; i<d; i++) {
            addNewElement(deque, ar[i]);
        }
        int min = deque.peekFirst();

        for (int i=d; i<ar.length; i++) {
            if (ar[i-d] == deque.peekFirst()) deque.removeFirst();

            addNewElement(deque, ar[i]);

            int max = deque.peekFirst();
            if (max < min) min = max;
        }

        return min;
    }

    // Always put el at the end because it might be the most important el for the series that starts with el itself.
    // Remove all previous el's from the queue that were smaller.
    private static void addNewElement(Deque<Integer> deque, int newEl) {
        while (!deque.isEmpty() && deque.peekLast() < newEl) {
            deque.removeLast();
        }
        deque.offerLast(newEl);
    }
}
