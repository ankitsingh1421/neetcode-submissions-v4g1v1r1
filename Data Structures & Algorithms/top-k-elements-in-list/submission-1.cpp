class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      unordered_map<int , int> mymap;

      for(auto num : nums){
        mymap[num]++;
      }
      vector<pair<int ,int>> unique;
      for(const auto& val : mymap){
        unique.push_back({val.second,val.first});
      }
      sort(unique.rbegin(),unique.rend());

vector<int> ans;
      for(int i =0;i<k;++i){
          ans.push_back(unique[i].second);
      }
      return ans;
        
    }
};
