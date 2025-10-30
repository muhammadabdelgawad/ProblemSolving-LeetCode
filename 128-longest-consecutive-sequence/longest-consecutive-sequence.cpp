class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());
        int mx = 0;
        for (auto num : st) {
            
            if (!st.count(num - 1)) {
                int len = 1;
                int current = num;

                while (st.count(current + 1)) {
                    current++;
                    len++;
                }

                mx = max(mx, len);
            }
        }

        return mx;
    }
};
