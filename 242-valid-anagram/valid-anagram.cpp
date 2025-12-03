class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char,int> res1;
        unordered_map<char,int> res2;
        
        for(int i=0;i<s.size();i++){
            res1[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            res2[t[i]]++;
        }
        return res1==res2;
    }
};