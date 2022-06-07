// https://leetcode.com/problems/valid-parentheses/

class Solution {
    public boolean isValid(String s) {
        // int c = 0;
        int n = s.length();
        int flag = 0;
        
        for(int c = 0; c< n ; c++){
            if(s.charAt(c) == '('){
                if(s.charAt(c+1) == ')' || s.charAt(n-c) == ')'){
                    flag++;
                }
            }
            else if(s.charAt(c) == '{'){
                if(s.charAt(c+1) == '}' || s.charAt(n-c) == '}'){
                    flag++;
                }
            }
            else if(s.charAt(c) == '['){
                if(s.charAt(c+1) == ']' || s.charAt(n-c) == ']'){
                    flag++;
                }
            }
            //count++;
        }
        if(flag == n/2)
            return true;
        else{
            return false;
        }
    }
}
