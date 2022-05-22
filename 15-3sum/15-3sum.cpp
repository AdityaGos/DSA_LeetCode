class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
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
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[low]);
                    v.push_back(nums[high]);
                    ans.push_back(v);
                    low++;
                    while(nums[low]==nums[low-1] && low<high){ low++;}
                
                }
               
                
            }
        }
        return ans;
    }
};