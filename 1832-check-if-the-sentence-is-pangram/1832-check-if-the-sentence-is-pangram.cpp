class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a[26]={0};
        int count =0;
        
        for(int i=0;i<sentence.size();i++)
        {
            if(a[sentence[i]-'a']==0){ a[sentence[i]-'a']=1; count++;}
        }
        for(int i=0;i<26;i++){ cout<<a[i]<<" "; }
        if(count==26){ return true;}
        return false;
    }
    
};