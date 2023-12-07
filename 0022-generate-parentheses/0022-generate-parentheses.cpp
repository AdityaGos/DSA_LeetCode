class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        createCombination(answer,"", n,n);
        return answer;
    }
    
   void createCombination(vector<string> & answer, string combination,int close, int open)
   {
        if(close == 0 && open==0)
        {
            answer.push_back(combination);
            return;
        }
       
       if(open>0) createCombination(answer, combination+"(",close, open-1);
       
       if(close>open) createCombination(answer, combination+")", close-1, open);
   }
}; 