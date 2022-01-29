import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class Solution {

    static BufferedReader reader;
    static StringTokenizer tokenizer = null;
    static PrintWriter writer;

    static String nextToken() throws IOException {
        while (tokenizer == null || (!tokenizer.hasMoreTokens())) {
            tokenizer = new StringTokenizer(reader.readLine());
        }
        return tokenizer.nextToken();
    }

    static int nextInt() throws NumberFormatException, IOException {
        return Integer.parseInt(nextToken());
    }

    static double nextDouble() throws NumberFormatException, IOException {
        return Double.parseDouble(nextToken());
    }

    static long nextLong() throws NumberFormatException, IOException {
        return Long.parseLong(nextToken());
    }

    public static void main(String[] args) throws IOException {
        reader = new BufferedReader(new InputStreamReader(System.in));
        writer = new PrintWriter(System.out);
        cherry();
        reader.close();
        writer.close();
    }

    static BigInteger two = new BigInteger("2");

    static boolean isWin(BigInteger bi) {
        if (bi.equals(BigInteger.ONE)) {
            return false;
        }
        if (bi.bitCount() == 1) {
            return !isWin(bi.divide(two));
        } else {
            return !isWin(bi.clearBit(bi.bitLength() - 1));
        }
    }

    static void cherry() throws NumberFormatException, IOException {
        int T = nextInt();
        for (int t = 0; t < T; t++) {
            BigInteger bi = new BigInteger(nextToken());
            writer.println(isWin(bi) ? "Louise" : "Richard");
        }
    }
}
