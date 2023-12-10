class Solution {
public:
    
    int helper(int ind, int n, vector<int> & nums, int currSum, int target)
    {
        if(ind == n)
        {
            if(currSum == target){ return 1;}
            else { return 0; } 
        }
        // picking the element and using as sum
       // currSum+= nums[ind];
        int pickAdd= helper( ind+1, n,nums,  currSum+nums[ind] , target);
        
        // picking the element and using them to subtract
        
       // currSum-=nums[ind];
        int pickRemove = helper(ind+1, n,nums, currSum-=nums[ind]  , target);
        
        return pickAdd+pickRemove;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n = nums.size();
        int currSum = 0;
        int answer = helper(0, n, nums , currSum, target);
        return answer ; 
        
    }
};