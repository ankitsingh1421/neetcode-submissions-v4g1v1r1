class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mymap;
        for(int num:nums){
            mymap[num]++;
        }
        vector<pair<int,int>> uniquehere;
        for(const auto& val:mymap){
            uniquehere.push_back({val.second,val.first});
        }
        sort(uniquehere.rbegin(),uniquehere.rend());
        vector<int>ans;
        for(int i =0;i<k;i++){
            ans.push_back(uniquehere[i].second);
        }
        return ans;
    }
};
