class Solution {
public:
    int jump(vector<int>& nums) {
        int left=0,right=0,farthest=0,jump_count=0;
        while(right<nums.size()-1)
        {
            for(int i=left;i<=right;i++)
            {
                farthest=max(farthest,i+nums[i]);
            }
            left=right+1;
            right=farthest;
            jump_count++;
            
        }
        return jump_count;
    }
};