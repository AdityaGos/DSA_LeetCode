class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        set<int> st;
        for(int i=0;i<nums.size();i++)
        {
            if(st.count(nums[i])){ st.erase(nums[i]);}
            else st.insert(nums[i]);
        }
        for(auto x:st)
        {
            ans=x;
        }
        return ans;
    }
};