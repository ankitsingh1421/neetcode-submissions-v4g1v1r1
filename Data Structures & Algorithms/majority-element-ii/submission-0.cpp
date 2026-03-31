class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> myset;
        int n = nums.size();
        for(int num : nums){
            int count = 0 ;
            for(int val : nums){
                if(val == num){
                    count++;
                }
            }
            if(count > n/3){
                myset.insert(num);
            }
        }
        return  vector<int>(myset.begin(),myset.end()) ;
    }
};