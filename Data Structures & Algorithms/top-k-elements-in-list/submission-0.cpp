class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mymap;
         // store all the elements in the hash table;
          for(int x : nums){
             mymap[x]++;
          }
          vector<pair<int,int>> uniquehere;
          for(const auto& val : mymap){
            uniquehere.push_back({val.second,val.first});
          }
            sort(uniquehere.rbegin(),uniquehere.rend());
            vector<int>ans;
            for(int i =0;i<k;++i){
              ans.push_back(uniquehere[i].second);
            }
            return ans;
    }
};
