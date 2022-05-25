// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        if(n==1){ return 0; }
        if(arr[0]==0){ return -1; }
        int farthest=0;
        int left=0,right=0,jump=0;
       while(right<n-1)
        {
            for(int i=left;i<=right;i++)
            {
                farthest=max(farthest,i+arr[i]);
                
            }
            if(farthest <n-1 && arr[farthest]==0 && right<n-1 && left!=0){ return -1; }
            left=right+1;
            right=farthest;
            jump++;
            
        }
       return jump;
       // 15
        // 9 10 1 2 3 4 8 0 0 0 0 0 0 0 1
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends