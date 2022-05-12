// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int n = nums.size();

    int i = 0,k = 0;
    
    while(i < n)
    {
        while(i+1<n && nums[i+1] == nums[i])
        {
            i++;
        }
        nums[k++] = nums[i++];
    }
    
    return k;
  }
};
