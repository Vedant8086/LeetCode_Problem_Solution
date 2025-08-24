class Solution {
    List<Integer> x;
    public boolean isHappy(int n) {
        x = new ArrayList<>();
        int sum = 0;
        while(n > 1) {
            n = next(n);
            if(x.contains(n)) return false;
            x.add(n);
        } 
        return true;
    }
    public static int next(int n) {
        int sum = 0;
        while(n != 0) {
            sum = sum + (n % 10) * (n % 10);
            n = n / 10;
        }
        return sum;
    }
}