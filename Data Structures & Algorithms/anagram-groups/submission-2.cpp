class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string,vector<string>> mymap;
            for(auto s : strs){
                string sorteds = s;
                sort(sorteds.begin(),sorteds.end());
                mymap[sorteds].push_back(s);
            }
            vector<vector<string>> res;
            for(auto& pair : mymap){
                res.push_back(pair.second);
            }
            return res;
    }
};
