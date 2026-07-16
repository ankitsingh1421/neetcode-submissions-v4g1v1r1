class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
           int n = nums.size();
        unordered_set<int>s;
        for(auto it : nums){
          if(s.count(it)){
            return true;
          }
          s.insert(it);
        }
        return false;
    }
};