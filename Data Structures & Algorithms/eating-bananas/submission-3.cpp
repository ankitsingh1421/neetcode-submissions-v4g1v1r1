class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int speed = 1;
        while(true){
            long long totaltime = 0;
            for(int pile : piles){
                totaltime +=  ceil((double)pile/speed);
            }
            if(totaltime <= h){
                return speed;
            }
            speed++;
        }
    }
};
