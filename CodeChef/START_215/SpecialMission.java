import java.util.*;

class SpecialMission {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        
        while (T-- > 0) {
            int N = sc.nextInt();
            int C = sc.nextInt();
            
            int[] A = new int[N];
            for (int i = 0; i < N; i++) {
                A[i] = sc.nextInt();
            }
            
            String S = sc.next();

            int freeCoins = 0;     // Coins from non-special missions
            int specialCoins = 0;  // Total coins from special missions

            for (int i = 0; i < N; i++) {
                if (S.charAt(i) == '0') {
                    freeCoins += A[i];
                } else {
                    specialCoins += A[i];
                }
            }

            int result = freeCoins;

            // Check if paying C gives profit & is possible
            if (specialCoins >= C && freeCoins >= C) {
                result = freeCoins - C + specialCoins;
            }

            System.out.println(result);
        }
        sc.close();
    }
}
