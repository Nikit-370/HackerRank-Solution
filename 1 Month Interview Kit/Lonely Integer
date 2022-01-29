import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
import java.io.IOException;

public class Solution{
    public static void main(String[] args) throws IOException {
    try {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        boolean arr[] = new boolean[101];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            int a = Integer.parseInt(st.nextToken());
            arr[a] = !arr[a];
        }
        for (int i = 0; i < 101; i++) {
            if(arr[i]) {
                System.out.println(i);
                break;
            }
        }
        }
    catch(Exception e) {
    }
}
}
