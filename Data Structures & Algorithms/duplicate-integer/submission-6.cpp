class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>ans;

        for(auto it : nums){
          if(ans.count(it)){
            return true;
          }
          ans.insert(it);
        }
        return false;
    }
};