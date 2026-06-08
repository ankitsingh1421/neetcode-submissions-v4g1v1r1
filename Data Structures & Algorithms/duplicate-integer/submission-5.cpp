class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      int n = nums.size();
      unordered_set<int>check;
      for(int i =0;i<n;i++){
          if(check.count(nums[i])) return true;
          check.insert(nums[i]);
      }
      return false;
        
    }
};