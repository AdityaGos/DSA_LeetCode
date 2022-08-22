class Solution {
    
    void helper(vector<vector<int>> & ans,vector<int> & candidates, int ind,vector<int> &ds,int target)
    {
        if(ind==candidates.size())
        {
            if(target==0){ ans.push_back(ds);}
            return;
        }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            helper(ans,candidates,ind,ds,target-candidates[ind]);
            ds.pop_back();
        }
        helper(ans,candidates,ind+1,ds,target);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        helper(ans,candidates,0,ds,target);
        return ans;
    }
};