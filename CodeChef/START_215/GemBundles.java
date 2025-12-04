import java.util.*;

class GemBundles {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while (t-- > 0) {
            int R = sc.nextInt();
            int B = sc.nextInt();
            int G = sc.nextInt();
            
            int sum = 0;
            int min = Math.min(R, Math.min(B, G));
            
            sum += min * 10;
            sum += ((R - min) + (B - min) + (G - min)) * 3;
            
            System.out.println(sum);
        }
        
        sc.close();
    }
}
