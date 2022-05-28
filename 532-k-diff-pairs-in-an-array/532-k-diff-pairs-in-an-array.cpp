class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1]){ continue;}
            int low=i,high=nums.size()-1;
            while(low<high)
            {
                sum=nums[high]-nums[low];
                if(sum>k){ high--;}
                else if(sum<k){ low++;}
                if(sum==k)
                {
                    count++;
                    break;
                }
            }
        }
       
        return count;
    }
};