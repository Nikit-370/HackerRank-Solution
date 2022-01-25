import java.io.*;
import java.util.*;
import java.math.BigInteger;
import java.util.Map.Entry;
import static java.lang.Math.*;

public class Solution {

    long check(long[] a, long m) {
        long ans = 0;
        int n = a.length;

        for (int l = 0; l < n; l++) {
            for (int r = l; r < n; r++) {
                long sum = 0;
                for (int i = l; i <= r; i++) {
                    sum = (sum + a[i]) % m;
                }
                if (ans < sum) {
                    ans = sum;
                }
            }
        }

        return ans;
    }

    long solve(long[] a, long m) {
        TreeSet<Long> t = new TreeSet<Long>();
        t.add(0L);
        long sum = 0, ans = 0;

        for (long d : a) {
            sum = (sum + d) % m;

            Long x = t.first();
            Long y = t.higher(sum);
            t.add(sum);

            if (x != null) {
                long cur = (sum - x + m) % m;
                if (ans < cur) {
                    ans = cur;
                }
            }
            if (y != null) {
                long cur = (sum - y + m) % m;
                if (ans < cur) {
                    ans = cur;
                }
            }

        }

        return ans;
    }

    void run() {

        int t = nextInt();

        while (--t >= 0) {
            int n = nextInt();
            long m = nextLong();
            long[] a = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = nextLong();
            }

            out.println(solve(a, m));

        }
    }

    int[][] nextMatrix(int n, int m) {
        int[][] matrix = new int[n][m];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                matrix[i][j] = nextInt();
        return matrix;
    }

    String next() {
        while (!st.hasMoreTokens())
            st = new StringTokenizer(nextLine());
        return st.nextToken();
    }

    boolean hasNext() {
        while (!st.hasMoreTokens()) {
            String line = nextLine();
            if (line == null) {
                return false;
            }
            st = new StringTokenizer(line);
        }
        return true;
    }

    int[] nextArray(int n) {
        int[] array = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = nextInt();
        }
        return array;
    }

    int nextInt() {
        return Integer.parseInt(next());
    }

    long nextLong() {
        return Long.parseLong(next());
    }

    double nextDouble() {
        return Double.parseDouble(next());
    }

    String nextLine() {
        try {
            return in.readLine();
        } catch (IOException err) {
            return null;
        }
    }

    static PrintWriter out;
    static BufferedReader in;
    static StringTokenizer st = new StringTokenizer("");
    static Random rnd = new Random();

    public static void main(String[] args) throws IOException {
        out = new PrintWriter(System.out);
        // out = new PrintWriter(new File("hc.txt"));
        in = new BufferedReader(new InputStreamReader(System.in));
        new Solution().run();
        out.close();
        in.close();
    }
}
