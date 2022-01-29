import java.util.Scanner;

public class DiagonalDifferernce {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
        int n ;
        int diag1 = 0 ; int diag2 = 0;
        n = Integer.parseInt(in.nextLine());
        for(int i =0 ; i < n; i++){
            String str[] = in.nextLine().split(" ");
            diag1 = diag1 + Integer.parseInt(str[i]);
            diag2 = diag2 + Integer.parseInt(str[n-1-i]);
        }
        
        int diagDiff = Math.abs(diag1 -  diag2);        
        System.out.println(diagDiff);
    }    
}
