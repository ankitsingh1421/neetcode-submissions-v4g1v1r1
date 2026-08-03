class Solution {
public:
  void revpart(vector<int>& nums , int start , int end){
    while(start < end){
        swap(nums[start ++],nums[end--]);
    }
  }
    void rotate(vector<int>& nums, int k) {
          int n = nums.size();
          if(n < 0) return ;
           k = k % n ;
        if(k == 0) return ;
        revpart(nums,0,n-1);
        revpart(nums,0,k-1);
        revpart(nums,k,n-1);
    }
};