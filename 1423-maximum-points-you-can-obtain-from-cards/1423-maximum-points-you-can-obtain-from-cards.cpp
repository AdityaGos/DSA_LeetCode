class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int ans=0,val=0;
        for(int i=0;i<k;i++){ ans+=cardPoints[i];}
        int sum=ans;
        int left=k-1;
        for(int i=cardPoints.size()-1;i>=0 && left>=0;i--)
        {
            ans-=cardPoints[left];
            val+=cardPoints[i];
            int main=ans+val;
            // cout<<" val"<<val<<" cardPoint[i] ->"<<cardPoints[i];
            sum=max(main,sum);
            left--;
        }
        return sum;
    }
};