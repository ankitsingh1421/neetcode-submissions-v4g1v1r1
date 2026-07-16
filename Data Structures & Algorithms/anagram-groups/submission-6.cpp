class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
            for(auto it: strs){
              string shorteds = it;
              sort(shorteds.begin(),shorteds.end());
              mp[shorteds].push_back(it);
            }
            vector<vector<string>>ans;
          for(auto pair : mp){
            ans.push_back(pair.second);
          }

          return ans;
    }
};
