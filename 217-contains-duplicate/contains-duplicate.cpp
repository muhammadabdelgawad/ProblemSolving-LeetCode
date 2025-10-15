class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         set<int> s ;
         for(int i=0; i<nums.size();i++)
         {
            s.insert(nums[i]);
            if(s.size()!= i+1) 
            { return true;}
         }
         return false;


    }
};