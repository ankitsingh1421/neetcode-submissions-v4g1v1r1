class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // this is o(n) approch using set;
        //    set<int> unique(nums.begin(),nums.end());
        //     int i =0;
        //     for(int num:unique){
        //          nums[i++] = num;
        //     }
        //     return unique.size();   
            
        // this is best approch o(1);
         int i =0;
         for(int j =1;j<nums.size();j++){
            if(nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
         }
        return i+1;
    }

};