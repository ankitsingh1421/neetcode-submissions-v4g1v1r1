class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto it : nums){
            mp[it]++;
        }
        vector<pair<int,int>> mypair;
        for(const auto& n : mp){
            mypair.push_back({n.second,n.first});
        }
        sort(mypair.rbegin(),mypair.rend());
        vector<int> ans;
        for(int i =0;i<k;i++){
            ans.push_back(mypair[i].second);
        }
        return ans;
        
    }

};
