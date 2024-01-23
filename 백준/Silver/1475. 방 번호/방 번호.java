import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String N = br.readLine();
        int[] count = new int[10];

        // 각 숫자가 몇 번 사용되는지 카운트
        for (int i = 0; i < N.length(); i++) {
            count[N.charAt(i) - '0']++;
        }

        // 6과 9 처리
        int sixNineCount = (count[6] + count[9] + 1) / 2;

        // 가장 많이 사용된 숫자 찾기
        int maxCount = 0;
        for (int i = 0; i < 10; i++) {
            if (i != 6 && i != 9) {
                maxCount = Math.max(maxCount, count[i]);
            }
        }
        maxCount = Math.max(maxCount, sixNineCount);

        System.out.println(maxCount);
    }
}
