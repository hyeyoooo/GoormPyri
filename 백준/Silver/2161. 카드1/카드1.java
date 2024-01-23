import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        
        Queue<Integer> card = new LinkedList<Integer>();
        
        for (int i = 0; i < n; i++) {
            card.add(i + 1);
        }
        
        while (card.size() > 1) {
            System.out.print(card.poll() + " ");
            
            card.add(card.poll());
        }
        System.out.println(card.poll());
    }
}