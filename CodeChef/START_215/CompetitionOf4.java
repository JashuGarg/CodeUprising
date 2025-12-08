import java.util.*;
class CompetitionOf4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int X = sc.nextInt();
        
        int result = switch (X) {
            case 1 -> 8000;
            case 2 -> 4000;
            case 3 -> 2000;
            case 4 -> 1000;
            default -> 0;
        };
        System.out.println(result);
        sc.close();
    }
}
