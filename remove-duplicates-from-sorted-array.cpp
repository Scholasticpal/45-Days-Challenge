// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

// More efficient approach: O(n)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int n = nums.size();

    int k = 1;
        
    for(int i = 1; i< n; i++){
        if(nums[k-1] == nums[i]){
            continue;
        }
        else{
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
    }
};

// O(n2) approach
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
