class Solution {
    
public:
    
    void helper(vector<vector<int>> &ans, vector<int> &ds, int target,int ind,vector<int> &candidates)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<candidates.size();i++)
        {
            if(i>ind && candidates[i]==candidates[i-1]){ continue;}
            if(candidates[i]>target){ break;}
            ds.push_back(candidates[i]);
            helper(ans,ds,target-candidates[i],i+1,candidates);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        helper(ans,ds,target,0,candidates);
        return ans;
    }
};