class Solution {

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
    set<string> seen;
       for(int i=0;i<9;i++)
       {
           for(int j=0;j<9;j++)
           {
             if(board[i][j]!='.')
               {
                if(seen.find("rows"+to_string(i)+board[i][j])==seen.end() 
               && seen.find("cols"+to_string(j)+board[i][j])==seen.end() 
               && seen.find("boxs"+to_string((i/3)*3 +j/3) +board[i][j])==seen.end())
                {
                    seen.insert("rows"+to_string(i)+board[i][j]);
                    seen.insert("cols"+to_string(j)+board[i][j]);
                    seen.insert("boxs"+to_string((i/3)*3 +j/3) +board[i][j]);
                        
                }
                 else { return false;}
               }
           }
       }
        return true;

        
    }
};