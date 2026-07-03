class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(auto it : strs){
            string sortedString = it;
            sort(sortedString.begin(),sortedString.end()) ;
            mp[sortedString].push_back(it);
        }
        vector<vector<string>>res;
        for(auto& pair : mp){
            res.push_back(pair.second);
        }
        return res;
    }
};
