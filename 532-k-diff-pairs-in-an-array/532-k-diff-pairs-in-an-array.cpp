class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // 2 pointer method 
        // Time Complexity -O(nlogn)
        // Space Complexity -O(1)
        sort(nums.begin(),nums.end());
        int i=0,j=1,count=0;
        for(i,j;i<nums.size() && j<nums.size();)
        {
            if(i==j || nums[j]-nums[i] <k){ j++;}
            else{
                if(nums[j]-nums[i]==k)
                {
                    count++;
                    j++;
                    while(j<nums.size()&& nums[j-1]==nums[j]){ j++;}
                    
                }
                i++;
                while(i<j && nums[i]==nums[i-1]){ i++;}
                
            }
        }
        return count;
    }
};