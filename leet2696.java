class Solution {
    public int minLength(String s) {
        for(int i = 0;i <= s.length()-2;) {
            String xi = s.substring(i,i+2);
            if(xi.equals("AB") || xi.equals("CD")) {
                s = s.substring(0,i) + s.substring(i+2);
                i = 0;
            }
            else i++;
        }
        return s.length();
    }
}