// https://leetcode.com/problems/sort-colors/submissions/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int temp = 0;
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n; j++){
                if(nums[i] < nums[j]){
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }    
    }
}
};
