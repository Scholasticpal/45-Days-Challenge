// https://leetcode.com/problems/palindrome-number/

//Test cases covers, 121,-121, 998765432

class Solution {
    public boolean isPalindrome(int x) {
        int rev = 0;
        int temp = x;
        while(temp != 0 && temp > 0){
            rev = rev*10;
            rev = rev + temp%10;
            temp = temp/10;
        }
        if (rev == x){
            
            return true;
        }
        else{
            return false;
        }
    }
}
