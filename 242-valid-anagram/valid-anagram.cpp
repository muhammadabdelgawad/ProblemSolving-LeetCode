class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        return false;
        unordered_map<char,int> MapS;
        unordered_map<char,int> MapT;
        for(int i=0; i<s.length();i++)
        {
            MapS[s[i]]++;
            MapT[t[i]]++;
        }
         return MapS==MapT;

       
    }
};