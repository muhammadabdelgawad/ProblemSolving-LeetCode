class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,vector<string>> mapAnagramsToVector;
        for(int i=0;i<strs.size();++i)
        {
            string str= strs[i];
            map<char,int>freqMap;
            for(int j=0;j<str.size();++j)
            freqMap[str[j]]++;

            mapAnagramsToVector[freqMap].push_back(str);
        }
        vector<vector<string>> anagrams;
        for(auto &[key,value]:mapAnagramsToVector){
            anagrams.push_back(value);
        }
        return anagrams;
    }
};