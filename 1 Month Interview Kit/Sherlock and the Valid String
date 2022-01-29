import java.io.*;
import java.util.*;
import java.math.BigInteger;
import java.util.Map.Entry;

import static java.lang.Math.*;

public class Solution extends PrintWriter {

	boolean solve() {

		char[] str = nextLine().toCharArray();

		int m = 256, n = str.length + 1;
		int[] cnt = new int[m];
		for (char c : str) {
			++cnt[c];
		}

		int[] f = new int[n];

		for (int val : cnt) {
			++f[val];
		}

		int x = 0;
		for (int i = 1; i < n; i++) {
			if (f[i] > 0) {
				++x;
			}
		}

		if (x == 1) {
			return true;
		}

		if (x > 2) {
			return false;
		}

		int y = 0;

		for (int i = 2; i < n; i++) {
			if (f[i] > 0) {
				++y;
			}
		}

		if (y == 1 && f[1] == 1) {
			return true;
		}

		int z = 0;

		for (int i = 2; i < n; i++) {
			if (f[i] == 1 && f[i - 1] > 0) {
				++z;
			}
		}

		return z == 1;
	}

	void run() {
		println(solve() ? "YES" : "NO");
	}

	int[][] nextMatrix(int n, int m) {
		int[][] matrix = new int[n][m];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
				matrix[i][j] = nextInt();
		return matrix;
	}

	String next() {
		while (!tokenizer.hasMoreTokens())
			tokenizer = new StringTokenizer(nextLine());
		return tokenizer.nextToken();
	}

	boolean hasNext() {
		while (!tokenizer.hasMoreTokens()) {
			String line = nextLine();
			if (line == null) {
				return false;
			}
			tokenizer = new StringTokenizer(line);
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
			return reader.readLine();
		} catch (IOException err) {
			return null;
		}
	}

	public Solution(OutputStream outputStream) {
		super(outputStream);
	}

	static BufferedReader reader;
	static StringTokenizer tokenizer = new StringTokenizer("");
	static Random rnd = new Random();

	public static void main(String[] args) throws IOException {
		Solution solution = new Solution(System.out);
		reader = new BufferedReader(new InputStreamReader(System.in));
		solution.run();
		solution.close();
		reader.close();

	}
}
