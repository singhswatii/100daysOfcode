class Solution {
public:
    string truncateSentence(string s, int k) {
        s = s + " ";
        int n = s.length();
        
        int spcCount = 0, i = 0;
        while(spcCount != k){
            if(s[i] == ' '){
                spcCount++;
                if(spcCount == k){
                    return s.erase(i);
                }
            }
            i++;
        }
        return "";  
    }
};
