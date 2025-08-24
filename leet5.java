class Solution {
    public static String pal(int i,int j,String s) {
	while(i >=0 && j <s.length()) {
		if(s.charAt(i) != s.charAt(j)) {
			if(j-i == 1) return " ";
			else return s.substring(i+1,j); 
		}
		i--;
		j++;
	}
	return s.substring(i+1,j);
}
    public String longestPalindrome(String s) {
        String ans = "";
        for(int i = 0;i < s.length();i++) {
            String odd = pal(i,i,s);
            String even = pal(i,i+1,s);
            if(odd.length() < even.length()) odd=even;
            if(odd.length() > ans.length()) ans=odd;
        }
        return ans;
    }
}