class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
         if(nums.size()<3) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1]){ continue;}
            int low=i+1,high=nums.size()-1;
            while(low<high)
            {
                
                int threesum=nums[i]+nums[low]+nums[high];
                if(threesum>0){ high--;}
                else if(threesum<0){ low++;}
                else
                {  ans.push_back({nums[i],nums[low],nums[high]});
                    while(low < high && nums[low] == nums[low+1]) low++;
                    while(low < high && nums[high] == nums[high-1]) high--;
                 low++;
                 high--;
                
                }
               
                
            }
        }
        return ans;
    }
};