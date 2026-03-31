class Solution {
public:
    int majorityElement(vector<int>& nums) {
          unordered_map<int,int> mymap;
    for(int i =0;i<nums.size();i++){
        mymap[nums[i]]++;

        if(mymap[nums[i]] > nums.size()/2){
            return  nums[i];
            break;
        }
    }



    }
};