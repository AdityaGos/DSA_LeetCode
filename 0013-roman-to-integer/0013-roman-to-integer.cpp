class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> romanArray{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int convertedValue=0;
        for(int i=0;i<s.size()-1;i++){
            if(romanArray[s[i]]>=romanArray[s[i+1]])
            {
                convertedValue+=romanArray[s[i]];
            }
            else{ 
                convertedValue-=romanArray[s[i]];
            }
        }
        convertedValue+=romanArray[s[s.size()-1]];
        // cout<<romanArray[s[s.size()-1]];
        return convertedValue;
        
    }
};