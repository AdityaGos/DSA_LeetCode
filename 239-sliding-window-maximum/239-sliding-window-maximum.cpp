class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> window;
        for(int i=0;i<k;i++)
        {
            while(window.size() && nums[i]>=nums[window.back()])
            {
                window.pop_back();
            }
            window.push_back(i);
        }
        ans.push_back(nums[window.front()]);
        for(int i=k;i<nums.size();i++)
        {
            if(window.size() && i-window.front()>=k){ window.pop_front();}
            while(window.size() && nums[i]>=nums[window.back()]){ window.pop_back();}
            window.push_back(i);
            ans.push_back(nums[window.front()]);
        }
        return ans;
    }
};