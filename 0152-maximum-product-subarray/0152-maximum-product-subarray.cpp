class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int preSum=1, sufSum=1;
        int numsSize= nums.size();
        int maxProduct=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            preSum=preSum*nums[i];
            sufSum=sufSum*nums[numsSize-i-1];
            maxProduct= max(maxProduct, max(preSum,sufSum));
            if(nums[i]== 0) { preSum=1; } 
            if(nums[numsSize-i-1]== 0){sufSum=1; } 
     
           

            
            
        }
        return maxProduct;
    }
};