class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int num : nums)
        { 
            count[num]++;
        }
        vector<pair<int,int>> array;
        for(const auto& p : count)
        {
            array.push_back({p.second,p.first});
        }
        sort(array.rbegin(),array.rend());

        vector<int> results;
        for(int i=0; i<k ;++i)
        {
            results.push_back(array[i].second);
        }
        return results;
    }
};