class Solution {
public:
    void helper( vector<int> & nums,int ind,vector<vector<int>> &ans,vector<int> &a)
    {
        if(ind>=nums.size())
        {
            ans.push_back(a);
            // if(a.size()==0){ ans.push_back({});}
            return;
        }
        
        a.push_back(nums[ind]);
        helper(nums,ind+1,ans,a);
        a.pop_back();
        helper(nums,ind+1,ans,a);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        helper(nums,0,ans,a);
        return ans;
        
    }
};