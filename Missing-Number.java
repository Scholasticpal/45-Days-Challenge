//https://leetcode.com/problems/missing-number/submissions/

//Brute Force Approach
class Solution {
    public int missingNumber(int[] nums) {
        int n = nums.length;
        int x = 0;
        Arrays.sort(nums);
        for(int i = 0; i< n; i++){
             if(i != nums[i]){
                System.out.print(i);
                 x = i;
                 break;
             }
        } 
        if(nums[n-1] != n){
            System.out.print(n);
            x = n;
        }
        return x; 
    }
}

