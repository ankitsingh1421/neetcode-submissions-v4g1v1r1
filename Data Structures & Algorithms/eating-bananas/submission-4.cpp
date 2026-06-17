class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int res = r;

        while(l <= r){
            int mid = l + (r - l)/2;
            long long  totaltime = 0;
            for(auto p : piles){
                totaltime += ceil(static_cast<double>(p)/mid);
            }
            if(totaltime <= h){
                res = mid ;
                r = mid - 1 ;
            }else{
                l = mid + 1;
            }
        }
        return res;

    }
};
