import java.util.Scanner;
import java.util.Arrays;

public class Solution {
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);

		int n = in.nextInt();
		int k = in.nextInt();

		int[] p = new int[n];
		for (int i = 0; i < n; ++i) p[i] = in.nextInt();

		Arrays.sort(p);
	
		int uncover = 0;
		int lamp = -1;
		int count = 0;

		for (int i = 1; i < n; ++i){
			if (uncover <= lamp && p[i] - p[lamp] > k) uncover = i;
  
			if (uncover > lamp && p[i] - p[uncover] > k) {
				++count;
				lamp = i - 1;
				--i;
			}
		}

		if (lamp == -1 || p[n - 1] - p[lamp] > k) {
			++count;
			lamp = n - 1;
		}

		System.out.println(count);
	}
}
