import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static long M = 1000000007;
    
    
	public static void main (String[] args) throws java.lang.Exception
	{
		FastReader s = new FastReader();
		BufferedWriter output = new BufferedWriter(
            new OutputStreamWriter(System.out));
        
        
        int N = s.nextInt();
        int M = s.nextInt();
        
        Set<Integer> specialFriends = new HashSet<>();
        Queue<Pair> specialQueue = new PriorityQueue<>();
        Queue<Pair> othersQueue = new PriorityQueue<>();

        for (int i = 0; i < N; i++) {
            int val = s.nextInt();
            specialFriends.add(val);
        }

        for (int i = 0; i < M; i++) {
            int f = s.nextInt();
            int p = s.nextInt();
            String str = s.next();

            if (specialFriends.contains(f)) {
                specialQueue.offer(new Pair(f, p, str));
            } else { 
                othersQueue.offer(new Pair(f, p, str));
            }

        }
        
        StringBuilder ans = new StringBuilder();
        
        while (!specialQueue.isEmpty()) {
            String post = specialQueue.poll().str;
            ans.append(post + "\n");
        }
        
        while (!othersQueue.isEmpty()) {
            String post = othersQueue.poll().str;
            ans.append(post + "\n");
        }

        output.write(ans + "");
        
        output.flush();
	}
	
	static class Pair implements Comparable<Pair> {
        int f;
        int p;
        String str;

        Pair(int f, int p, String str) {
            this.f = f;
            this.p = p;
            this.str = str;
        }

        public int compareTo(Pair o) {
            return o.p - this.p;
        }

    }
	
	private static int[] takeArrInput(FastReader fr, int N) {
        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = fr.nextInt();
        }

        return arr;
    }
	
}
class FastReader {
    BufferedReader br;
    StringTokenizer st;

    public FastReader() {
        br = new BufferedReader(
                new InputStreamReader(System.in));
    }

    String next() {
        while (st == null || !st.hasMoreElements()) {
            try {
                st = new StringTokenizer(br.readLine());
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        return st.nextToken();
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
        String str = "";
        try {
            str = br.readLine();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return str;
    }
}
