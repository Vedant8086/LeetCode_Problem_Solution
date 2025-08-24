class Solution {
    static String[] arr = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    List<String> l = new ArrayList<>();
    public  void keypad(String ans,int idx,String digit) {
        if(ans.length() == digit.length()) {
            l.add(ans);
            return;
        }
        int d  = digit.charAt(idx)-'0';
        String s = arr[d];
        for(int i = 0;i < s.length();i++) {
            keypad(ans+s.charAt(i), idx + 1, digit);
        }
    }
    public List<String> letterCombinations(String digits) {
            if(digits.equals("")) {
                return l;
            }
            else {
                String ans = "";
                int index = 0;
                keypad(ans,index,digits);
                return l;
            }

    }
}