class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int pos=0;
        int n=max(word1.size(),word2.size());
        while(pos<n){
            if(pos<word1.size()){
                res+=word1[pos];
            }
            if(pos<word2.size()){
                res+=word2[pos];
            }
            pos++;

        }
        return res;
    }
};